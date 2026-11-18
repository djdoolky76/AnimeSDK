#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPNCDOCAGKH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CPAENLMFFIO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MKEGMMGODOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C17D4C0)
#define MKEGMMGODOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C17D260)
#define MKEGMMGODOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C17D400)
#define MKEGMMGODOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C17D5A0)
#define MKEGMMGODOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C17D270)
#define MKEGMMGODOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C17CEC0)
#define MKEGMMGODOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C17CEA0)
#define MKEGMMGODOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C17D180)
#define MKEGMMGODOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17D6D0)

inline static constexpr unsigned int MKEGMMGODOP_TypeDefinitionIndex = 13934;

class MKEGMMGODOP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::CPAENLMFFIO*>* OJMBOGGMIKO; // 0x20
	::BPNCDOCAGKH DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKEGMMGODOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MKEGMMGODOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_CHLEALKAOJO_OFFSET))(this);
	}
};
