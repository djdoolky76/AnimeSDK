#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KEEMODIFIFG.h"
#include "unitysdk/System/Object.h"

class FFEFAGODAMJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EBJGNJEBJIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A194FC0)
#define EBJGNJEBJIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A194D40)
#define EBJGNJEBJIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A194D50)
#define EBJGNJEBJIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A194E10)
#define EBJGNJEBJIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A194F40)
#define EBJGNJEBJIE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A1950F0)
#define EBJGNJEBJIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A195340)
#define EBJGNJEBJIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A1949A0)
#define EBJGNJEBJIE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A195320)
#define EBJGNJEBJIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A194980)
#define EBJGNJEBJIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A194C60)
#define EBJGNJEBJIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1950A0)

inline static constexpr unsigned int EBJGNJEBJIE_TypeDefinitionIndex = 16625;

class EBJGNJEBJIE : public ::System::Object
{
public:
	::KEEMODIFIFG DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::FFEFAGODAMJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::FFEFAGODAMJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FFEFAGODAMJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJGNJEBJIE_CHLEALKAOJO_OFFSET))(this);
	}
};
