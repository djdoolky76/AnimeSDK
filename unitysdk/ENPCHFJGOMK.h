#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class ENPCHFJGOMK;
class NNCKBIHOFIP;
namespace System { class Action; }
namespace UnityEngine::UI { class Slider; }

#define ENPCHFJGOMK_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x155B6D90)
#define ENPCHFJGOMK_CTOR_OFFSET UNITYSDK_OFFSET(0x155B6E00)
#define ENPCHFJGOMK_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0x155B6CD0)
#define ENPCHFJGOMK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x155B68D0)
#define ENPCHFJGOMK_HPKAAIMCAPC_OFFSET UNITYSDK_OFFSET(0x155B6C80)
#define ENPCHFJGOMK__ONBIND_OFFSET UNITYSDK_OFFSET(0x155B67B0)

inline static constexpr unsigned int ENPCHFJGOMK_TypeDefinitionIndex = 72288;

	class ENPCHFJGOMK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Slider* HBMGJNFEFLN; // 0x60
		::NNCKBIHOFIP* PFKCKIOAOFO; // 0x68
		::System::Action* HJLKNPIFNGI; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HPKAAIMCAPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ENPCHFJGOMK_HPKAAIMCAPC_OFFSET))(this, a1);
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
