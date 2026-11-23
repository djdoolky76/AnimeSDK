#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace CriWare::CriTimeline::Atom { class CriAtomBehaviour; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_F6ED9B2B4ADE040A_OFFSET UNITYSDK_OFFSET(0x2A17A70)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_F99BD1D1A89F5412_OFFSET UNITYSDK_OFFSET(0x22C24E0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_FA652F21910DD8DC_OFFSET UNITYSDK_OFFSET(0x2AB66B0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_FCCCD8E0FCCC6059_OFFSET UNITYSDK_OFFSET(0x2AB6570)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB6640)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClipBase_TypeDefinitionIndex = 19187;

	class CriAtomClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean stopWithoutRelease; // 0x18
		::System::Boolean muted; // 0x19
		::System::Boolean ignoreBlend; // 0x1A
		::System::Boolean loopWithinClip; // 0x1B
		::System::Boolean stopAtClipEnd; // 0x1C
		::System::Byte _padding0[0x3];
		::CriWare::CriTimeline::Atom::CriAtomBehaviour* templateBehaviour; // 0x20
		::System::Double clipDuration; // 0x28

		::FA1EDF0909FD0302::AE42330449B9EF25 FCCCD8E0FCCC6059(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_FCCCD8E0FCCC6059_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 F99BD1D1A89F5412()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_F99BD1D1A89F5412_OFFSET))(this);
		}

		::System::Double FA652F21910DD8DC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_FA652F21910DD8DC_OFFSET))(this);
		}

		::System::Void F6ED9B2B4ADE040A(::System::Double E6A5807516E3D43A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE_F6ED9B2B4ADE040A_OFFSET))(this, E6A5807516E3D43A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPBASE__CTOR_OFFSET))(this);
		}
	};
}
