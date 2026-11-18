#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIDDBDDPCAN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ENGFILFIICA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AKBNEOAMFMM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17EE7F00)
#define AKBNEOAMFMM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17EE7C80)
#define AKBNEOAMFMM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17EE7C90)
#define AKBNEOAMFMM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17EE7D50)
#define AKBNEOAMFMM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17EE7E80)
#define AKBNEOAMFMM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17EE8030)
#define AKBNEOAMFMM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17EE78D0)
#define AKBNEOAMFMM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17EE78B0)
#define AKBNEOAMFMM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17EE7B90)
#define AKBNEOAMFMM__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE7FE0)

inline static constexpr unsigned int AKBNEOAMFMM_TypeDefinitionIndex = 15672;

class AKBNEOAMFMM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::BIDDBDDPCAN DHDJDGFNBOA; // 0x28
	::Il2CppArray<::ENGFILFIICA*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AKBNEOAMFMM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
