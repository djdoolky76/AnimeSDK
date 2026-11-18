#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNJAADNGOEN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DECJGBCGLEP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IHJEOPGDHLD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B88BC30)
#define IHJEOPGDHLD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B88B9F0)
#define IHJEOPGDHLD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B88BB70)
#define IHJEOPGDHLD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B88BD10)
#define IHJEOPGDHLD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B88BA00)
#define IHJEOPGDHLD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B88BE90)
#define IHJEOPGDHLD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B88C0E0)
#define IHJEOPGDHLD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B88B640)
#define IHJEOPGDHLD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B88C0C0)
#define IHJEOPGDHLD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B88B620)
#define IHJEOPGDHLD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B88B900)
#define IHJEOPGDHLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88BE40)

inline static constexpr unsigned int IHJEOPGDHLD_TypeDefinitionIndex = 14502;

class IHJEOPGDHLD : public ::System::Object
{
public:
	::HNJAADNGOEN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::DECJGBCGLEP*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_FINALIZE_OFFSET))(this);
	}

	::DECJGBCGLEP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DECJGBCGLEP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJEOPGDHLD_CHLEALKAOJO_OFFSET))(this);
	}
};
