#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define EE9A2E231B5F30EC_A52BBD19E40768FB_OFFSET UNITYSDK_OFFSET(0x1EE62C0)
#define EE9A2E231B5F30EC_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EE6020)
#define EE9A2E231B5F30EC_A73F044922F86133_OFFSET UNITYSDK_OFFSET(0x1EE63C0)
#define EE9A2E231B5F30EC_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1EE5F50)
#define EE9A2E231B5F30EC_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1EE6460)
#define EE9A2E231B5F30EC_F3831258E0A03A7D_OFFSET UNITYSDK_OFFSET(0x1EE6340)
#define EE9A2E231B5F30EC_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x1EE6250)
#define EE9A2E231B5F30EC__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int EE9A2E231B5F30EC_TypeDefinitionIndex = 7416;

class EE9A2E231B5F30EC : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x80
	::UnityEngine::UI::Image* E2D8826507586D94; // 0x88
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0x90
	::System::Action_1<::System::UInt32>* FCE433A2B55AAAB6; // 0x98
	::System::UInt32 A02AF894637B3DAE; // 0xA0
	::System::Byte _padding0[0x4];
	::UnityEngine::UI::Image* FC4070FAB33C7801; // 0xA8
	::UnityEngine::UI::SmoothMask* F417E531A864D5E8; // 0xB0
	::UnityEngine::UI::SmoothMask* FF0DA5B6B0C57F3A; // 0xB8

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 B48C66E5FB2449C6, ::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::System::Action_1<::System::UInt32>* B315A571C63B124A)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::E865F6F8B8B44C1E, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_EC3033C0485522FB_OFFSET))(this, B48C66E5FB2449C6, E7102EB4CD1D28DD, B315A571C63B124A);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void F3831258E0A03A7D(::System::Boolean E06E26EF6B87E6D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_F3831258E0A03A7D_OFFSET))(this, E06E26EF6B87E6D8);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_F52E921108621A5A_OFFSET))(this);
	}

	::System::Void A52BBD19E40768FB(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_A52BBD19E40768FB_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC__CTOR_OFFSET))(this);
	}

	::System::Void A73F044922F86133(::System::Boolean EEF7C5726C67C6DA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EE9A2E231B5F30EC_A73F044922F86133_OFFSET))(this, EEF7C5726C67C6DA);
	}
};
