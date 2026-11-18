#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKNECFIKCFO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HAGJAHCHHOL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNEOGGMLOKB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17EFE5E0)
#define BNEOGGMLOKB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17EFE360)
#define BNEOGGMLOKB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17EFE370)
#define BNEOGGMLOKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17EFE430)
#define BNEOGGMLOKB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17EFE560)
#define BNEOGGMLOKB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17EFE730)
#define BNEOGGMLOKB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17EFE960)
#define BNEOGGMLOKB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17EFDFC0)
#define BNEOGGMLOKB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17EFE710)
#define BNEOGGMLOKB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17EFDFA0)
#define BNEOGGMLOKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17EFE280)
#define BNEOGGMLOKB__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFE6C0)

inline static constexpr unsigned int BNEOGGMLOKB_TypeDefinitionIndex = 11033;

class BNEOGGMLOKB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HAGJAHCHHOL*>* OJMBOGGMIKO; // 0x18
	::CKNECFIKCFO DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_NAMKJOJBAOA_OFFSET))(this);
	}

	::HAGJAHCHHOL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HAGJAHCHHOL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNEOGGMLOKB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
