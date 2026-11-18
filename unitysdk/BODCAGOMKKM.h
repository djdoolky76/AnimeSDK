#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEOBAMDJEDB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NNABCKCKINM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BODCAGOMKKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C522570)
#define BODCAGOMKKM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C5222F0)
#define BODCAGOMKKM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C522300)
#define BODCAGOMKKM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C5223C0)
#define BODCAGOMKKM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C5224F0)
#define BODCAGOMKKM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C522970)
#define BODCAGOMKKM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C5226A0)
#define BODCAGOMKKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C521F50)
#define BODCAGOMKKM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C522950)
#define BODCAGOMKKM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C521F30)
#define BODCAGOMKKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C522210)
#define BODCAGOMKKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C522650)

inline static constexpr unsigned int BODCAGOMKKM_TypeDefinitionIndex = 9411;

class BODCAGOMKKM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::NNABCKCKINM*>* OJMBOGGMIKO; // 0x20
	::AEOBAMDJEDB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BODCAGOMKKM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BODCAGOMKKM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BODCAGOMKKM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODCAGOMKKM_NAMKJOJBAOA_OFFSET))(this);
	}

	::NNABCKCKINM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NNABCKCKINM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BODCAGOMKKM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
