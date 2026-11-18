#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LPJHHHCOLMO_NHCMHGGMDEL_AJILFKDNJFP_OFFSET UNITYSDK_OFFSET(0x18516660)
#define LPJHHHCOLMO_NHCMHGGMDEL_NECLGAHDCKE_OFFSET UNITYSDK_OFFSET(0x18516750)
#define LPJHHHCOLMO_NHCMHGGMDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18516650)

inline static constexpr unsigned int LPJHHHCOLMO_NHCMHGGMDEL_TypeDefinitionIndex = 46637;

class LPJHHHCOLMO_NHCMHGGMDEL : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_NHCMHGGMDEL__CTOR_OFFSET))(this);
	}

	::System::Void AJILFKDNJFP(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_NHCMHGGMDEL_AJILFKDNJFP_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void NECLGAHDCKE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_NHCMHGGMDEL_NECLGAHDCKE_OFFSET))(this, PIIPCLCCOIG);
	}
};
