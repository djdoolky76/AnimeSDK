#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMIIHFGBHMG__CTOR_OFFSET UNITYSDK_OFFSET(0x16C67060)

inline static constexpr unsigned int LMIIHFGBHMG_TypeDefinitionIndex = 42360;

class LMIIHFGBHMG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_3<::MIKOMFIBMBN, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>*>* HHOLLLLLOIP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_3<::MIKOMFIBMBN, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>*>* DOLMNOIMOAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIIHFGBHMG__CTOR_OFFSET))(this);
	}
};
