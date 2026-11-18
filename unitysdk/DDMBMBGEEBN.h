#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PJIOOPABIDG.h"
#include "unitysdk/System/Object.h"

class GLFDAAPJBGE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDMBMBGEEBN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1777D380)
#define DDMBMBGEEBN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1777D140)
#define DDMBMBGEEBN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1777D2C0)
#define DDMBMBGEEBN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1777D460)
#define DDMBMBGEEBN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1777D150)
#define DDMBMBGEEBN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1777D770)
#define DDMBMBGEEBN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1777D5A0)
#define DDMBMBGEEBN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1777CD90)
#define DDMBMBGEEBN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1777D960)
#define DDMBMBGEEBN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1777CD70)
#define DDMBMBGEEBN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1777D050)
#define DDMBMBGEEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1777D590)

inline static constexpr unsigned int DDMBMBGEEBN_TypeDefinitionIndex = 17319;

class DDMBMBGEEBN : public ::System::Object
{
public:
	::PJIOOPABIDG DHDJDGFNBOA; // 0x10
	::Il2CppArray<::GLFDAAPJBGE*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_CHLEALKAOJO_OFFSET))(this);
	}

	::GLFDAAPJBGE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLFDAAPJBGE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMBMBGEEBN_NAMKJOJBAOA_OFFSET))(this);
	}
};
