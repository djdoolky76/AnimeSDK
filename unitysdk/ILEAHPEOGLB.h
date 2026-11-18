#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELDOKGFLJIN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NHJAIJHBAAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILEAHPEOGLB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A9A8F0)
#define ILEAHPEOGLB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A9A6B0)
#define ILEAHPEOGLB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A9A830)
#define ILEAHPEOGLB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A9A9D0)
#define ILEAHPEOGLB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A9A6C0)
#define ILEAHPEOGLB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A9ACF0)
#define ILEAHPEOGLB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A9AB10)
#define ILEAHPEOGLB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A9A300)
#define ILEAHPEOGLB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A9AEF0)
#define ILEAHPEOGLB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A9A2E0)
#define ILEAHPEOGLB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A9A5C0)
#define ILEAHPEOGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x15A9AB00)

inline static constexpr unsigned int ILEAHPEOGLB_TypeDefinitionIndex = 17533;

class ILEAHPEOGLB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::ELDOKGFLJIN DHDJDGFNBOA; // 0x18
	::Il2CppArray<::NHJAIJHBAAO*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NHJAIJHBAAO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NHJAIJHBAAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAHPEOGLB_NAMKJOJBAOA_OFFSET))(this);
	}
};
