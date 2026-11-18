#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class JBACNAFIDEC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFIIACKGMKA_NKBBADDBLBJ_OFFSET UNITYSDK_OFFSET(0x16BDB920)
#define EFIIACKGMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDB890)

inline static constexpr unsigned int EFIIACKGMKA_TypeDefinitionIndex = 93163;

class EFIIACKGMKA : public ::System::Object
{
public:
	::System::String* NMJKDMFFDOO; // 0x10
	::JBACNAFIDEC* NDAODGKMGLN; // 0x18
	::System::String* MGMDJCCEAIB; // 0x20
	::System::String* HPPBBADPCPD; // 0x28
	::System::String* BJBGIMJKCDA; // 0x30
	::System::String* FEEAMCIONJO; // 0x38
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* NFJEDBFNNGB; // 0x40
	::System::String* AMEEMEPHGEL; // 0x48
	::System::UInt64 HLLEKFHJIAP; // 0x50
	::System::UInt64 PDEHDGPOFFN; // 0x58
	::System::Int64 FGKLGIBECFP; // 0x60
	::System::Boolean LMMKBMGHJCG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIACKGMKA__CTOR_OFFSET))(this);
	}

	::System::Void NKBBADDBLBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIACKGMKA_NKBBADDBLBJ_OFFSET))(this);
	}
};
