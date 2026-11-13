#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class ENPCHFJGOMK;
class NNCKBIHOFIP;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Slider; }

#define ENPCHFJGOMK_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x18816430)
#define ENPCHFJGOMK_CTOR_OFFSET UNITYSDK_OFFSET(0x188164A0)
#define ENPCHFJGOMK_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0x18816370)
#define ENPCHFJGOMK_HPKAAIMCAPC_OFFSET UNITYSDK_OFFSET(0x18816320)
#define ENPCHFJGOMK__ONBIND_OFFSET UNITYSDK_OFFSET(0x18815DE0)
#define ENPCHFJGOMK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18815F70)

inline static constexpr unsigned int ENPCHFJGOMK_TypeDefinitionIndex = 74364;

	class ENPCHFJGOMK : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::ENPCHFJGOMK*>* HJLKNPIFNGI; // 0x60
		::NNCKBIHOFIP* PFKCKIOAOFO; // 0x68
		::UnityEngine::UI::Slider* HBMGJNFEFLN; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HPKAAIMCAPC(::System::Action_1<::ENPCHFJGOMK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ENPCHFJGOMK*>*))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_HPKAAIMCAPC_OFFSET))(this, a1);
		}

		::System::Void EGLHCCFNAGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_EGLHCCFNAGK_OFFSET))(this);
		}

		::System::Void COPGACEDIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_COPGACEDIEI_OFFSET))(this);
		}

	};
