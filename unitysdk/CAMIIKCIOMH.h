#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NEEJGHGNAJI.h"
#include "unitysdk/System/Object.h"

class FGNAGKBEAKF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAMIIKCIOMH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A82770)
#define CAMIIKCIOMH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A82530)
#define CAMIIKCIOMH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A826B0)
#define CAMIIKCIOMH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A82850)
#define CAMIIKCIOMH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A82540)
#define CAMIIKCIOMH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A82990)
#define CAMIIKCIOMH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A82180)
#define CAMIIKCIOMH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A82160)
#define CAMIIKCIOMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A82440)
#define CAMIIKCIOMH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A82980)

inline static constexpr unsigned int CAMIIKCIOMH_TypeDefinitionIndex = 12848;

class CAMIIKCIOMH : public ::System::Object
{
public:
	::Il2CppArray<::FGNAGKBEAKF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::NEEJGHGNAJI DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CAMIIKCIOMH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
