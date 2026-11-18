#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDIACAHPLBB_GCGAMNCINOK.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define DBKBIJAGHCH_DJEPDMCCJEP_OFFSET UNITYSDK_OFFSET(0x1205D250)
#define DBKBIJAGHCH_EEGNCDEEHOD_OFFSET UNITYSDK_OFFSET(0x1205CDD0)
#define DBKBIJAGHCH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1205CC30)
#define DBKBIJAGHCH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1205D140)
#define DBKBIJAGHCH_KBJDJMACLHB_OFFSET UNITYSDK_OFFSET(0x1205CD80)
#define DBKBIJAGHCH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1205D1C0)
#define DBKBIJAGHCH_NDHDFDKBECM_OFFSET UNITYSDK_OFFSET(0x1205CD10)
#define DBKBIJAGHCH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1205CBE0)
#define DBKBIJAGHCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1205CC80)
#define DBKBIJAGHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1205CD00)

inline static constexpr unsigned int DBKBIJAGHCH_TypeDefinitionIndex = 78383;

class DBKBIJAGHCH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB8; // 0x0
	::GDIACAHPLBB_GCGAMNCINOK JHIJPCJBOCJ; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBKBIJAGHCH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBIJAGHCH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean NDHDFDKBECM(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_NDHDFDKBECM_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void KBJDJMACLHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_KBJDJMACLHB_OFFSET))(this);
	}

	::System::Void EEGNCDEEHOD(::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_EEGNCDEEHOD_OFFSET))(this, JMDOANHOEJG);
	}

	static ::DBKBIJAGHCH* JFDOOELFAOA()
	{
		return ((::DBKBIJAGHCH*(*)())((::PBYTE)hIl2Cpp + DBKBIJAGHCH_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void DJEPDMCCJEP(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + DBKBIJAGHCH_DJEPDMCCJEP_OFFSET))(this, AELLPLBJELA);
	}
};
