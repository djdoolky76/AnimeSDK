#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A2D20FF4C6458514.h"
#include "unitysdk/UnityEngine/A4B9F3BBF3832CE4.h"
#include "unitysdk/UnityEngine/B7D5DFCD470A6488.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/ED891C52113A48F2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_F92C7E464F634571_A4DEAAC00EC10853_OFFSET UNITYSDK_OFFSET(0x4211930)
#define UNITYENGINE_F92C7E464F634571_B60B15E48ACFAAF5_OFFSET UNITYSDK_OFFSET(0x4211730)
#define UNITYENGINE_F92C7E464F634571_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x4211A30)

namespace UnityEngine
{
	inline static constexpr unsigned int F92C7E464F634571_TypeDefinitionIndex = 21347;

	struct alignas(8) F92C7E464F634571
	{
		::UnityEngine::Font* A9DF91DEA4DC25D8; // 0x10
		::UnityEngine::E46B881AA2636190 A5FA8CDBD22AC52F; // 0x18
		::System::Int32 BCC895BD1E099364; // 0x28
		::System::Single E758433B0A66743B; // 0x2C
		::System::Boolean F75F131F9D744EBF; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single B0787EFFB547EF53; // 0x34
		::UnityEngine::A2D20FF4C6458514 F4BC3724053D0CEF; // 0x38
		::UnityEngine::B7D5DFCD470A6488 A928BE74BFEAC8D8; // 0x3C
		::System::Boolean F90CF51810ACF9A4; // 0x40
		::System::Boolean E6513F1DBB9390FB; // 0x41
		::System::Byte _padding1[0x2];
		::System::Int32 EAB514F47C12B9A0; // 0x44
		::System::Int32 A7CBDD6CF505E616; // 0x48
		::System::Boolean F8C66739346D4477; // 0x4C
		::System::Byte _padding2[0x3];
		::UnityEngine::ED891C52113A48F2 ECCF376D03EDB867; // 0x50
		::UnityEngine::A4B9F3BBF3832CE4 A8B2542BF6286B92; // 0x54
		::UnityEngine::Vector2 B6B16D50CCDDF9C0; // 0x58
		::UnityEngine::Vector2 FAB61B52401DA4B3; // 0x60
		::System::Boolean E1D697C2CDCF0AD9; // 0x68

		::System::Boolean B60B15E48ACFAAF5(::UnityEngine::E46B881AA2636190 A11D4EC92205DAEE, ::UnityEngine::E46B881AA2636190 F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_F92C7E464F634571_B60B15E48ACFAAF5_OFFSET))(this, A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		::System::Boolean A4DEAAC00EC10853(::UnityEngine::Vector2 A11D4EC92205DAEE, ::UnityEngine::Vector2 F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_F92C7E464F634571_A4DEAAC00EC10853_OFFSET))(this, A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		/*
		::System::Boolean E7483E7CBF06BCFD(::UnityEngine::F92C7E464F634571 BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::F92C7E464F634571))((::PBYTE)hIl2Cpp + UNITYENGINE_F92C7E464F634571_E7483E7CBF06BCFD_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
