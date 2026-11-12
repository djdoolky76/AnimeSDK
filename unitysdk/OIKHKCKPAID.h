#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define OIKHKCKPAID_BDJBPILACCO_OFFSET UNITYSDK_OFFSET(0xC7965B0)
#define OIKHKCKPAID_CTOR_OFFSET UNITYSDK_OFFSET(0xC7963A0)
#define OIKHKCKPAID_PDOLCJIJING_OFFSET UNITYSDK_OFFSET(0xC796540)
#define OIKHKCKPAID_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC7963E0)
#define OIKHKCKPAID__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC796450)

inline static constexpr unsigned int OIKHKCKPAID_TypeDefinitionIndex = 73593;

	class OIKHKCKPAID : public ::RPG::Client::UIController
	{
	public:
		::UnityEngine::UI::Button* DFOACLIEFLB; // 0x190
		// static const ::System::String* GEJIJFFILEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKHKCKPAID_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKHKCKPAID_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKHKCKPAID__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void PDOLCJIJING()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKHKCKPAID_PDOLCJIJING_OFFSET))(this);
		}

		::System::Void BDJBPILACCO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIKHKCKPAID_BDJBPILACCO_OFFSET))(this, a1);
		}

	};
