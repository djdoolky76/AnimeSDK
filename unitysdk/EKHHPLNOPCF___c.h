#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKHHPLNOPCF;
namespace System { class Object; }

#define EKHHPLNOPCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C2290)
#define EKHHPLNOPCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C22D0)
#define EKHHPLNOPCF___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E2C22E0)

inline static constexpr unsigned int EKHHPLNOPCF___c_TypeDefinitionIndex = 26853;

	class EKHHPLNOPCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKHHPLNOPCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHHPLNOPCF___C_CTOR_OFFSET))(this);
		}

		::EKHHPLNOPCF* __cctor_b__53_0()
		{
			return ((::EKHHPLNOPCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHHPLNOPCF___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
