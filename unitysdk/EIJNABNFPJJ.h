#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLPANDDGHG.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IFAMBENCHMD;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIJNABNFPJJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16146C30)
#define EIJNABNFPJJ_FDMNKDCDIOI_OFFSET UNITYSDK_OFFSET(0x16146C20)
#define EIJNABNFPJJ_NNDLNJAELJC_OFFSET UNITYSDK_OFFSET(0x16146C10)
#define EIJNABNFPJJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16146C00)
#define EIJNABNFPJJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16146AA0)
#define EIJNABNFPJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16146BF0)

inline static constexpr unsigned int EIJNABNFPJJ_TypeDefinitionIndex = 60108;

class EIJNABNFPJJ : public ::BFLPANDDGHG
{
public:
	::MoleMole::SkillCharacterScriptConfig* _JEMJEAEIDII_k__BackingField; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GMBBKOCJEOB; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::String*>* BBIHACAPAOJ; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::Int32>* JNFLBGCKEBF; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJNABNFPJJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJNABNFPJJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJNABNFPJJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void NNDLNJAELJC(::MoleMole::SkillCharacterScriptConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + EIJNABNFPJJ_NNDLNJAELJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::SkillCharacterScriptConfig* FDMNKDCDIOI()
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJNABNFPJJ_FDMNKDCDIOI_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 POBLGIHBMOG, ::IFAMBENCHMD* DNOHELNGGLJ, ::System::UInt32 PKMFBJMJCOO, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::System::Int32 MOBNMDEDJIP, ::DNOPJGNOPJO EGDLIGBDIHA, ::MoleMole::Config::CampType CGLJBLMHDED, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FCPKKPACJAF, ::System::Collections::Generic::HashSet_1<::System::String*>* BBIHACAPAOJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* JNFLBGCKEBF, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Int32 OEHEJLMJDHP, ::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IFAMBENCHMD*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::DNOPJGNOPJO, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + EIJNABNFPJJ_EDEFLFIKNFK_OFFSET))(this, POBLGIHBMOG, DNOHELNGGLJ, PKMFBJMJCOO, CKPGOKHECCH, HBOHIAPEIMH, MOBNMDEDJIP, EGDLIGBDIHA, CGLJBLMHDED, FCPKKPACJAF, BBIHACAPAOJ, JNFLBGCKEBF, OJBJBOJKFJO, OEHEJLMJDHP, JEHINDLIHNH);
	}
};
