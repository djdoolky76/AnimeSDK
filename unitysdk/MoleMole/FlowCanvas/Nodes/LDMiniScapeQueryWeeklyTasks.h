#pragma once
#include "unitysdk/unitysdk.h"

class LPKCNCBNLGO;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1040E750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS__CTOR_OFFSET UNITYSDK_OFFSET(0x1040E880)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMiniScapeQueryWeeklyTasks_TypeDefinitionIndex = 64746;

	class LDMiniScapeQueryWeeklyTasks
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::LPKCNCBNLGO*>* Invoke()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LPKCNCBNLGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS_INVOKE_OFFSET))(this);
		}
	};
}
