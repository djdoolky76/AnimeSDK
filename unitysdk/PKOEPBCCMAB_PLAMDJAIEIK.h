#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKOEPBCCMAB_PLAMDJAIEIK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x194B2AC0)
#define PKOEPBCCMAB_PLAMDJAIEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2AB0)

inline static constexpr unsigned int PKOEPBCCMAB_PLAMDJAIEIK_TypeDefinitionIndex = 88358;

class PKOEPBCCMAB_PLAMDJAIEIK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_PLAMDJAIEIK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_PLAMDJAIEIK_PNGOHNLELDJ_OFFSET))(this);
	}
};
