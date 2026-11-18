#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOOEOFNKPIL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BIEHLHBILEC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define POOGOKMPCLN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1FC255D0)
#define POOGOKMPCLN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1FC25390)
#define POOGOKMPCLN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1FC25510)
#define POOGOKMPCLN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FC256B0)
#define POOGOKMPCLN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1FC253A0)
#define POOGOKMPCLN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1FC25830)
#define POOGOKMPCLN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1FC24FE0)
#define POOGOKMPCLN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1FC24FC0)
#define POOGOKMPCLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FC252A0)
#define POOGOKMPCLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC257E0)

inline static constexpr unsigned int POOGOKMPCLN_TypeDefinitionIndex = 16531;

class POOGOKMPCLN : public ::System::Object
{
public:
	::DOOEOFNKPIL DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::BIEHLHBILEC*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POOGOKMPCLN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POOGOKMPCLN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POOGOKMPCLN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOGOKMPCLN_CHLEALKAOJO_OFFSET))(this);
	}
};
