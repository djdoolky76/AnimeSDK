#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LFBMOBDEJMM.h"
#include "unitysdk/System/Object.h"

class JNFKELPHFLJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCBCLBJHEJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F36200)
#define DCBCLBJHEJA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F35FC0)
#define DCBCLBJHEJA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F36140)
#define DCBCLBJHEJA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F362E0)
#define DCBCLBJHEJA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F35FD0)
#define DCBCLBJHEJA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F36420)
#define DCBCLBJHEJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F35C10)
#define DCBCLBJHEJA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F35BF0)
#define DCBCLBJHEJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F35ED0)
#define DCBCLBJHEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F36410)

inline static constexpr unsigned int DCBCLBJHEJA_TypeDefinitionIndex = 15535;

class DCBCLBJHEJA : public ::System::Object
{
public:
	::Il2CppArray<::JNFKELPHFLJ*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::LFBMOBDEJMM DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCLBJHEJA_CHLEALKAOJO_OFFSET))(this);
	}
};
