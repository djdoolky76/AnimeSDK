#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBDEDKAOPCI.h"
#include "unitysdk/System/Object.h"

class HPCJLCHFDKH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PLDFPEFNGPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B348B30)
#define PLDFPEFNGPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B3488B0)
#define PLDFPEFNGPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B3488C0)
#define PLDFPEFNGPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B348980)
#define PLDFPEFNGPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B348AB0)
#define PLDFPEFNGPA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B348F30)
#define PLDFPEFNGPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B348C80)
#define PLDFPEFNGPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B348510)
#define PLDFPEFNGPA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B348C60)
#define PLDFPEFNGPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B3484F0)
#define PLDFPEFNGPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B3487D0)
#define PLDFPEFNGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B348C10)

inline static constexpr unsigned int PLDFPEFNGPA_TypeDefinitionIndex = 9693;

class PLDFPEFNGPA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HPCJLCHFDKH*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::OBDEDKAOPCI DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HPCJLCHFDKH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HPCJLCHFDKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDFPEFNGPA_CHLEALKAOJO_OFFSET))(this);
	}
};
