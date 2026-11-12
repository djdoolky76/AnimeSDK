#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNHFCHGALDA;
namespace System { class Object; }

#define DNHFCHGALDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D30F0)
#define DNHFCHGALDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D3130)
#define DNHFCHGALDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4D3140)

inline static constexpr unsigned int DNHFCHGALDA___c_TypeDefinitionIndex = 30020;

	class DNHFCHGALDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNHFCHGALDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA___C_CTOR_OFFSET))(this);
		}

		::DNHFCHGALDA* __cctor_b__28_0()
		{
			return ((::DNHFCHGALDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
