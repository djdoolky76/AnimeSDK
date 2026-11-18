#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCOEPILIFE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HMLLCHBDLNM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFGOAFFDIGL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C178DC0)
#define MFGOAFFDIGL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C178B80)
#define MFGOAFFDIGL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C178D00)
#define MFGOAFFDIGL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C178EA0)
#define MFGOAFFDIGL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C178B90)
#define MFGOAFFDIGL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C179020)
#define MFGOAFFDIGL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1787D0)
#define MFGOAFFDIGL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1787B0)
#define MFGOAFFDIGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C178A90)
#define MFGOAFFDIGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C178FD0)

inline static constexpr unsigned int MFGOAFFDIGL_TypeDefinitionIndex = 11936;

class MFGOAFFDIGL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::GHCOEPILIFE DHDJDGFNBOA; // 0x20
	::Il2CppArray<::HMLLCHBDLNM*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFGOAFFDIGL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
