#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class EJJAGEEGEKA;
class HAFLBPOIAFO;
namespace RPG::Client { class SimpleText; }
namespace System { class String; }

#define MLAPHGHFJEL_AGLBICHFNEO_OFFSET UNITYSDK_OFFSET(0xB99F1D0)
#define MLAPHGHFJEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB99EFE0)
#define MLAPHGHFJEL_KAJOMOOAKPB_OFFSET UNITYSDK_OFFSET(0xB99F0B0)
#define MLAPHGHFJEL_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xB99F130)
#define MLAPHGHFJEL_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB99EED0)
#define MLAPHGHFJEL__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB99EF20)
#define MLAPHGHFJEL__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xB99F170)
#define MLAPHGHFJEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB99F060)

inline static constexpr unsigned int MLAPHGHFJEL_TypeDefinitionIndex = 72192;

	class MLAPHGHFJEL : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::SimpleText* LOKHAJAMNJN; // 0x190
		::HAFLBPOIAFO* GOAGFIODJIO; // 0x198
		::EJJAGEEGEKA* APPIHABBCGK; // 0x1A0
		::System::Void _ctor(::EJJAGEEGEKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJJAGEEGEKA*))((::PBYTE)hIl2Cpp + MLAPHGHFJEL_CTOR_OFFSET))(this, a1);
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
