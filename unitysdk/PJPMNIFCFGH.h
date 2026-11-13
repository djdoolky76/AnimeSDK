#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FPKJDMIBKMN;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define PJPMNIFCFGH_CMGEIPFCLKP_OFFSET UNITYSDK_OFFSET(0x147A3AB0)
#define PJPMNIFCFGH_CTOR_OFFSET UNITYSDK_OFFSET(0x147A3F40)
#define PJPMNIFCFGH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x147A3770)
#define PJPMNIFCFGH_GMGBICAHEJO_OFFSET UNITYSDK_OFFSET(0x147A3E60)
#define PJPMNIFCFGH_MONOGDDKHED_OFFSET UNITYSDK_OFFSET(0x147A3D70)
#define PJPMNIFCFGH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x147A38F0)
#define PJPMNIFCFGH__ONBIND_OFFSET UNITYSDK_OFFSET(0x147A3410)

inline static constexpr unsigned int PJPMNIFCFGH_TypeDefinitionIndex = 73589;

	class PJPMNIFCFGH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Slider* KDAOJGPBBBG; // 0x60
		::RPG::Client::LocalizedText* ENKFGNANAEC; // 0x68
		::UnityEngine::UI::Image* CHHAAJJCMCF; // 0x70
		::RPG::Client::UIValueChangeAnimation* OOMNKEIGLPJ; // 0x78
		::RPG::Client::UIValueChangeAnimation* PNCGEDHHLFE; // 0x80
		::RPG::Client::LocalizedText* GGMELAEAODG; // 0x88
		::System::Boolean BMPFONACADL; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMNIFCFGH__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::FPKJDMIBKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKJDMIBKMN*))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void CMGEIPFCLKP(::FPKJDMIBKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKJDMIBKMN*))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_CMGEIPFCLKP_OFFSET))(this, a1);
		}

		::System::Void MONOGDDKHED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_MONOGDDKHED_OFFSET))(this, a1);
		}

		::System::Void GMGBICAHEJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJPMNIFCFGH_GMGBICAHEJO_OFFSET))(this, a1);
		}

	};
