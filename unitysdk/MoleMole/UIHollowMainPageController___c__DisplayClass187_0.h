#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAMLABJMKF_FAFOOLEJPJK.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0AE90)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x16F0AEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass187_0_TypeDefinitionIndex = 84616;

	class UIHollowMainPageController___c__DisplayClass187_0 : public ::System::Object
	{
	public:
		::FBAMLABJMKF_FAFOOLEJPJK pauseVideoReason; // 0x10
		::System::Boolean pause; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseBGVideo_b__0(::FBAMLABJMKF* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET))(this, chessboard);
		}
	};
}
