#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOBKAONOBAK;
namespace System { class Object; }

#define OOBKAONOBAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8970)
#define OOBKAONOBAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA89B0)
#define OOBKAONOBAK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEA89C0)

inline static constexpr unsigned int OOBKAONOBAK___c_TypeDefinitionIndex = 25127;

	class OOBKAONOBAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x261F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBKAONOBAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK___C_CTOR_OFFSET))(this);
		}

		::OOBKAONOBAK* __cctor_b__33_0()
		{
			return ((::OOBKAONOBAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
