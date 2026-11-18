#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class MACDMBOEGJO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGLNLIMIHCA_INAOGPAHNFI_OFFSET UNITYSDK_OFFSET(0x130779E0)
#define JGLNLIMIHCA_IOODLNINMNA_OFFSET UNITYSDK_OFFSET(0x13077920)
#define JGLNLIMIHCA_JJDDGOMOALD_OFFSET UNITYSDK_OFFSET(0x13077590)
#define JGLNLIMIHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x13077540)

inline static constexpr unsigned int JGLNLIMIHCA_TypeDefinitionIndex = 47772;

class JGLNLIMIHCA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* FACCOCJONIB; // 0x10
	::System::Collections::Generic::List_1<::MACDMBOEGJO*>* NCNJLCBCMLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLNLIMIHCA__CTOR_OFFSET))(this);
	}

	::System::Void JJDDGOMOALD(::System::Boolean KILKGKBKHID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGLNLIMIHCA_JJDDGOMOALD_OFFSET))(this, KILKGKBKHID);
	}

	::System::Void IOODLNINMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLNLIMIHCA_IOODLNINMNA_OFFSET))(this);
	}

	::System::Void INAOGPAHNFI(::System::Collections::Generic::List_1<::MACDMBOEGJO*>* OHNENCBKCHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MACDMBOEGJO*>*))((::PBYTE)hIl2Cpp + JGLNLIMIHCA_INAOGPAHNFI_OFFSET))(this, OHNENCBKCHJ);
	}
};
