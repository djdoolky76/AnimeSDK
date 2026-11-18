#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/System/Object.h"

class HAFLGNENJDI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACGPGHNPCBN_KCAHKIEIDAI_OFFSET UNITYSDK_OFFSET(0x11B8E210)
#define ACGPGHNPCBN_NNLJPLIMNME_OFFSET UNITYSDK_OFFSET(0x11B8E2B0)
#define ACGPGHNPCBN__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8E200)

inline static constexpr unsigned int ACGPGHNPCBN_TypeDefinitionIndex = 47189;

class ACGPGHNPCBN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* LPCHJHEHMPB; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* CIGMDKCPAJN; // 0x18
	::System::Boolean GFKBJOICKAO; // 0x20
	::System::Boolean HPOHGKPNBPN; // 0x21
	::System::Boolean NLJMLMKFLID; // 0x22
	::System::Byte _padding0[0x1];
	::MoleMole::Config::TeamRelationship FGCHDOAKFLA; // 0x24
	::MoleMole::Config::TeamRelationship COPJNFKAJDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGPGHNPCBN__CTOR_OFFSET))(this);
	}

	::System::Boolean KCAHKIEIDAI(::HAFLGNENJDI* LGBFDMFOOJF, ::HAFLGNENJDI* MEIKMBGDJPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::HAFLGNENJDI*, ::HAFLGNENJDI*))((::PBYTE)hIl2Cpp + ACGPGHNPCBN_KCAHKIEIDAI_OFFSET))(this, LGBFDMFOOJF, MEIKMBGDJPD);
	}

	::System::Boolean NNLJPLIMNME(::HAFLGNENJDI* LGBFDMFOOJF, ::HAFLGNENJDI* MEIKMBGDJPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::HAFLGNENJDI*, ::HAFLGNENJDI*))((::PBYTE)hIl2Cpp + ACGPGHNPCBN_NNLJPLIMNME_OFFSET))(this, LGBFDMFOOJF, MEIKMBGDJPD);
	}
};
