#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DControllerBase.h"
class HEJLOAOKDGE;

#define SOFA_BASESOFAUI3DWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xE9695E0)
#define SOFA_BASESOFAUI3DWINDOW_EXIT_OFFSET UNITYSDK_OFFSET(0xE969550)
#define SOFA_BASESOFAUI3DWINDOW_GET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xE9694A0)
#define SOFA_BASESOFAUI3DWINDOW_SET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xE9694B0)
#define SOFA_BASESOFAUI3DWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xE9694C0)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaUI3DWindow_TypeDefinitionIndex = 49692;

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
