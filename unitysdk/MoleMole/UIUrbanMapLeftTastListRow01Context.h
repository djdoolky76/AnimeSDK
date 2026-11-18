#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MBDAEEFAGKB;
namespace System { template <typename T> class Action_1; }
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166FE320)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow01Context_TypeDefinitionIndex = 57884;

	class UIUrbanMapLeftTastListRow01Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NMANHEHIJAL_1<::MBDAEEFAGKB*>* QuestDatas; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow01Context*>* OnClick; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
