#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEANGKPOEDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HKBGJEBCGHN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BFJBFDJONPB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x177596E0)
#define BFJBFDJONPB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17759480)
#define BFJBFDJONPB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17759620)
#define BFJBFDJONPB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x177597C0)
#define BFJBFDJONPB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17759490)
#define BFJBFDJONPB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17759960)
#define BFJBFDJONPB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x177590E0)
#define BFJBFDJONPB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17759940)
#define BFJBFDJONPB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x177590C0)
#define BFJBFDJONPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x177593A0)
#define BFJBFDJONPB__CTOR_OFFSET UNITYSDK_OFFSET(0x177598F0)

inline static constexpr unsigned int BFJBFDJONPB_TypeDefinitionIndex = 10964;

class BFJBFDJONPB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::HKBGJEBCGHN*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::AEANGKPOEDM DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BFJBFDJONPB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BFJBFDJONPB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_NAMKJOJBAOA_OFFSET))(this);
	}

	::HKBGJEBCGHN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HKBGJEBCGHN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFJBFDJONPB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
