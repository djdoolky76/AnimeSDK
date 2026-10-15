#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::UI { class Text; }

#define DEBUGINFORENDERINGDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x12666C90)

inline static constexpr unsigned int DebugInfoRenderingDetail_TypeDefinitionIndex = 47582;

	class DebugInfoRenderingDetail : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean CADPOAAKDIK; // 0x18
		::System::Boolean FBEAIHNNHNJ; // 0x19
		::System::Boolean CHLOFFEMIJJ; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single GKEFCADOBBH; // 0x1C
		::System::Single FFOJGGOBKCF; // 0x20
		::System::Single BHNMPCDFDAG; // 0x24
		::UnityEngine::UI::Text* IOOKHJCLAGF; // 0x28
		::UnityEngine::UI::Text* FDMBMMDAOHE; // 0x30
		static ::System::Int32* StaticGet_showMode()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DebugInfoRenderingDetail")->GetStaticField(0x15D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGINFORENDERINGDETAIL_CTOR_OFFSET))(this);
		}

	};
