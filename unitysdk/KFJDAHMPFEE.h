#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HONKHJJLHJG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MJDMKEAMMIP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KFJDAHMPFEE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7E1100)
#define KFJDAHMPFEE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7E0E80)
#define KFJDAHMPFEE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7E0E90)
#define KFJDAHMPFEE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E0F50)
#define KFJDAHMPFEE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7E1080)
#define KFJDAHMPFEE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7E1500)
#define KFJDAHMPFEE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7E1250)
#define KFJDAHMPFEE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7E0AD0)
#define KFJDAHMPFEE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7E1230)
#define KFJDAHMPFEE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7E0AB0)
#define KFJDAHMPFEE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7E0D90)
#define KFJDAHMPFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E11E0)

inline static constexpr unsigned int KFJDAHMPFEE_TypeDefinitionIndex = 12417;

class KFJDAHMPFEE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::HONKHJJLHJG DHDJDGFNBOA; // 0x20
	::Il2CppArray<::MJDMKEAMMIP*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MJDMKEAMMIP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MJDMKEAMMIP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFJDAHMPFEE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
