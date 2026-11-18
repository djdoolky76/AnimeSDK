#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_EGCGFAGAFPD.h"
#include "unitysdk/System/Object.h"

class ADDEBPHFFIF;
class MEMPJCOPMDE;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_HKCIIGABOLG_EDALEDPBEKF_OFFSET UNITYSDK_OFFSET(0x11A88290)
#define EIBHHJENHJK_HKCIIGABOLG_OJBBFMDGAHL_OFFSET UNITYSDK_OFFSET(0x11A88080)
#define EIBHHJENHJK_HKCIIGABOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A81D20)

inline static constexpr unsigned int EIBHHJENHJK_HKCIIGABOLG_TypeDefinitionIndex = 71907;

class EIBHHJENHJK_HKCIIGABOLG : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::ADDEBPHFFIF* DLMHPMILIPL; // 0x18
	::ADDEBPHFFIF_EGCGFAGAFPD NMMHBFPECMC; // 0x20
	::System::Int32 HHEGANCPILH; // 0x24
	::System::Int32 NACGJJKHEJE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HKCIIGABOLG__CTOR_OFFSET))(this);
	}

	::System::Void OJBBFMDGAHL(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HKCIIGABOLG_OJBBFMDGAHL_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EDALEDPBEKF(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HKCIIGABOLG_EDALEDPBEKF_OFFSET))(this, GLAOEHCGCFO);
	}
};
