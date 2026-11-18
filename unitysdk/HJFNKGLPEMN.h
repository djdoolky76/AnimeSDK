#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDMBPFBIOGI.h"
#include "unitysdk/NMAJANNDDJA.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJFNKGLPEMN_BLMKPAOGODE_OFFSET UNITYSDK_OFFSET(0x14D30630)
#define HJFNKGLPEMN_FBGKBOELAGA_OFFSET UNITYSDK_OFFSET(0x14D30590)
#define HJFNKGLPEMN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D305A0)

inline static constexpr unsigned int HJFNKGLPEMN_TypeDefinitionIndex = 62699;

class HJFNKGLPEMN : public ::NMAJANNDDJA
{
public:
	::System::Collections::Generic::Dictionary_2<::NodeGraph::VariantUnion, ::System::Collections::Generic::Dictionary_2<::NodeGraph::VariantUnion, ::IBENDELLLAO*>*>* IINEHFJCMJG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFNKGLPEMN__CTOR_OFFSET))(this);
	}

	::KDMBPFBIOGI FBGKBOELAGA()
	{
		return ((::KDMBPFBIOGI(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFNKGLPEMN_FBGKBOELAGA_OFFSET))(this);
	}

	::IBENDELLLAO* BLMKPAOGODE(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion AAAMLJGOMMK, ::NodeGraph::VariantUnion GPJEJFMGFJG)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + HJFNKGLPEMN_BLMKPAOGODE_OFFSET))(this, OBNIAHNMHPF, AAAMLJGOMMK, GPJEJFMGFJG);
	}
};
