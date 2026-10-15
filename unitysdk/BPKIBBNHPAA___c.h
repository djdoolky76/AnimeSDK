#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPKIBBNHPAA;
namespace System { class Object; }

#define BPKIBBNHPAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04B0D0)
#define BPKIBBNHPAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04B110)
#define BPKIBBNHPAA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E04B120)

inline static constexpr unsigned int BPKIBBNHPAA___c_TypeDefinitionIndex = 32139;

	class BPKIBBNHPAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x555C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPKIBBNHPAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA___C_CTOR_OFFSET))(this);
		}

		::BPKIBBNHPAA* __cctor_b__43_0()
		{
			return ((::BPKIBBNHPAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKIBBNHPAA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
