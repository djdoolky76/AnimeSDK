#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFDOEBMPFEJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FNLLIKGEGBI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FMFHEIMBLCF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A82D0)
#define FMFHEIMBLCF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A8050)
#define FMFHEIMBLCF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A8060)
#define FMFHEIMBLCF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A8120)
#define FMFHEIMBLCF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A8250)
#define FMFHEIMBLCF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5A8400)
#define FMFHEIMBLCF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A8650)
#define FMFHEIMBLCF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A7CA0)
#define FMFHEIMBLCF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5A8630)
#define FMFHEIMBLCF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A7C80)
#define FMFHEIMBLCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A7F60)
#define FMFHEIMBLCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A83B0)

inline static constexpr unsigned int FMFHEIMBLCF_TypeDefinitionIndex = 15210;

class FMFHEIMBLCF : public ::System::Object
{
public:
	::Il2CppArray<::FNLLIKGEGBI*>* OJMBOGGMIKO; // 0x10
	::JFDOEBMPFEJ DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_BHLAEBMEOLO_OFFSET))(this);
	}

	::FNLLIKGEGBI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FNLLIKGEGBI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFHEIMBLCF_NAMKJOJBAOA_OFFSET))(this);
	}
};
