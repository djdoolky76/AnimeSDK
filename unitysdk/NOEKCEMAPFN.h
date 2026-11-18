#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/ODKGEOOIPMA.h"
#include "unitysdk/System/Object.h"

class BMFKFIEBPNC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NOEKCEMAPFN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E22ED0)
#define NOEKCEMAPFN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E22C50)
#define NOEKCEMAPFN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E22C60)
#define NOEKCEMAPFN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E22D20)
#define NOEKCEMAPFN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E22E50)
#define NOEKCEMAPFN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E23080)
#define NOEKCEMAPFN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E234E0)
#define NOEKCEMAPFN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E22850)
#define NOEKCEMAPFN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E23300)
#define NOEKCEMAPFN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E22820)
#define NOEKCEMAPFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E22AB0)
#define NOEKCEMAPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x18E22FB0)

inline static constexpr unsigned int NOEKCEMAPFN_TypeDefinitionIndex = 17566;

class NOEKCEMAPFN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::ODKGEOOIPMA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::BMFKFIEBPNC*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_BHLAEBMEOLO_OFFSET))(this);
	}

	::BMFKFIEBPNC* IFDPKDOFOJD(::System::String* MCOHLHMKLIP)
	{
		return ((::BMFKFIEBPNC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_IFDPKDOFOJD_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKCEMAPFN_NAMKJOJBAOA_OFFSET))(this);
	}
};
