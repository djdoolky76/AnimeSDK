#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGLPONENAKN;
class JPMCBFLFDIL;
class PEEAINPOGLK;

#define GENGKBKLHDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC64AE0)
#define GENGKBKLHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64AD0)
#define GENGKBKLHDM_FHDGKNMLEJJ_OFFSET UNITYSDK_OFFSET(0x1CC62280)

inline static constexpr unsigned int GENGKBKLHDM_TypeDefinitionIndex = 43878;

	class GENGKBKLHDM : public ::System::Object
	{
	public:
		static ::PEEAINPOGLK** StaticGet_FMJPMFEDIJL()
		{
			return (::PEEAINPOGLK**)UnitySDK::FromName("", "GENGKBKLHDM")->GetStaticField(0xF70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENGKBKLHDM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENGKBKLHDM_CCTOR_OFFSET))();
		}

		::JPMCBFLFDIL* FHDGKNMLEJJ(::JGLPONENAKN* a1)
		{
			return ((::JPMCBFLFDIL*(*)(::PVOID, ::JGLPONENAKN*))((::PBYTE)hIl2Cpp + GENGKBKLHDM_FHDGKNMLEJJ_OFFSET))(this, a1);
		}

	};
