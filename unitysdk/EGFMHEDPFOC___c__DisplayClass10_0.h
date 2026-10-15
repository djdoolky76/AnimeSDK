#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class PLJNLHLGILF;
namespace System { class Tuple; }

#define EGFMHEDPFOC___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14517980)
#define EGFMHEDPFOC___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET UNITYSDK_OFFSET(0x14517E70)

inline static constexpr unsigned int EGFMHEDPFOC___c__DisplayClass10_0_TypeDefinitionIndex = 71597;

	class EGFMHEDPFOC___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::PLJNLHLGILF* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnUIBattleSetDamageTextStyle_b__0(::System::Tuple* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET))(this, a1);
		}

	};
