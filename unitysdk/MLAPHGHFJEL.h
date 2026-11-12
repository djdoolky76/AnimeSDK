#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ElationTimeTotalDamageToastType.h"
class EJJAGEEGEKA;
class HAFLBPOIAFO;
namespace RPG::Client { class SimpleText; }
namespace System { class String; }

#define MLAPHGHFJEL_AGLBICHFNEO_OFFSET UNITYSDK_OFFSET(0xC2600B0)
#define MLAPHGHFJEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC25FEF0)
#define MLAPHGHFJEL_KAJOMOOAKPB_OFFSET UNITYSDK_OFFSET(0xC25FF90)
#define MLAPHGHFJEL_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xC260010)
#define MLAPHGHFJEL_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC25FDD0)
#define MLAPHGHFJEL__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC25FE30)
#define MLAPHGHFJEL__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xC260050)
#define MLAPHGHFJEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC25FF40)

inline static constexpr unsigned int MLAPHGHFJEL_TypeDefinitionIndex = 74255;

	class MLAPHGHFJEL : public ::RPG::Client::UIController
	{
	public:
		::EJJAGEEGEKA* APPIHABBCGK; // 0x190
		::HAFLBPOIAFO* GOAGFIODJIO; // 0x198
		::RPG::Client::SimpleText* LOKHAJAMNJN; // 0x1A0
		::RPG::GameCore::ElationTimeTotalDamageToastType ILNGEJOCBCB; // 0x1A8
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		// static const ::System::String* DGFLNMFLGJD; // 0x0
		::System::Void _ctor(::RPG::GameCore::ElationTimeTotalDamageToastType a1, ::EJJAGEEGEKA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeTotalDamageToastType, ::EJJAGEEGEKA*))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void KAJOMOOAKPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_KAJOMOOAKPB_OFFSET))(this);
		}

		::System::String* AGLBICHFNEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_AGLBICHFNEO_OFFSET))(this);
		}

	};
