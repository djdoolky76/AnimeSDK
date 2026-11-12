#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DControllerBase.h"
class HEJLOAOKDGE;

#define SOFA_BASESOFAUI3DWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xF491830)
#define SOFA_BASESOFAUI3DWINDOW_EXIT_OFFSET UNITYSDK_OFFSET(0xF4917A0)
#define SOFA_BASESOFAUI3DWINDOW_GET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xF4916F0)
#define SOFA_BASESOFAUI3DWINDOW_SET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xF491700)
#define SOFA_BASESOFAUI3DWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xF491710)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaUI3DWindow_TypeDefinitionIndex = 50768;

	class BaseSofaUI3DWindow : public ::RPG::Client::UI3DControllerBase
	{
	public:
		::HEJLOAOKDGE* _DependencyResolver_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_CTOR_OFFSET))(this);
		}

		::HEJLOAOKDGE* get_DependencyResolver()
		{
			return ((::HEJLOAOKDGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_GET_DEPENDENCYRESOLVER_OFFSET))(this);
		}

		::System::Void set_DependencyResolver(::HEJLOAOKDGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEJLOAOKDGE*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_SET_DEPENDENCYRESOLVER_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_SHOW_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_EXIT_OFFSET))(this);
		}

	};
}
