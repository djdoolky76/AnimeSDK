#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define ALIIEMMEMAO_DGKJNNBMGOC_FFNEMFENGJN_OFFSET UNITYSDK_OFFSET(0x12D06530)
#define ALIIEMMEMAO_DGKJNNBMGOC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D06520)

inline static constexpr unsigned int ALIIEMMEMAO_DGKJNNBMGOC_TypeDefinitionIndex = 93264;

class ALIIEMMEMAO_DGKJNNBMGOC : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* HMDKKCKDOFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_DGKJNNBMGOC__CTOR_OFFSET))(this);
	}

	::System::Void FFNEMFENGJN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_DGKJNNBMGOC_FFNEMFENGJN_OFFSET))(this, KOIBHLHLMFC);
	}
};
