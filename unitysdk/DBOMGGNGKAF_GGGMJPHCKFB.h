#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DBOMGGNGKAF_GGGMJPHCKFB_AAKIFMJPAGI_OFFSET UNITYSDK_OFFSET(0x1973EBF0)
#define DBOMGGNGKAF_GGGMJPHCKFB_JNDLLCDAEHF_OFFSET UNITYSDK_OFFSET(0x1973E570)
#define DBOMGGNGKAF_GGGMJPHCKFB_JNHGKFIGMCA_OFFSET UNITYSDK_OFFSET(0x1973E580)
#define DBOMGGNGKAF_GGGMJPHCKFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1973E560)

inline static constexpr unsigned int DBOMGGNGKAF_GGGMJPHCKFB_TypeDefinitionIndex = 92419;

class DBOMGGNGKAF_GGGMJPHCKFB : public ::System::Object
{
public:
	::System::String* JAOIHBNAKMM; // 0x10
	::MoleMole::ScreenPlayer* FHGBAFBMOEL; // 0x18
	::UnityEngine::GameObject* FAOPHDIDPKK; // 0x20
	::MoleMole::ScreenPlayer* GJFCEKGHBLN; // 0x28
	::UnityEngine::Renderer* OCFHGOGFGPE; // 0x30
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* AEHHCOCLKCA; // 0x40
	::UnityEngine::GameObject* IPCHPHPPNGD; // 0x48
	::System::Int32 KHJFHKEFNMD; // 0x50
	::System::Boolean EPGLPGPOOJN; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_GGGMJPHCKFB__CTOR_OFFSET))(this);
	}

	::System::Void JNDLLCDAEHF(::MoleMole::IVideoPlayer* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_GGGMJPHCKFB_JNDLLCDAEHF_OFFSET))(this, ECKMPOAABAL);
	}

	::System::Void AAKIFMJPAGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_GGGMJPHCKFB_AAKIFMJPAGI_OFFSET))(this);
	}

	::System::Void JNHGKFIGMCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_GGGMJPHCKFB_JNHGKFIGMCA_OFFSET))(this);
	}
};
