#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANAKBKOHGEB.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EPJAODADCEA;
class MJHDNMKGLBJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBGLMEFFMKB_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0xBB32860)
#define FBGLMEFFMKB_GOGHDNPJHLB_OFFSET UNITYSDK_OFFSET(0xBB32470)
#define FBGLMEFFMKB_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0xBB31C70)
#define FBGLMEFFMKB_HHMJIKCEKCB_OFFSET UNITYSDK_OFFSET(0xBB32900)
#define FBGLMEFFMKB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB328F0)

inline static constexpr unsigned int FBGLMEFFMKB_TypeDefinitionIndex = 42511;

class FBGLMEFFMKB : public ::ANAKBKOHGEB
{
public:
	::EPJAODADCEA* KPCMPDAIOND; // 0x20
	::MoleMole::Battle::MonsterAlertInitParams KFNOJMNDJBA; // 0x28
	::System::UInt32 PPJIIBGDNAP; // 0x48
	::System::Int32 KHMLGFMAJHK; // 0x4C
	::System::Single LHPHCIGHDFH; // 0x50
	::System::Boolean MPNMAFENING; // 0x54
	::System::Boolean NDPCGIKICIJ; // 0x55
	::System::Boolean OLCKFLOGAJH; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 JCPFHGDHBKI; // 0x58
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGLMEFFMKB__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle GPAOHEEKFCD()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_GPAOHEEKFCD_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void HHMJIKCEKCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_HHMJIKCEKCB_OFFSET))(this);
	}

	::System::Void GOGHDNPJHLB(::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_GOGHDNPJHLB_OFFSET))(this, DJKNNEEKHGK);
	}
};
