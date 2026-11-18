#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMCCGCBJBNL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HEKDOFPEGGM;
namespace System { class Action; }

#define NEOINAMMOFA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C18C180)
#define NEOINAMMOFA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C18BF20)
#define NEOINAMMOFA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C18BF30)
#define NEOINAMMOFA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C18BFD0)
#define NEOINAMMOFA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C18C0D0)
#define NEOINAMMOFA_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1C18C240)
#define NEOINAMMOFA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C18BCD0)
#define NEOINAMMOFA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C18BCB0)
#define NEOINAMMOFA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C18BE60)
#define NEOINAMMOFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18C230)

inline static constexpr unsigned int NEOINAMMOFA_TypeDefinitionIndex = 15336;

class NEOINAMMOFA : public ::System::Object
{
public:
	::JMCCGCBJBNL DHDJDGFNBOA; // 0x10
	::HEKDOFPEGGM* EFFAONJBCOG; // 0x20
	::HEKDOFPEGGM* _KMJDPDLPPFE_k__BackingField; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NEOINAMMOFA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NEOINAMMOFA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::HEKDOFPEGGM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HEKDOFPEGGM*))((::PBYTE)hIl2Cpp + NEOINAMMOFA_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}
};
