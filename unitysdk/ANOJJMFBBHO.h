#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAKMLNIOFJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HMDFIPACJPG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ANOJJMFBBHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A166070)
#define ANOJJMFBBHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A165E30)
#define ANOJJMFBBHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A165FB0)
#define ANOJJMFBBHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A166150)
#define ANOJJMFBBHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A165E40)
#define ANOJJMFBBHO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A1662D0)
#define ANOJJMFBBHO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A166520)
#define ANOJJMFBBHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A165A80)
#define ANOJJMFBBHO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A166500)
#define ANOJJMFBBHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A165A60)
#define ANOJJMFBBHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A165D40)
#define ANOJJMFBBHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A166280)

inline static constexpr unsigned int ANOJJMFBBHO_TypeDefinitionIndex = 11939;

class ANOJJMFBBHO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::HMDFIPACJPG*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FBAKMLNIOFJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_FINALIZE_OFFSET))(this);
	}

	::HMDFIPACJPG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMDFIPACJPG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ANOJJMFBBHO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
