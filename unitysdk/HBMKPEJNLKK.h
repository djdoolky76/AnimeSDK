#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFPMCCPADFM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KMFLNONAGNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBMKPEJNLKK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B11D8B0)
#define HBMKPEJNLKK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B11D670)
#define HBMKPEJNLKK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B11D7F0)
#define HBMKPEJNLKK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B11D990)
#define HBMKPEJNLKK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B11D680)
#define HBMKPEJNLKK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B11DAD0)
#define HBMKPEJNLKK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B11D2C0)
#define HBMKPEJNLKK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B11D2A0)
#define HBMKPEJNLKK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B11D580)
#define HBMKPEJNLKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11DAC0)

inline static constexpr unsigned int HBMKPEJNLKK_TypeDefinitionIndex = 17235;

class HBMKPEJNLKK : public ::System::Object
{
public:
	::JFPMCCPADFM DHDJDGFNBOA; // 0x10
	::Il2CppArray<::KMFLNONAGNJ*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HBMKPEJNLKK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
