#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMCCPPIMICM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AJNJHMCGPJI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PDGIDFGIKBI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EC83C40)
#define PDGIDFGIKBI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EC83A10)
#define PDGIDFGIKBI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EC83B80)
#define PDGIDFGIKBI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EC83D20)
#define PDGIDFGIKBI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EC83A20)
#define PDGIDFGIKBI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1EC83EA0)
#define PDGIDFGIKBI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EC840F0)
#define PDGIDFGIKBI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EC83670)
#define PDGIDFGIKBI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EC840D0)
#define PDGIDFGIKBI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EC83650)
#define PDGIDFGIKBI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EC83930)
#define PDGIDFGIKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC83E50)

inline static constexpr unsigned int PDGIDFGIKBI_TypeDefinitionIndex = 12177;

class PDGIDFGIKBI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::JMCCPPIMICM DHDJDGFNBOA; // 0x20
	::Il2CppArray<::AJNJHMCGPJI*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_FINALIZE_OFFSET))(this);
	}

	::AJNJHMCGPJI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AJNJHMCGPJI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PDGIDFGIKBI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
