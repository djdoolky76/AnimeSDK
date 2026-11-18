#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIDNLNLPILG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PEFFPCDGMNL;
namespace System { class Action; }

#define GCMOJKPHILG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16642320)
#define GCMOJKPHILG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x166420F0)
#define GCMOJKPHILG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16642100)
#define GCMOJKPHILG_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x166423E0)
#define GCMOJKPHILG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166421A0)
#define GCMOJKPHILG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x166422A0)
#define GCMOJKPHILG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x166423F0)
#define GCMOJKPHILG_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x16642580)
#define GCMOJKPHILG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16641E90)
#define GCMOJKPHILG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16641E70)
#define GCMOJKPHILG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16642030)
#define GCMOJKPHILG__CTOR_OFFSET UNITYSDK_OFFSET(0x166423D0)

inline static constexpr unsigned int GCMOJKPHILG_TypeDefinitionIndex = 14849;

class GCMOJKPHILG : public ::System::Object
{
public:
	::BIDNLNLPILG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x20
	::PEFFPCDGMNL* _KMJDPDLPPFE_k__BackingField; // 0x28
	::PEFFPCDGMNL* EFFAONJBCOG; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GCMOJKPHILG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GCMOJKPHILG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_BHLAEBMEOLO_OFFSET))(this);
	}

	::PEFFPCDGMNL* EKHHIIJOEFN()
	{
		return ((::PEFFPCDGMNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOJKPHILG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GCMOJKPHILG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::PEFFPCDGMNL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PEFFPCDGMNL*))((::PBYTE)hIl2Cpp + GCMOJKPHILG_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}
};
