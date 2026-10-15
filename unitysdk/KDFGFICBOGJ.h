#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class ENEIHJJPNPI;
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class MonoTieMuQTE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Slider; }

#define KDFGFICBOGJ_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0xB3553E0)
#define KDFGFICBOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB355200)
#define KDFGFICBOGJ_DGKKOPDDDGE_OFFSET UNITYSDK_OFFSET(0xB3556C0)
#define KDFGFICBOGJ_DIBLODAEIMH_OFFSET UNITYSDK_OFFSET(0xB3557E0)
#define KDFGFICBOGJ_DJOAFCLBPEK_OFFSET UNITYSDK_OFFSET(0xB355650)
#define KDFGFICBOGJ_JFNMDEIMGPG_OFFSET UNITYSDK_OFFSET(0xB355270)
#define KDFGFICBOGJ_PGPLJHNOLML_OFFSET UNITYSDK_OFFSET(0xB355500)
#define KDFGFICBOGJ_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB354FB0)
#define KDFGFICBOGJ__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB355020)
#define KDFGFICBOGJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3554A0)
#define KDFGFICBOGJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB3552D0)
#define KDFGFICBOGJ__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB355450)

inline static constexpr unsigned int KDFGFICBOGJ_TypeDefinitionIndex = 72311;

	class KDFGFICBOGJ : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::MonoTieMuQTE* MKIEHCGKMIA; // 0x190
		::UnityEngine::UI::Slider* EBLLEMNBNBO; // 0x198
		::RPG::Client::CustomButton* EBKBADIICEA; // 0x1A0
		::ENEIHJJPNPI* CGGGPPBMFID; // 0x1A8
		::System::Single EKEGNJACGEA; // 0x1B0
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x1B4
		::System::Single EBOBPBINAAO; // 0x1B8
		::System::Boolean INJJGMIGFFD; // 0x1BC
		::System::Byte _padding0[0x3];
		::System::Single EJNMGLJJEOO; // 0x1C0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void JFNMDEIMGPG(::ENEIHJJPNPI* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*, ::System::Int32))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_JFNMDEIMGPG_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDFGFICBOGJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void DJOAFCLBPEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_DJOAFCLBPEK_OFFSET))(this, a1);
		}

		::System::Void PGPLJHNOLML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_PGPLJHNOLML_OFFSET))(this, a1);
		}

		::System::Void DGKKOPDDDGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_DGKKOPDDDGE_OFFSET))(this);
		}

		::System::Void DIBLODAEIMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFGFICBOGJ_DIBLODAEIMH_OFFSET))(this);
		}

	};
