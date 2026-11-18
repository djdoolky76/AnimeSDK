#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDAHJPLCIFN_FPHEEHPBPOE;
namespace MoleMole { class UIInputFieldEx_NNDJGHLENBK; }
namespace System { class String; }

#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK_BBPGOMJAGOO_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x187EA740)
#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK_BBPGOMJAGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x187EA730)

namespace MoleMole
{
	inline static constexpr unsigned int UIInputFieldEx_NNDJGHLENBK_BBPGOMJAGOO_TypeDefinitionIndex = 55481;

	class UIInputFieldEx_NNDJGHLENBK_BBPGOMJAGOO : public ::System::Object
	{
	public:
		::MoleMole::UIInputFieldEx_NNDJGHLENBK* KLHPEBKNIFB; // 0x10
		::JDAHJPLCIFN_FPHEEHPBPOE* CAJGAEJKKHJ; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK_BBPGOMJAGOO__CTOR_OFFSET))(this);
		}

		::System::Char LJHDGNAEDIC(::System::String* FCCLIEJAKLI, ::System::Int32 LPBEAEAPIPN, ::System::Char EIGJAFOJEBB)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK_BBPGOMJAGOO_LJHDGNAEDIC_OFFSET))(this, FCCLIEJAKLI, LPBEAEAPIPN, EIGJAFOJEBB);
		}
	};
}
