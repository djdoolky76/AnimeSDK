#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGGDNMKMCCL.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHKPEAGCFCG_CBCGFFMBBOK_OFFSET UNITYSDK_OFFSET(0x18445BA0)
#define OHKPEAGCFCG_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x184453C0)
#define OHKPEAGCFCG_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x18445BB0)
#define OHKPEAGCFCG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x184458F0)
#define OHKPEAGCFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x18445350)

inline static constexpr unsigned int OHKPEAGCFCG_TypeDefinitionIndex = 74677;

class OHKPEAGCFCG : public ::OGGDNMKMCCL
{
public:
	::System::Void _ctor(::System::Int32 KMMGKJPAOMF, ::System::Boolean KDPGCMKHHCA, ::System::Action* GGJBIIKEHMD, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* FOLOMBFOAJI, ::System::Int32 KDDKDHBELOC, ::System::Nullable_1<::System::Boolean> ICGICLFOFIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>*, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + OHKPEAGCFCG__CTOR_OFFSET))(this, KMMGKJPAOMF, KDPGCMKHHCA, GGJBIIKEHMD, FOLOMBFOAJI, KDDKDHBELOC, ICGICLFOFIE);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void CBCGFFMBBOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_CBCGFFMBBOK_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_HFMHKBAPHAI_OFFSET))(this);
	}
};
