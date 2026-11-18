#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOEABJEKHAI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NPCALGJDJON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECKOGCOALKI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA4710)
#define ECKOGCOALKI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA44E0)
#define ECKOGCOALKI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA4650)
#define ECKOGCOALKI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA47F0)
#define ECKOGCOALKI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA44F0)
#define ECKOGCOALKI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA4B40)
#define ECKOGCOALKI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AA4970)
#define ECKOGCOALKI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA4140)
#define ECKOGCOALKI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA4120)
#define ECKOGCOALKI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA4400)
#define ECKOGCOALKI__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA4920)

inline static constexpr unsigned int ECKOGCOALKI_TypeDefinitionIndex = 9262;

class ECKOGCOALKI : public ::System::Object
{
public:
	::HOEABJEKHAI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::NPCALGJDJON*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECKOGCOALKI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECKOGCOALKI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECKOGCOALKI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKOGCOALKI_CHLEALKAOJO_OFFSET))(this);
	}

	::NPCALGJDJON* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NPCALGJDJON*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECKOGCOALKI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
