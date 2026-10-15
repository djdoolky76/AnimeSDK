#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDCPCNBPAD;
namespace System { class Object; }

#define DFDCPCNBPAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19DA30)
#define DFDCPCNBPAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19DA70)
#define DFDCPCNBPAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E19DA80)

inline static constexpr unsigned int DFDCPCNBPAD___c_TypeDefinitionIndex = 28440;

	class DFDCPCNBPAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDCPCNBPAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD___C_CTOR_OFFSET))(this);
		}

		::DFDCPCNBPAD* __cctor_b__23_0()
		{
			return ((::DFDCPCNBPAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
