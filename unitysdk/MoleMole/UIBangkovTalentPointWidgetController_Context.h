#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DMHOLJNNCJA_FIMJMKHPCBG;
namespace System { class Object; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19190070)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPointWidgetController_Context_TypeDefinitionIndex = 44562;

	class UIBangkovTalentPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DMHOLJNNCJA_FIMJMKHPCBG* Node; // 0x28
		::LJHFMILANJA_1<::System::Object*>* PropertyCurrentSelectedNode; // 0x30
		::System::Boolean IsForeground; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
