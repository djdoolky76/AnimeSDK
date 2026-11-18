#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJMIHDDGDA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BHBAKMEEMOP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOJIIKMAGMO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADDB5C0)
#define EOJIIKMAGMO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADDB380)
#define EOJIIKMAGMO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADDB500)
#define EOJIIKMAGMO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADDB6A0)
#define EOJIIKMAGMO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADDB390)
#define EOJIIKMAGMO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADDB7E0)
#define EOJIIKMAGMO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADDAFD0)
#define EOJIIKMAGMO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADDAFB0)
#define EOJIIKMAGMO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADDB290)
#define EOJIIKMAGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDB7D0)

inline static constexpr unsigned int EOJIIKMAGMO_TypeDefinitionIndex = 9824;

class EOJIIKMAGMO : public ::System::Object
{
public:
	::CLJMIHDDGDA DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::BHBAKMEEMOP*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EOJIIKMAGMO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
