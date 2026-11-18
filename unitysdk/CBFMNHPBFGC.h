#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJFCIOLADO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MKOMFNJFBGC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CBFMNHPBFGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A57F080)
#define CBFMNHPBFGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A57EE50)
#define CBFMNHPBFGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A57EFC0)
#define CBFMNHPBFGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A57F160)
#define CBFMNHPBFGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A57EE60)
#define CBFMNHPBFGC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A57F4D0)
#define CBFMNHPBFGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A57F300)
#define CBFMNHPBFGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A57EAB0)
#define CBFMNHPBFGC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A57F2E0)
#define CBFMNHPBFGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A57EA90)
#define CBFMNHPBFGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A57ED70)
#define CBFMNHPBFGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57F290)

inline static constexpr unsigned int CBFMNHPBFGC_TypeDefinitionIndex = 13891;

class CBFMNHPBFGC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MKOMFNJFBGC*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::IEJFCIOLADO DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MKOMFNJFBGC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MKOMFNJFBGC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBFMNHPBFGC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
