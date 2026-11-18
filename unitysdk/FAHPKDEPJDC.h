#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PKDCGFOAGKJ.h"
#include "unitysdk/System/Object.h"

class IPLEKECAFLK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FAHPKDEPJDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x174559C0)
#define FAHPKDEPJDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17455740)
#define FAHPKDEPJDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17455750)
#define FAHPKDEPJDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17455810)
#define FAHPKDEPJDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17455940)
#define FAHPKDEPJDC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17455B10)
#define FAHPKDEPJDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17455D40)
#define FAHPKDEPJDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174553A0)
#define FAHPKDEPJDC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17455AF0)
#define FAHPKDEPJDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17455380)
#define FAHPKDEPJDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17455660)
#define FAHPKDEPJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x17455AA0)

inline static constexpr unsigned int FAHPKDEPJDC_TypeDefinitionIndex = 13643;

class FAHPKDEPJDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::IPLEKECAFLK*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::PKDCGFOAGKJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_NAMKJOJBAOA_OFFSET))(this);
	}

	::IPLEKECAFLK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IPLEKECAFLK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FAHPKDEPJDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
