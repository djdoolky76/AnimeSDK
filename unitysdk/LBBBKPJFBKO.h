#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKEMCKFKNMH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JFLPKEPKFOM;
namespace System { class Action; }

#define LBBBKPJFBKO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19589EC0)
#define LBBBKPJFBKO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19589C90)
#define LBBBKPJFBKO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19589CA0)
#define LBBBKPJFBKO_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1958A120)
#define LBBBKPJFBKO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19589D40)
#define LBBBKPJFBKO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19589E40)
#define LBBBKPJFBKO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19589F90)
#define LBBBKPJFBKO_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x19589F80)
#define LBBBKPJFBKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19589A40)
#define LBBBKPJFBKO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19589A20)
#define LBBBKPJFBKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19589BD0)
#define LBBBKPJFBKO__CTOR_OFFSET UNITYSDK_OFFSET(0x19589F70)

inline static constexpr unsigned int LBBBKPJFBKO_TypeDefinitionIndex = 16269;

class LBBBKPJFBKO : public ::System::Object
{
public:
	::GKEMCKFKNMH DHDJDGFNBOA; // 0x10
	::JFLPKEPKFOM* EFFAONJBCOG; // 0x20
	::JFLPKEPKFOM* _KMJDPDLPPFE_k__BackingField; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::JFLPKEPKFOM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JFLPKEPKFOM*))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::JFLPKEPKFOM* EKHHIIJOEFN()
	{
		return ((::JFLPKEPKFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBKPJFBKO_CHLEALKAOJO_OFFSET))(this);
	}
};
