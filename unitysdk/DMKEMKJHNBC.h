#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLHDAEKLFIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class POFOLBHCAJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DMKEMKJHNBC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9AC200)
#define DMKEMKJHNBC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9ABFC0)
#define DMKEMKJHNBC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9AC140)
#define DMKEMKJHNBC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9AC2E0)
#define DMKEMKJHNBC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9ABFD0)
#define DMKEMKJHNBC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9AC460)
#define DMKEMKJHNBC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9ABC10)
#define DMKEMKJHNBC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9ABBF0)
#define DMKEMKJHNBC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9ABED0)
#define DMKEMKJHNBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AC410)

inline static constexpr unsigned int DMKEMKJHNBC_TypeDefinitionIndex = 12178;

class DMKEMKJHNBC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::DLHDAEKLFIH DHDJDGFNBOA; // 0x28
	::Il2CppArray<::POFOLBHCAJP*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKEMKJHNBC_CHLEALKAOJO_OFFSET))(this);
	}
};
