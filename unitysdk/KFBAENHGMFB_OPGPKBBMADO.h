#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_OPGPKBBMADO_MMIHHGCGAAG_OFFSET UNITYSDK_OFFSET(0xD3F2230)
#define KFBAENHGMFB_OPGPKBBMADO_NNAPPAJJKHL_OFFSET UNITYSDK_OFFSET(0xD3F22F0)
#define KFBAENHGMFB_OPGPKBBMADO__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2220)

inline static constexpr unsigned int KFBAENHGMFB_OPGPKBBMADO_TypeDefinitionIndex = 78586;

class KFBAENHGMFB_OPGPKBBMADO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18
	::System::UInt32 HHEGANCPILH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OPGPKBBMADO__CTOR_OFFSET))(this);
	}

	::System::Void MMIHHGCGAAG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OPGPKBBMADO_MMIHHGCGAAG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NNAPPAJJKHL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OPGPKBBMADO_NNAPPAJJKHL_OFFSET))(this, PIIPCLCCOIG);
	}
};
