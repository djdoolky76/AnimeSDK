#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NMKJIAAFAKJ.h"
#include "unitysdk/System/Object.h"

class NNFJLNEDCLI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGFGADCBEIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4D34E0)
#define GGFGADCBEIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4D32B0)
#define GGFGADCBEIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4D3420)
#define GGFGADCBEIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D35C0)
#define GGFGADCBEIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4D32C0)
#define GGFGADCBEIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4D3700)
#define GGFGADCBEIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4D3920)
#define GGFGADCBEIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4D2F10)
#define GGFGADCBEIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4D3900)
#define GGFGADCBEIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4D2EF0)
#define GGFGADCBEIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4D31D0)
#define GGFGADCBEIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D36F0)

inline static constexpr unsigned int GGFGADCBEIJ_TypeDefinitionIndex = 13204;

class GGFGADCBEIJ : public ::System::Object
{
public:
	::NMKJIAAFAKJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::NNFJLNEDCLI*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_FINALIZE_OFFSET))(this);
	}

	::NNFJLNEDCLI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NNFJLNEDCLI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GGFGADCBEIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
