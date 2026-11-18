#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUISubItemParamDict;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJIGDDJEKJD_BLDDLHKMGCB_OFFSET UNITYSDK_OFFSET(0x1C2B1650)
#define PJIGDDJEKJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C2B1A80)
#define PJIGDDJEKJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C2B1980)
#define PJIGDDJEKJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C2B1320)
#define PJIGDDJEKJD_PLBMKAODMEN_OFFSET UNITYSDK_OFFSET(0x1C2B1830)
#define PJIGDDJEKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B1A70)

inline static constexpr unsigned int PJIGDDJEKJD_TypeDefinitionIndex = 41127;

class PJIGDDJEKJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HLJMMLMNFDG; // 0x18
	::FGCOIBFFCHB* MJNMEGPGGAO; // 0x20
	::UnityEngine::GameObject* NDBIHKKCEMB; // 0x28
	::UnityEngine::Transform* JFDOOELFAOA; // 0x30
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x38
	::FGCOIBFFCHB* MLIJNHNOCJE; // 0x40
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x48
	::UnityEngine::GameObject* NPALFBCDCNN; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::UnityEngine::GameObject* DMIBJJHDHLO; // 0x60
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x68
	::UnityEngine::GameObject* GPIFJMPGGHH; // 0x70
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* KJKDHGNMIJK; // 0x78
	::MonoUISubItemParamDict* EAOIOAPBCBD; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IKOFJEHPPAN; // 0x88
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* DENKJGNPDAC; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGDDJEKJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGDDJEKJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGDDJEKJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* BLDDLHKMGCB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGDDJEKJD_BLDDLHKMGCB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PLBMKAODMEN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGDDJEKJD_PLBMKAODMEN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGDDJEKJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
