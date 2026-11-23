#pragma once
#include "unitysdk/unitysdk.h"

class B8A686045547AA7F;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define E7E680AB80078550_A1B739E4C3B1411A_OFFSET UNITYSDK_OFFSET(0x1921850)
#define E7E680AB80078550_A2DD6D74CF9E01AE_OFFSET UNITYSDK_OFFSET(0x21FB090)
#define E7E680AB80078550_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x21FAEF0)
#define E7E680AB80078550_BEACCB0D98B80C21_OFFSET UNITYSDK_OFFSET(0x16C5DE0)
#define E7E680AB80078550_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x21FB150)
#define E7E680AB80078550__CTOR_OFFSET UNITYSDK_OFFSET(0x21FB2C0)

inline static constexpr unsigned int E7E680AB80078550_TypeDefinitionIndex = 8982;

class E7E680AB80078550
{
public:
	::System::Int32 E249D1B75C587B26; // 0x90
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* B175D8D86F00EE78; // 0x98
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xA0
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0xA8
	::ABC::UI::MonoPrefabLoader* B822409C98B9C6EA; // 0xB0
	::ABC::UI::MonoPrefabLoader* ACE47F8258010B9C; // 0xB8
	::System::String* B489F91003BF8BC5; // 0xC0
	::System::String* A46513D6BE61DF60; // 0xC8
	::UnityEngine::GameObject* A4E90EC13B88D4BD; // 0xD0
	::UnityEngine::GameObject* BEDC50D30E7602AF; // 0xD8

	::ABC::UI::MonoButton* A1B739E4C3B1411A()
	{
		return ((::ABC::UI::MonoButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7E680AB80078550_A1B739E4C3B1411A_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::B8A686045547AA7F* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::B8A686045547AA7F*))((::PBYTE)hIl2Cpp + E7E680AB80078550_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Int32 BEACCB0D98B80C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E7E680AB80078550_BEACCB0D98B80C21_OFFSET))(this);
	}

	::System::Void A2DD6D74CF9E01AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7E680AB80078550_A2DD6D74CF9E01AE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7E680AB80078550__CTOR_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7E680AB80078550_B950FF9810FC6646_OFFSET))(this);
	}
};
