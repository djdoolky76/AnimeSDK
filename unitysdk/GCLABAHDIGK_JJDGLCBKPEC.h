#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define GCLABAHDIGK_JJDGLCBKPEC_GEPGLNGNLPG_OFFSET UNITYSDK_OFFSET(0x15CD23F0)
#define GCLABAHDIGK_JJDGLCBKPEC_LGELGGFEGEB_OFFSET UNITYSDK_OFFSET(0x15CD2660)
#define GCLABAHDIGK_JJDGLCBKPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD23E0)

inline static constexpr unsigned int GCLABAHDIGK_JJDGLCBKPEC_TypeDefinitionIndex = 41083;

class GCLABAHDIGK_JJDGLCBKPEC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* JDCHLGKAMHN; // 0x10
	::MoleMole::UIBaseController* JOLDOMEIKEF; // 0x18
	::System::Int32 FPNGKOFOFNO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLABAHDIGK_JJDGLCBKPEC__CTOR_OFFSET))(this);
	}

	::System::Void GEPGLNGNLPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLABAHDIGK_JJDGLCBKPEC_GEPGLNGNLPG_OFFSET))(this);
	}

	::System::Void LGELGGFEGEB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GCLABAHDIGK_JJDGLCBKPEC_LGELGGFEGEB_OFFSET))(this, KOIBHLHLMFC);
	}
};
