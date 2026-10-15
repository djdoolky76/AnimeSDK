#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class PLJNLHLGILF;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define EGFMHEDPFOC___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14514860)
#define EGFMHEDPFOC___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET UNITYSDK_OFFSET(0x14514D50)

inline static constexpr unsigned int EGFMHEDPFOC___c__DisplayClass10_0_TypeDefinitionIndex = 71596;

	class EGFMHEDPFOC___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::PLJNLHLGILF* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnUIBattleSetDamageTextStyle_b__0(::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET))(this, a1);
		}

	};
