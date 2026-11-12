#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKEMNFGCBLO;
namespace System { class Object; }

#define NKEMNFGCBLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F047D60)
#define NKEMNFGCBLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F047DA0)
#define NKEMNFGCBLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F047DB0)

inline static constexpr unsigned int NKEMNFGCBLO___c_TypeDefinitionIndex = 26527;

	class NKEMNFGCBLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C_CTOR_OFFSET))(this);
		}

		::NKEMNFGCBLO* __cctor_b__23_0()
		{
			return ((::NKEMNFGCBLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
