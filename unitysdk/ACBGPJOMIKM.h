#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MDKKPOLLNPF.h"
#include "unitysdk/System/Object.h"

class JEJPKDIJIEP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACBGPJOMIKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x177426F0)
#define ACBGPJOMIKM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x177424B0)
#define ACBGPJOMIKM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17742630)
#define ACBGPJOMIKM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x177427D0)
#define ACBGPJOMIKM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x177424C0)
#define ACBGPJOMIKM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17742950)
#define ACBGPJOMIKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17742100)
#define ACBGPJOMIKM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x177420E0)
#define ACBGPJOMIKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x177423C0)
#define ACBGPJOMIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x17742900)

inline static constexpr unsigned int ACBGPJOMIKM_TypeDefinitionIndex = 13328;

class ACBGPJOMIKM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::MDKKPOLLNPF DHDJDGFNBOA; // 0x28
	::Il2CppArray<::JEJPKDIJIEP*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ACBGPJOMIKM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
