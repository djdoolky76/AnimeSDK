#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPCKCAECNBC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MLKNPECNBNG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ILCOIPPNIGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B629240)
#define ILCOIPPNIGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B628FC0)
#define ILCOIPPNIGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B628FD0)
#define ILCOIPPNIGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B629090)
#define ILCOIPPNIGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B6291C0)
#define ILCOIPPNIGN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B629370)
#define ILCOIPPNIGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B6295D0)
#define ILCOIPPNIGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B628C20)
#define ILCOIPPNIGN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B6295B0)
#define ILCOIPPNIGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B628C00)
#define ILCOIPPNIGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B628EE0)
#define ILCOIPPNIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B629320)

inline static constexpr unsigned int ILCOIPPNIGN_TypeDefinitionIndex = 14019;

class ILCOIPPNIGN : public ::System::Object
{
public:
	::HPCKCAECNBC DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::MLKNPECNBNG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::MLKNPECNBNG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MLKNPECNBNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOIPPNIGN_NAMKJOJBAOA_OFFSET))(this);
	}
};
