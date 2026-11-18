#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NCFKBKHOHNP.h"
#include "unitysdk/System/Object.h"

class PMIAJPMBMFP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NKBLNFOBIGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E20D30)
#define NKBLNFOBIGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E20B00)
#define NKBLNFOBIGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E20C70)
#define NKBLNFOBIGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E20E10)
#define NKBLNFOBIGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E20B10)
#define NKBLNFOBIGC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E20FB0)
#define NKBLNFOBIGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E211E0)
#define NKBLNFOBIGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E20760)
#define NKBLNFOBIGC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E20F90)
#define NKBLNFOBIGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E20740)
#define NKBLNFOBIGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E20A20)
#define NKBLNFOBIGC__CTOR_OFFSET UNITYSDK_OFFSET(0x18E20F40)

inline static constexpr unsigned int NKBLNFOBIGC_TypeDefinitionIndex = 15424;

class NKBLNFOBIGC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::NCFKBKHOHNP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::PMIAJPMBMFP*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_CHLEALKAOJO_OFFSET))(this);
	}

	::PMIAJPMBMFP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PMIAJPMBMFP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NKBLNFOBIGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
