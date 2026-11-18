#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPANCMFOJOB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EDDKHKAIJML;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AAJNGMECIEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x194E27C0)
#define AAJNGMECIEP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x194E2580)
#define AAJNGMECIEP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x194E2700)
#define AAJNGMECIEP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x194E28A0)
#define AAJNGMECIEP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x194E2590)
#define AAJNGMECIEP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x194E2A20)
#define AAJNGMECIEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x194E21D0)
#define AAJNGMECIEP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x194E21B0)
#define AAJNGMECIEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x194E2490)
#define AAJNGMECIEP__CTOR_OFFSET UNITYSDK_OFFSET(0x194E29D0)

inline static constexpr unsigned int AAJNGMECIEP_TypeDefinitionIndex = 10794;

class AAJNGMECIEP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::EDDKHKAIJML*>* OJMBOGGMIKO; // 0x20
	::FPANCMFOJOB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AAJNGMECIEP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AAJNGMECIEP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJNGMECIEP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AAJNGMECIEP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
