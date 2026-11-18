#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNECMKEIEB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JBLKPANAOLK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDPICFLAEAP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5F8370)
#define KDPICFLAEAP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5F8100)
#define KDPICFLAEAP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5F82B0)
#define KDPICFLAEAP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F8450)
#define KDPICFLAEAP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5F8110)
#define KDPICFLAEAP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5F85F0)
#define KDPICFLAEAP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5F7D60)
#define KDPICFLAEAP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5F85D0)
#define KDPICFLAEAP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5F7D40)
#define KDPICFLAEAP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5F8020)
#define KDPICFLAEAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F8580)

inline static constexpr unsigned int KDPICFLAEAP_TypeDefinitionIndex = 9998;

class KDPICFLAEAP : public ::System::Object
{
public:
	::JJNECMKEIEB DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::JBLKPANAOLK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDPICFLAEAP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KDPICFLAEAP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_NAMKJOJBAOA_OFFSET))(this);
	}

	::JBLKPANAOLK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JBLKPANAOLK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPICFLAEAP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_CHLEALKAOJO_OFFSET))(this);
	}
};
