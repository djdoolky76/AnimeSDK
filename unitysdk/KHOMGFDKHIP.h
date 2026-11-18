#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHOMGFDKHIP_AHIOADHONEC_OFFSET UNITYSDK_OFFSET(0x19954700)
#define KHOMGFDKHIP_MJKKKNKGBJK_OFFSET UNITYSDK_OFFSET(0x19954840)
#define KHOMGFDKHIP_OMFANPBENPP_OFFSET UNITYSDK_OFFSET(0x19954830)
#define KHOMGFDKHIP_PBEMIBCKJMO_OFFSET UNITYSDK_OFFSET(0x199546F0)
#define KHOMGFDKHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x199546E0)

inline static constexpr unsigned int KHOMGFDKHIP_TypeDefinitionIndex = 90372;

class KHOMGFDKHIP : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_LEOGFECDGOI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KHOMGFDKHIP_TypeDefinitionIndex)->GetStaticField(0xFCF0);
	}
	static ::System::Boolean* StaticGet_CEFHBBDGILP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KHOMGFDKHIP_TypeDefinitionIndex)->GetStaticField(0xFCF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOMGFDKHIP__CCTOR_OFFSET))();
	}

	static ::System::Boolean PBEMIBCKJMO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHOMGFDKHIP_PBEMIBCKJMO_OFFSET))();
	}

	static ::System::Void AHIOADHONEC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KHOMGFDKHIP_AHIOADHONEC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean OMFANPBENPP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHOMGFDKHIP_OMFANPBENPP_OFFSET))();
	}

	static ::System::Void MJKKKNKGBJK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KHOMGFDKHIP_MJKKKNKGBJK_OFFSET))(EGEGIMGMJHN);
	}
};
