#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }

#define A1000EB74FC21FDA_A52BBD19E40768FB_OFFSET UNITYSDK_OFFSET(0x1EF86E0)
#define A1000EB74FC21FDA_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EF84D0)
#define A1000EB74FC21FDA_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1EF8400)
#define A1000EB74FC21FDA_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1EF87E0)
#define A1000EB74FC21FDA_F3831258E0A03A7D_OFFSET UNITYSDK_OFFSET(0x1EF8760)
#define A1000EB74FC21FDA_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x1EF8670)
#define A1000EB74FC21FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A1000EB74FC21FDA_TypeDefinitionIndex = 7482;

class A1000EB74FC21FDA : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0x80
	::System::Action_1<::System::UInt32>* FCE433A2B55AAAB6; // 0x88
	::System::UInt32 A02AF894637B3DAE; // 0x90
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x98
	::ABC::UI::MonoLocalizedTmp* BD0E786114A8C00E; // 0xA0
	::UnityEngine::UI::Image* FC4070FAB33C7801; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA__CTOR_OFFSET))(this);
	}

	::System::Void A52BBD19E40768FB(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_A52BBD19E40768FB_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void F3831258E0A03A7D(::System::Boolean E06E26EF6B87E6D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_F3831258E0A03A7D_OFFSET))(this, E06E26EF6B87E6D8);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 B48C66E5FB2449C6, ::AD61077CFCBEFAEA E97E8D008427A296, ::System::Action_1<::System::UInt32>* B315A571C63B124A)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AD61077CFCBEFAEA, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_EC3033C0485522FB_OFFSET))(this, B48C66E5FB2449C6, E97E8D008427A296, B315A571C63B124A);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1000EB74FC21FDA_F52E921108621A5A_OFFSET))(this);
	}
};
