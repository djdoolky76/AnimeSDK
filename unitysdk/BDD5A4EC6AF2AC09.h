#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define BDD5A4EC6AF2AC09_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x17337A0)
#define BDD5A4EC6AF2AC09_AF71426D88D2F086_OFFSET UNITYSDK_OFFSET(0x1733B50)
#define BDD5A4EC6AF2AC09_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x17336D0)
#define BDD5A4EC6AF2AC09_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1733BC0)
#define BDD5A4EC6AF2AC09_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1733A30)
#define BDD5A4EC6AF2AC09_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1733A80)
#define BDD5A4EC6AF2AC09__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BDD5A4EC6AF2AC09_TypeDefinitionIndex = 725;

class BDD5A4EC6AF2AC09 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 FDCEB054F0B9D314; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* B4A1DA3981F7C6E1; // 0x88
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x90
	::UnityEngine::UI::Image* BD70B38BA5D9CE1C; // 0x98
	::ABC::UI::MonoButton* BD688765379D553D; // 0xA0
	::UnityEngine::Animator* A28005010C1E9111; // 0xA8
	::ABC::UI::MonoLocalizedTmp* BF1114CC592A9EF1; // 0xB0
	::ABC::UI::MonoLocalizedTmp* E7682EEB8226CE19; // 0xB8
	::ABC::UI::MonoButton* E17807F5C64B7C63; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 FC4D5D54217FDB3E, ::System::Action_1<::System::UInt32>* B4BB332E16D77C6D)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_EC3033C0485522FB_OFFSET))(this, FC4D5D54217FDB3E, B4BB332E16D77C6D);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void AF71426D88D2F086()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDD5A4EC6AF2AC09_AF71426D88D2F086_OFFSET))(this);
	}
};
