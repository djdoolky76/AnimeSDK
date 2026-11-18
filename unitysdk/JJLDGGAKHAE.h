#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"
#include "unitysdk/GDIACAHPLBB_MNPPEMJJLGL.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define JJLDGGAKHAE_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x18A21490)
#define JJLDGGAKHAE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x18A217A0)
#define JJLDGGAKHAE_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x18A21960)
#define JJLDGGAKHAE_IDPGABIHILO_OFFSET UNITYSDK_OFFSET(0x18A21A00)
#define JJLDGGAKHAE_IPIEGMHBCLB_OFFSET UNITYSDK_OFFSET(0x18A21B10)
#define JJLDGGAKHAE_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x18A21A80)
#define JJLDGGAKHAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A21050)
#define JJLDGGAKHAE_PENIDBNCLDD_OFFSET UNITYSDK_OFFSET(0x18A21220)
#define JJLDGGAKHAE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A21920)

inline static constexpr unsigned int JJLDGGAKHAE_TypeDefinitionIndex = 78090;

class JJLDGGAKHAE : public ::BBKFNNHAKBP
{
public:
	::System::String* FJOJDBMJEPA; // 0x38
	::System::UInt32 AGOCGDBLFHL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void PENIDBNCLDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_PENIDBNCLDD_OFFSET))(this);
	}

	::System::Void IDPGABIHILO(::MoleMole::EntityHandle HPADNAEINPK, ::GDIACAHPLBB_MNPPEMJJLGL MPOBDEHJOIN, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::GDIACAHPLBB_MNPPEMJJLGL, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_IDPGABIHILO_OFFSET))(this, HPADNAEINPK, MPOBDEHJOIN, AELLPLBJELA);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void IPIEGMHBCLB(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JJLDGGAKHAE_IPIEGMHBCLB_OFFSET))(this, EIFONLCJOPG);
	}
};
