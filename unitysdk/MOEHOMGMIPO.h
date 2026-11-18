#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PDNJOFAHGKD.h"
#include "unitysdk/System/Object.h"

class GBCBCHGINEN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOEHOMGMIPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA9FE90)
#define MOEHOMGMIPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA9FC50)
#define MOEHOMGMIPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA9FDD0)
#define MOEHOMGMIPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA9FF70)
#define MOEHOMGMIPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA9FC60)
#define MOEHOMGMIPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAA00B0)
#define MOEHOMGMIPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA9F8A0)
#define MOEHOMGMIPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA9F880)
#define MOEHOMGMIPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA9FB60)
#define MOEHOMGMIPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA00A0)

inline static constexpr unsigned int MOEHOMGMIPO_TypeDefinitionIndex = 9427;

class MOEHOMGMIPO : public ::System::Object
{
public:
	::Il2CppArray<::GBCBCHGINEN*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::PDNJOFAHGKD DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEHOMGMIPO_CHLEALKAOJO_OFFSET))(this);
	}
};
