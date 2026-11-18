#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POFGBMAECIH.h"
#include "unitysdk/System/Object.h"

class KJGHKNLPHAD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOLDDFGDFAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B8667D0)
#define FOLDDFGDFAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B866590)
#define FOLDDFGDFAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B866710)
#define FOLDDFGDFAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8668B0)
#define FOLDDFGDFAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B8665A0)
#define FOLDDFGDFAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B866A30)
#define FOLDDFGDFAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B866C80)
#define FOLDDFGDFAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B8661E0)
#define FOLDDFGDFAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B866C60)
#define FOLDDFGDFAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B8661C0)
#define FOLDDFGDFAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B8664A0)
#define FOLDDFGDFAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8669E0)

inline static constexpr unsigned int FOLDDFGDFAL_TypeDefinitionIndex = 14781;

class FOLDDFGDFAL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::KJGHKNLPHAD*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::POFGBMAECIH DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_FINALIZE_OFFSET))(this);
	}

	::KJGHKNLPHAD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KJGHKNLPHAD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOLDDFGDFAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
