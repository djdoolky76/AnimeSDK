#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LNBJLPOJGDI_FMLDMLLNIJL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16C68950)
#define LNBJLPOJGDI_FMLDMLLNIJL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C68940)

inline static constexpr unsigned int LNBJLPOJGDI_FMLDMLLNIJL_TypeDefinitionIndex = 43183;

class LNBJLPOJGDI_FMLDMLLNIJL : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_FMLDMLLNIJL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_FMLDMLLNIJL_PNGOHNLELDJ_OFFSET))(this);
	}
};
