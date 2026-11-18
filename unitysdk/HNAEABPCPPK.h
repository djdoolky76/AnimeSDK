#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace MoleMole { class UIHandBookChangeWishlistTargetRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define HNAEABPCPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFF2E0)

inline static constexpr unsigned int HNAEABPCPPK_TypeDefinitionIndex = 46276;

class HNAEABPCPPK : public ::System::Object
{
public:
	::BPHGNMNLLHF* PCHMHIOFNMF; // 0x10
	::System::Action_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* LFEGDMPAHNI; // 0x18
	::System::Int32 IALBEFOCPAK; // 0x20
	::System::Boolean JAJKLCFPJKF; // 0x24
	::System::Boolean DGOEFCBPIAA; // 0x25
	::System::Byte _padding0[0x2];
	::System::Int32 OCNMLIJGEPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAEABPCPPK__CTOR_OFFSET))(this);
	}
};
