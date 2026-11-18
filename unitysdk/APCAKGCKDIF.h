#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOLOFOBLBC.h"
#include "unitysdk/System/Object.h"

class OFCMAPHBLOK;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APCAKGCKDIF_EBCPHCONHEP_OFFSET UNITYSDK_OFFSET(0x13601360)
#define APCAKGCKDIF_HLOEOLGIEHJ_OFFSET UNITYSDK_OFFSET(0x13600F20)
#define APCAKGCKDIF_ILECOALBJKI_OFFSET UNITYSDK_OFFSET(0x13601190)
#define APCAKGCKDIF_KCMBGKOCODH_OFFSET UNITYSDK_OFFSET(0x13601070)
#define APCAKGCKDIF_LJBNHADEJAO_OFFSET UNITYSDK_OFFSET(0x136013A0)
#define APCAKGCKDIF_OPCJIKNPDIJ_OFFSET UNITYSDK_OFFSET(0x13600F70)
#define APCAKGCKDIF__CTOR_OFFSET UNITYSDK_OFFSET(0x13600F10)

inline static constexpr unsigned int APCAKGCKDIF_TypeDefinitionIndex = 84462;

class APCAKGCKDIF : public ::System::Object
{
public:
	::System::Action_1<::ICOLOFOBLBC>* HKFOMHEFDBC; // 0x10
	::System::Collections::Generic::List_1<::ICOLOFOBLBC>* FPKIPHOEJEA; // 0x18
	::OFCMAPHBLOK* HDDCIJIJCMM; // 0x20
	::System::Action* DOHBCJHMPKB; // 0x28
	::System::Boolean CBJIAECJJOH; // 0x30
	::System::Boolean IKAIADJGHNC; // 0x31
	::System::Byte _padding0[0x2];
	::System::Int32 OJOEBEBNFCJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF__CTOR_OFFSET))(this);
	}

	::System::Void HLOEOLGIEHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF_HLOEOLGIEHJ_OFFSET))(this);
	}

	::System::Void OPCJIKNPDIJ(::System::Collections::Generic::List_1<::ICOLOFOBLBC>* FPKIPHOEJEA, ::System::Boolean MAMNENFLLEG, ::System::Action* DOHBCJHMPKB, ::System::Action* CDPDIMIIOMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ICOLOFOBLBC>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + APCAKGCKDIF_OPCJIKNPDIJ_OFFSET))(this, FPKIPHOEJEA, MAMNENFLLEG, DOHBCJHMPKB, CDPDIMIIOMH);
	}

	::System::Void ILECOALBJKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF_ILECOALBJKI_OFFSET))(this);
	}

	::System::Void EBCPHCONHEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF_EBCPHCONHEP_OFFSET))(this);
	}

	::System::Void LJBNHADEJAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF_LJBNHADEJAO_OFFSET))(this);
	}

	::System::Void KCMBGKOCODH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCAKGCKDIF_KCMBGKOCODH_OFFSET))(this);
	}
};
