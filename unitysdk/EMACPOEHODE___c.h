#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMACPOEHODE;
namespace System { class Object; }

#define EMACPOEHODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AF260)
#define EMACPOEHODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AF290)
#define EMACPOEHODE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2AF2A0)

inline static constexpr unsigned int EMACPOEHODE___c_TypeDefinitionIndex = 30760;

	class EMACPOEHODE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x529A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMACPOEHODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE___C_CTOR_OFFSET))(this);
		}

		::EMACPOEHODE* __cctor_b__18_0()
		{
			return ((::EMACPOEHODE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
