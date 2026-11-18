#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Object.h"

class AGJFJGEMIPB;
class DIAEPBNFKBO;
class GEIHCPAOKKK;

#define EMMEKJMDDMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F45030)

inline static constexpr unsigned int EMMEKJMDDMN_TypeDefinitionIndex = 79192;

class EMMEKJMDDMN : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsComponentTask_1<::DIAEPBNFKBO*>* StaticGet_GNOJJMDPJHG()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::DIAEPBNFKBO*>*)Il2CppClass::FromTypeDefinitionIndex(EMMEKJMDDMN_TypeDefinitionIndex)->GetStaticField(0x366A0);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::GEIHCPAOKKK*>* StaticGet_MKGGHOKFPKI()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::GEIHCPAOKKK*>*)Il2CppClass::FromTypeDefinitionIndex(EMMEKJMDDMN_TypeDefinitionIndex)->GetStaticField(0x36730);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::AGJFJGEMIPB*>* StaticGet_KCLMMPLKPIA()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::AGJFJGEMIPB*>*)Il2CppClass::FromTypeDefinitionIndex(EMMEKJMDDMN_TypeDefinitionIndex)->GetStaticField(0x367C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMMEKJMDDMN__CCTOR_OFFSET))();
	}
};
