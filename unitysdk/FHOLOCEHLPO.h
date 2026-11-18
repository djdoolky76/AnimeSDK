#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LECIAALPLFK.h"
#include "unitysdk/System/Object.h"

class CIAPNCCFHAK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FHOLOCEHLPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4C3850)
#define FHOLOCEHLPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4C3620)
#define FHOLOCEHLPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4C3790)
#define FHOLOCEHLPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4C3930)
#define FHOLOCEHLPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4C3630)
#define FHOLOCEHLPO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4C3CA0)
#define FHOLOCEHLPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4C3AD0)
#define FHOLOCEHLPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4C3280)
#define FHOLOCEHLPO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4C3AB0)
#define FHOLOCEHLPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4C3260)
#define FHOLOCEHLPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4C3540)
#define FHOLOCEHLPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C3A60)

inline static constexpr unsigned int FHOLOCEHLPO_TypeDefinitionIndex = 14679;

class FHOLOCEHLPO : public ::System::Object
{
public:
	::LECIAALPLFK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::CIAPNCCFHAK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CIAPNCCFHAK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CIAPNCCFHAK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHOLOCEHLPO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
