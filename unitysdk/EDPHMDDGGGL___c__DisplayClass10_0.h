#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AudioConfig; }
namespace System { class String; }

#define EDPHMDDGGGL___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13330020)
#define EDPHMDDGGGL___C__DISPLAYCLASS10_0___SETAUDIOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1334C190)

inline static constexpr unsigned int EDPHMDDGGGL___c__DisplayClass10_0_TypeDefinitionIndex = 60722;

	class EDPHMDDGGGL___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AudioConfig* audioConfig; // 0x10
		::System::String* groupName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetAudioState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS10_0___SETAUDIOSTATE_B__0_OFFSET))(this);
		}

	};
