#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CLNGKOPAMBJ;
class JHJIFOPDDMK;
class KBDDPBPABDD;
class OBJHILPGKDF;
class OPPEGLOCAGH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOADAHDGNEH_ADOKLCMMBDB_OFFSET UNITYSDK_OFFSET(0x164FB6E0)
#define IOADAHDGNEH_CHJDOBBNGBM_OFFSET UNITYSDK_OFFSET(0x164FB5C0)
#define IOADAHDGNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x164FB4E0)
#define IOADAHDGNEH_DHMJKFLDLKD_1_OFFSET UNITYSDK_OFFSET(0x164FB680)
#define IOADAHDGNEH_DHMJKFLDLKD_OFFSET UNITYSDK_OFFSET(0x164FB620)
#define IOADAHDGNEH_NBCDFMNCONC_OFFSET UNITYSDK_OFFSET(0x164FB560)

	class IOADAHDGNEH : public ::System::Object
	{
	public:
		::OBJHILPGKDF* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::JHJIFOPDDMK*>* IIGHALBPJBM; // 0x18
		::System::Void _ctor(::OBJHILPGKDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJHILPGKDF*))((::PBYTE)hIl2Cpp + IOADAHDGNEH_CTOR_OFFSET))(this, a1);
		}

		::CLNGKOPAMBJ* NBCDFMNCONC(::System::UInt32 a1)
		{
			return ((::CLNGKOPAMBJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOADAHDGNEH_NBCDFMNCONC_OFFSET))(this, a1);
		}

		::KBDDPBPABDD* CHJDOBBNGBM(::System::UInt32 a1)
		{
			return ((::KBDDPBPABDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOADAHDGNEH_CHJDOBBNGBM_OFFSET))(this, a1);
		}

		::OPPEGLOCAGH* DHMJKFLDLKD(::System::UInt32 a1)
		{
			return ((::OPPEGLOCAGH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOADAHDGNEH_DHMJKFLDLKD_OFFSET))(this, a1);
		}

		::OPPEGLOCAGH* DHMJKFLDLKD_1(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::OPPEGLOCAGH*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + IOADAHDGNEH_DHMJKFLDLKD_1_OFFSET))(this, a1);
		}

		::JHJIFOPDDMK* ADOKLCMMBDB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::JHJIFOPDDMK*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IOADAHDGNEH_ADOKLCMMBDB_OFFSET))(this, a1, a2);
		}

	};
