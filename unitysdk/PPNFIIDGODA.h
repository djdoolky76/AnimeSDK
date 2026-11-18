#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POMBMJPLIFB.h"
#include "unitysdk/System/Object.h"

class CAKCAIBCOGJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPNFIIDGODA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD9EE60)
#define PPNFIIDGODA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD9EC30)
#define PPNFIIDGODA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD9EDA0)
#define PPNFIIDGODA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD9EF40)
#define PPNFIIDGODA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD9EC40)
#define PPNFIIDGODA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD9F080)
#define PPNFIIDGODA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD9F290)
#define PPNFIIDGODA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD9E890)
#define PPNFIIDGODA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD9F270)
#define PPNFIIDGODA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD9E870)
#define PPNFIIDGODA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD9EB50)
#define PPNFIIDGODA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9F070)

inline static constexpr unsigned int PPNFIIDGODA_TypeDefinitionIndex = 14369;

class PPNFIIDGODA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::CAKCAIBCOGJ*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::POMBMJPLIFB DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PPNFIIDGODA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PPNFIIDGODA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_FINALIZE_OFFSET))(this);
	}

	::CAKCAIBCOGJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CAKCAIBCOGJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPNFIIDGODA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PPNFIIDGODA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNFIIDGODA_CHLEALKAOJO_OFFSET))(this);
	}
};
