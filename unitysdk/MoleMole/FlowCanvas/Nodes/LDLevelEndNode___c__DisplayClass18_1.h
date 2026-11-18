#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class DJDDGKFCNAJ;
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1040C310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1___TRYPLAYDYNAMICENDPERFORMS_B__0_OFFSET UNITYSDK_OFFSET(0x1040C320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass18_1_TypeDefinitionIndex = 43824;

	template <typename T>
	class LDLevelEndNode___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x18
		::MoleMole::Config::ScenePerformConfig* scenePerformConfig; // 0x20
		::DJDDGKFCNAJ* blackCurtain; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void __TryPlayDynamicEndPerforms_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO _)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1___TRYPLAYDYNAMICENDPERFORMS_B__0_OFFSET))(this, _);
		}
	};
}
