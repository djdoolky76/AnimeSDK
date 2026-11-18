#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PGMNNEJDHPO.h"
#include "unitysdk/System/Object.h"

class FKOMIHEFBDP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JODHHCDFHPE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1611D500)
#define JODHHCDFHPE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1611D2C0)
#define JODHHCDFHPE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1611D440)
#define JODHHCDFHPE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1611D5E0)
#define JODHHCDFHPE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1611D2D0)
#define JODHHCDFHPE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1611D950)
#define JODHHCDFHPE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1611D780)
#define JODHHCDFHPE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1611CF10)
#define JODHHCDFHPE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1611D760)
#define JODHHCDFHPE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1611CEF0)
#define JODHHCDFHPE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1611D1D0)
#define JODHHCDFHPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1611D710)

inline static constexpr unsigned int JODHHCDFHPE_TypeDefinitionIndex = 12866;

class JODHHCDFHPE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::PGMNNEJDHPO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::FKOMIHEFBDP*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JODHHCDFHPE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JODHHCDFHPE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODHHCDFHPE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JODHHCDFHPE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FKOMIHEFBDP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FKOMIHEFBDP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JODHHCDFHPE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
