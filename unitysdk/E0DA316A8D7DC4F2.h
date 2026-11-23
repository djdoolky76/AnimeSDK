#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class F16CB626F3B6DA0B;
class FDB617EE65D0B9A6;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define E0DA316A8D7DC4F2_B2009E2D348DF6BD_OFFSET UNITYSDK_OFFSET(0x22D7BE0)
#define E0DA316A8D7DC4F2_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x22D7950)
#define E0DA316A8D7DC4F2_F3004DC24C346802_OFFSET UNITYSDK_OFFSET(0x22D7CB0)
#define E0DA316A8D7DC4F2_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x22D79D0)
#define E0DA316A8D7DC4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x22C8360)

inline static constexpr unsigned int E0DA316A8D7DC4F2_TypeDefinitionIndex = 7224;

class E0DA316A8D7DC4F2 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::UI::Image* B5AE96FC2A425DE7; // 0x88
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x90
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0x98
	::FDB617EE65D0B9A6* E95D18F7FB40D99D; // 0xA0
	::F16CB626F3B6DA0B* B2B802667179D23D; // 0xA8
	::System::Action_2<::FDB617EE65D0B9A6*, ::UnityEngine::GameObject*>* E22F5ADE7C6A547A; // 0xB0

	::System::Void F3004DC24C346802(::FDB617EE65D0B9A6* BC51EDC0D0FAFF9D, ::F16CB626F3B6DA0B* B540E51E99697232, ::System::Action_2<::FDB617EE65D0B9A6*, ::UnityEngine::GameObject*>* A852CCBB9DD4E430)
	{
		return ((::System::Void(*)(::PVOID, ::FDB617EE65D0B9A6*, ::F16CB626F3B6DA0B*, ::System::Action_2<::FDB617EE65D0B9A6*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + E0DA316A8D7DC4F2_F3004DC24C346802_OFFSET))(this, BC51EDC0D0FAFF9D, B540E51E99697232, A852CCBB9DD4E430);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0DA316A8D7DC4F2_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0DA316A8D7DC4F2_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0DA316A8D7DC4F2__CTOR_OFFSET))(this);
	}

	::System::Void B2009E2D348DF6BD(::System::Boolean A4D3F13450FDBF6D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E0DA316A8D7DC4F2_B2009E2D348DF6BD_OFFSET))(this, A4D3F13450FDBF6D);
	}
};
