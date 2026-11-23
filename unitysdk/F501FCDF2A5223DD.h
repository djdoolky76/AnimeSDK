#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B524605D013E41E8/A3D445006D9E0E19.h"
#include "unitysdk/B524605D013E41E8/AF6C2997C38F39FA.h"
#include "unitysdk/B524605D013E41E8/BB5DA07419407F2F.h"
#include "unitysdk/B524605D013E41E8/F0D4586082101097.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define F501FCDF2A5223DD_B262284E6EB63474_OFFSET UNITYSDK_OFFSET(0x17A3720)
#define F501FCDF2A5223DD_B41280E5CF19B730_OFFSET UNITYSDK_OFFSET(0x17A2E40)
#define F501FCDF2A5223DD_BA7005181F4F6C7D_OFFSET UNITYSDK_OFFSET(0x17A3340)
#define F501FCDF2A5223DD_FF5C0E3E9A325C4A_OFFSET UNITYSDK_OFFSET(0x17A3610)
#define F501FCDF2A5223DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F501FCDF2A5223DD_TypeDefinitionIndex = 861;

class F501FCDF2A5223DD : public ::System::Object
{
public:
	::B524605D013E41E8::F0D4586082101097 A3C9DB952BDFEA51; // 0x10
	::B524605D013E41E8::A3D445006D9E0E19 EBCA04CAFF001C95; // 0x20
	::B524605D013E41E8::A3D445006D9E0E19 FC780BF781D0DAD4; // 0x30
	::FA1EDF0909FD0302::ED10F6CA1871D5DB FEE2504EE48B163F; // 0x40
	::B524605D013E41E8::AF6C2997C38F39FA B5F500551F55AAD6; // 0x50
	::B524605D013E41E8::BB5DA07419407F2F E5295655F6529436; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* B2A539200820B5DA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F501FCDF2A5223DD__CTOR_OFFSET))(this);
	}

	::System::Void FF5C0E3E9A325C4A(::System::String* F2AFD5AEF9D79076)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F501FCDF2A5223DD_FF5C0E3E9A325C4A_OFFSET))(this, F2AFD5AEF9D79076);
	}

	::System::Void B41280E5CF19B730(::System::String* E8E3BC517DF7BBEB, ::UnityEngine::Animator* FC1FCFDC7735D801, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* F474F69564C2089A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Animator*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>*))((::PBYTE)hIl2Cpp + F501FCDF2A5223DD_B41280E5CF19B730_OFFSET))(this, E8E3BC517DF7BBEB, FC1FCFDC7735D801, F474F69564C2089A);
	}

	::System::Void B262284E6EB63474(::System::String* F2AFD5AEF9D79076)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F501FCDF2A5223DD_B262284E6EB63474_OFFSET))(this, F2AFD5AEF9D79076);
	}

	::System::Void BA7005181F4F6C7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F501FCDF2A5223DD_BA7005181F4F6C7D_OFFSET))(this);
	}
};
