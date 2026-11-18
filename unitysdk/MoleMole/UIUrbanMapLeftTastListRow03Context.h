#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DHMNFJBEEDP;
namespace System { template <typename T> class Action_1; }
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW03CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166FE3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow03Context_TypeDefinitionIndex = 85595;

	class UIUrbanMapLeftTastListRow03Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow03Context*>* OnClick; // 0x28
		::NMANHEHIJAL_1<::DHMNFJBEEDP*>* CollectDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW03CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
