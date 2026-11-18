#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLIILOEOPGL.h"

namespace MoleMole::Battle { class Entity; }

#define PDAPOKJFFME_BINFDFLLPFM_OFFSET UNITYSDK_OFFSET(0xFDA6630)
#define PDAPOKJFFME_GGDKIKJEIKD_OFFSET UNITYSDK_OFFSET(0xFDA64D0)
#define PDAPOKJFFME_MMPIPCJFKIG_OFFSET UNITYSDK_OFFSET(0xFDA6640)
#define PDAPOKJFFME__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA64C0)

inline static constexpr unsigned int PDAPOKJFFME_TypeDefinitionIndex = 38719;

class PDAPOKJFFME : public ::KLIILOEOPGL
{
public:
	::System::Int32 BCCENALHBHL; // 0x78
	::System::UInt32 _FDPGGFJCOPK_k__BackingField; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPOKJFFME__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* GGDKIKJEIKD()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPOKJFFME_GGDKIKJEIKD_OFFSET))(this);
	}

	::System::UInt32 BINFDFLLPFM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPOKJFFME_BINFDFLLPFM_OFFSET))(this);
	}

	::System::Void MMPIPCJFKIG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDAPOKJFFME_MMPIPCJFKIG_OFFSET))(this, EGEGIMGMJHN);
	}
};
