#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LMMHJNCNJHC.h"
#include "unitysdk/System/Object.h"

class INGANLAAINB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FGNHILJJKOH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B1050F0)
#define FGNHILJJKOH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B104E70)
#define FGNHILJJKOH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B104E80)
#define FGNHILJJKOH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B104F40)
#define FGNHILJJKOH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B105070)
#define FGNHILJJKOH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B105240)
#define FGNHILJJKOH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B105470)
#define FGNHILJJKOH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B104AC0)
#define FGNHILJJKOH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B105220)
#define FGNHILJJKOH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B104AA0)
#define FGNHILJJKOH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B104D80)
#define FGNHILJJKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1051D0)

inline static constexpr unsigned int FGNHILJJKOH_TypeDefinitionIndex = 16900;

class FGNHILJJKOH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::LMMHJNCNJHC DHDJDGFNBOA; // 0x28
	::Il2CppArray<::INGANLAAINB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FGNHILJJKOH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FGNHILJJKOH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNHILJJKOH_NAMKJOJBAOA_OFFSET))(this);
	}

	::INGANLAAINB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::INGANLAAINB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGNHILJJKOH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FGNHILJJKOH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
