#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HANAGKPAPFG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EGIOHHJLFCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DICBMDJLECG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1950C0E0)
#define DICBMDJLECG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1950BEB0)
#define DICBMDJLECG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1950C020)
#define DICBMDJLECG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1950C1C0)
#define DICBMDJLECG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1950BEC0)
#define DICBMDJLECG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1950C340)
#define DICBMDJLECG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1950C590)
#define DICBMDJLECG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1950BB10)
#define DICBMDJLECG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1950C570)
#define DICBMDJLECG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1950BAF0)
#define DICBMDJLECG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1950BDD0)
#define DICBMDJLECG__CTOR_OFFSET UNITYSDK_OFFSET(0x1950C2F0)

inline static constexpr unsigned int DICBMDJLECG_TypeDefinitionIndex = 15120;

class DICBMDJLECG : public ::System::Object
{
public:
	::HANAGKPAPFG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::EGIOHHJLFCH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DICBMDJLECG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DICBMDJLECG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_CHLEALKAOJO_OFFSET))(this);
	}

	::EGIOHHJLFCH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EGIOHHJLFCH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DICBMDJLECG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DICBMDJLECG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBMDJLECG_NAMKJOJBAOA_OFFSET))(this);
	}
};
