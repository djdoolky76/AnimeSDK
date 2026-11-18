#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FCBAKPMKCHN_GMIFPOGAIBL;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FCBAKPMKCHN_IHPHAGGJHAH_HMJNPKIFFDB_OFFSET UNITYSDK_OFFSET(0x16178FB0)
#define FCBAKPMKCHN_IHPHAGGJHAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16178FA0)

inline static constexpr unsigned int FCBAKPMKCHN_IHPHAGGJHAH_TypeDefinitionIndex = 58380;

class FCBAKPMKCHN_IHPHAGGJHAH : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewsBubbleRowWidgetController* CDNABLKNPCE; // 0x10
	::FCBAKPMKCHN_GMIFPOGAIBL* FGBNBFHOKAA; // 0x18
	::System::Int32 GHFHFCPDNBG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_IHPHAGGJHAH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HMJNPKIFFDB()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_IHPHAGGJHAH_HMJNPKIFFDB_OFFSET))(this);
	}
};
