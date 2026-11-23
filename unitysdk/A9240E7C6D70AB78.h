#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACD25CE7CC4CA6BD.h"
#include "unitysdk/B1EC793A750AFC1E.h"

class B4DE92E27B624B93;
class F83A4119D9D8C3D8;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define A9240E7C6D70AB78_A1B6B018DAE0C291_OFFSET UNITYSDK_OFFSET(0x1B2FE00)
#define A9240E7C6D70AB78_B2D470A1DD25834E_OFFSET UNITYSDK_OFFSET(0x1B2F430)
#define A9240E7C6D70AB78_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x1B30A40)
#define A9240E7C6D70AB78_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1B30810)
#define A9240E7C6D70AB78_F7C09741042E36F0_OFFSET UNITYSDK_OFFSET(0x1B30C10)
#define A9240E7C6D70AB78_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1B2F180)
#define A9240E7C6D70AB78_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1B2F7C0)
#define A9240E7C6D70AB78__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30D50)

inline static constexpr unsigned int A9240E7C6D70AB78_TypeDefinitionIndex = 2153;

class A9240E7C6D70AB78 : public ::ACD25CE7CC4CA6BD
{
public:
	::ABC::UI::MonoButton* F7F2709ADAAB9A0C; // 0xB0
	::ABC::UI::MonoButton* AD6DE1E3632ECED6; // 0xB8
	::ABC::UI::MonoButton* FBF87AE1182F016E; // 0xC0
	::ABC::UI::MonoButton* BA80AD81A2A955FD; // 0xC8
	::ABC::UI::MonoLocalizedTmp* ED5CF5574A2EF3E0; // 0xD0
	::ABC::UI::MonoLocalizedTmp* F2B2884DE794F3CC; // 0xD8
	::ABC::UI::MonoLocalizedTmp* ED610DA80C194BDA; // 0xE0
	::ABC::UI::MonoLocalizedTmp* B8A4F9660885590D; // 0xE8
	::ABC::UI::MonoLocalizedTmp* A2AD8704A0367FFB; // 0xF0
	::UnityEngine::Transform* B9AA2EAAF034A9CA; // 0xF8
	::ABC::UI::MonoPrefabLoader* A24B1527147D133E; // 0x100
	::ABC::UI::MonoPrefabLoader* B6A90D8FD15E2984; // 0x108
	::B1EC793A750AFC1E B6A23B06D9C818D0; // 0x110
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::B4DE92E27B624B93*>* E3E0D3115DA0C265; // 0x118
	::System::Collections::Generic::List_1<::ABC::UI::MonoItemIcon*>* E071E38F760F330D; // 0x120

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void A1B6B018DAE0C291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_A1B6B018DAE0C291_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::F83A4119D9D8C3D8* B54E033D915EE9EE)
	{
		return ((::System::Void(*)(::PVOID, ::F83A4119D9D8C3D8*))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_EC3033C0485522FB_OFFSET))(this, B54E033D915EE9EE);
	}

	::System::Void B2D470A1DD25834E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_B2D470A1DD25834E_OFFSET))(this);
	}

	::System::Void F7C09741042E36F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78_F7C09741042E36F0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9240E7C6D70AB78__CTOR_OFFSET))(this);
	}
};
