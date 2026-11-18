#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNJLFIDBDDG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FLCDIPBFACP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLLBFADGIDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB11F00)
#define LLLBFADGIDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB11CC0)
#define LLLBFADGIDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB11E40)
#define LLLBFADGIDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB11FE0)
#define LLLBFADGIDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB11CD0)
#define LLLBFADGIDM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BB12350)
#define LLLBFADGIDM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB12160)
#define LLLBFADGIDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB11910)
#define LLLBFADGIDM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BB12330)
#define LLLBFADGIDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB118F0)
#define LLLBFADGIDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB11BD0)
#define LLLBFADGIDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB12110)

inline static constexpr unsigned int LLLBFADGIDM_TypeDefinitionIndex = 9710;

class LLLBFADGIDM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::DNJLFIDBDDG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::FLCDIPBFACP*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLLBFADGIDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLLBFADGIDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLLBFADGIDM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_NAMKJOJBAOA_OFFSET))(this);
	}

	::FLCDIPBFACP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FLCDIPBFACP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLLBFADGIDM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBFADGIDM_CHLEALKAOJO_OFFSET))(this);
	}
};
