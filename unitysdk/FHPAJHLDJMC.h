#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/IODFHIILJDG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

namespace UnrealTypes { class Object; }

#define FHPAJHLDJMC_EBMCJJDLCKE_OFFSET UNITYSDK_OFFSET(0x14296F40)
#define FHPAJHLDJMC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14296D40)
#define FHPAJHLDJMC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14296E80)
#define FHPAJHLDJMC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14297150)
#define FHPAJHLDJMC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14296BC0)
#define FHPAJHLDJMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14296D90)
#define FHPAJHLDJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14296E10)

inline static constexpr unsigned int FHPAJHLDJMC_TypeDefinitionIndex = 74408;

class FHPAJHLDJMC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x2; // 0x0
	::UnrealTypes::Object* PAINIKKDCLP; // 0x48
	::Foundation::AssetPath FKCBEFFMCFD; // 0x50
	::IODFHIILJDG OEJJJJCHMKP; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHPAJHLDJMC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPAJHLDJMC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPAJHLDJMC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPAJHLDJMC_GETCLASSID_OFFSET))(this);
	}

	static ::FHPAJHLDJMC* JFDOOELFAOA()
	{
		return ((::FHPAJHLDJMC*(*)())((::PBYTE)hIl2Cpp + FHPAJHLDJMC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void EBMCJJDLCKE(::Foundation::Unreal::FGameplayTag BPIKEDKEBIC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FHPAJHLDJMC_EBMCJJDLCKE_OFFSET))(this, BPIKEDKEBIC);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPAJHLDJMC_MEFBHFEOKGH_OFFSET))(this);
	}
};
