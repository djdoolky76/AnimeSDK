#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGLPONENAKN;
class JPMCBFLFDIL;
class PEEAINPOGLK;

#define GENGKBKLHDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x209376C0)
#define GENGKBKLHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x209376B0)
#define GENGKBKLHDM_FHDGKNMLEJJ_OFFSET UNITYSDK_OFFSET(0x20934E60)

inline static constexpr unsigned int GENGKBKLHDM_TypeDefinitionIndex = 44953;

	class GENGKBKLHDM : public ::System::Object
	{
	public:
		static ::PEEAINPOGLK** StaticGet_FMJPMFEDIJL()
		{
			return (::PEEAINPOGLK**)UnitySDK::FromName("", "GENGKBKLHDM")->GetStaticField(0x1070);
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
