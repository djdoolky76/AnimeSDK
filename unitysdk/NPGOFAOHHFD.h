#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class EJJAGEEGEKA;
class HAFLBPOIAFO;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define NPGOFAOHHFD_AGLBICHFNEO_OFFSET UNITYSDK_OFFSET(0xC5ED280)
#define NPGOFAOHHFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC5ED0B0)
#define NPGOFAOHHFD_KAJOMOOAKPB_OFFSET UNITYSDK_OFFSET(0xC5ED180)
#define NPGOFAOHHFD_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xC5ED1E0)
#define NPGOFAOHHFD_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC5ECF90)
#define NPGOFAOHHFD__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC5ECFF0)
#define NPGOFAOHHFD__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xC5ED220)
#define NPGOFAOHHFD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC5ED100)

inline static constexpr unsigned int NPGOFAOHHFD_TypeDefinitionIndex = 74268;

	class NPGOFAOHHFD : public ::RPG::Client::UIController
	{
	public:
		::UnityEngine::UI::Text* LOKHAJAMNJN; // 0x190
		::EJJAGEEGEKA* APPIHABBCGK; // 0x198
		::HAFLBPOIAFO* GOAGFIODJIO; // 0x1A0
		::System::Boolean PNBGCCDEOLI; // 0x1A8
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		// static const ::System::String* BJHIKECAEDL; // 0x0
		::System::Void _ctor(::EJJAGEEGEKA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJJAGEEGEKA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGOFAOHHFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void KAJOMOOAKPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD_KAJOMOOAKPB_OFFSET))(this);
		}

		::System::String* AGLBICHFNEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGOFAOHHFD_AGLBICHFNEO_OFFSET))(this);
		}

	};
