#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole { class IVideoPlayer; }
namespace System { template <typename T> class Action_1; }

#define PNJDGHBEMLK_MNBFDPLFMJD_CDMDEHFODDN_OFFSET UNITYSDK_OFFSET(0x1BF33D80)
#define PNJDGHBEMLK_MNBFDPLFMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF33D70)

inline static constexpr unsigned int PNJDGHBEMLK_MNBFDPLFMJD_TypeDefinitionIndex = 64963;

class PNJDGHBEMLK_MNBFDPLFMJD : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* CDIHEFKFLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MNBFDPLFMJD__CTOR_OFFSET))(this);
	}

	::System::Void CDMDEHFODDN(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MNBFDPLFMJD_CDMDEHFODDN_OFFSET))(this, JGPIGFLIDOJ);
	}
};
