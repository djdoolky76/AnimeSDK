#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARSPINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x135691F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARSPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x135695F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAvatarSpInfo_TypeDefinitionIndex = 74746;

	class LDGetAvatarSpInfo
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* outValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARSPINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARSPINFO_INVOKE_OFFSET))(this);
		}
	};
}
