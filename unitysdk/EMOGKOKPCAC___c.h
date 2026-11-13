#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMOGKOKPCAC;
namespace System { class Object; }

#define EMOGKOKPCAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206DEE60)
#define EMOGKOKPCAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206DEEA0)
#define EMOGKOKPCAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x206DEEB0)

inline static constexpr unsigned int EMOGKOKPCAC___c_TypeDefinitionIndex = 30583;

	class EMOGKOKPCAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMOGKOKPCAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOGKOKPCAC___C_CTOR_OFFSET))(this);
		}

		::EMOGKOKPCAC* __cctor_b__28_0()
		{
			return ((::EMOGKOKPCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOGKOKPCAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
