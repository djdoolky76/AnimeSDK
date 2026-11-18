#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC3E40)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_1__RUN_B__0_OFFSET UNITYSDK_OFFSET(0xFFC3E50)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction___c__DisplayClass7_1_TypeDefinitionIndex = 63240;

	template <typename T>
	class TextureSheetConfigAction___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean loop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0(::MoleMole::IVideoPlayer* v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_1__RUN_B__0_OFFSET))(this, v);
		}
	};
}
