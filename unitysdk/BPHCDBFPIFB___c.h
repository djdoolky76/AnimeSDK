#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHCDBFPIFB;
namespace System { class Object; }

#define BPHCDBFPIFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01A0D0)
#define BPHCDBFPIFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01A110)
#define BPHCDBFPIFB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E01A120)

inline static constexpr unsigned int BPHCDBFPIFB___c_TypeDefinitionIndex = 32592;

	class BPHCDBFPIFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHCDBFPIFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB___C_CTOR_OFFSET))(this);
		}

		::BPHCDBFPIFB* __cctor_b__28_0()
		{
			return ((::BPHCDBFPIFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
