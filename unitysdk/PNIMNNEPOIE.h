#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIOMABDCDJB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AIGOEPPCAGH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PNIMNNEPOIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1B39A0)
#define PNIMNNEPOIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C1B3720)
#define PNIMNNEPOIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C1B3730)
#define PNIMNNEPOIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1B37F0)
#define PNIMNNEPOIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C1B3920)
#define PNIMNNEPOIE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C1B3DA0)
#define PNIMNNEPOIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1B3AF0)
#define PNIMNNEPOIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1B3370)
#define PNIMNNEPOIE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C1B3AD0)
#define PNIMNNEPOIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1B3350)
#define PNIMNNEPOIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1B3630)
#define PNIMNNEPOIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B3A80)

inline static constexpr unsigned int PNIMNNEPOIE_TypeDefinitionIndex = 11164;

class PNIMNNEPOIE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::BIOMABDCDJB DHDJDGFNBOA; // 0x28
	::Il2CppArray<::AIGOEPPCAGH*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::AIGOEPPCAGH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AIGOEPPCAGH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNIMNNEPOIE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
