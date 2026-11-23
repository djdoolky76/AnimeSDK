#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace TMPro { class TextMeshProUGUI; }

#define ABC_UI_MONOTMPSIMPLEANIM_A394279F0714B85B_OFFSET UNITYSDK_OFFSET(0x2235020)
#define ABC_UI_MONOTMPSIMPLEANIM_AC2A18C882BE0FD9_OFFSET UNITYSDK_OFFSET(0x2234EF0)
#define ABC_UI_MONOTMPSIMPLEANIM_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define ABC_UI_MONOTMPSIMPLEANIM_B31D81384D2FB6D1_OFFSET UNITYSDK_OFFSET(0x2234E30)
#define ABC_UI_MONOTMPSIMPLEANIM_B4403F053E5D8723_OFFSET UNITYSDK_OFFSET(0x2234F80)
#define ABC_UI_MONOTMPSIMPLEANIM_B4F4F2542564A742_OFFSET UNITYSDK_OFFSET(0x2235190)
#define ABC_UI_MONOTMPSIMPLEANIM_E6D2EC58C9A33F06_OFFSET UNITYSDK_OFFSET(0x22351E0)
#define ABC_UI_MONOTMPSIMPLEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x22350B0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoTMPSimpleAnim_TypeDefinitionIndex = 9156;

	class MonoTMPSimpleAnim
	{
	public:
		::System::String* OffsetXCurveKey; // 0x28
		::System::Single OffsetXAmplitude; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* OffsetYCurveKey; // 0x38
		::System::Single OffsetYAmplitude; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* ScaleXCurveKey; // 0x48
		::System::Single ScaleXAmplitude; // 0x50
		::System::Byte _padding2[0x4];
		::System::String* ScaleYCurveKey; // 0x58
		::System::Single ScaleYAmplitude; // 0x60
		::UnityEngine::Vector2 ScaleAnchor; // 0x64
		::System::Single CharAnimTime; // 0x6C
		::System::Single CharAnimDelay; // 0x70
		::System::Boolean PlayAutomatically; // 0x74
		::System::Boolean IsLoop; // 0x75
		::System::Byte _padding3[0x2];
		::TMPro::TextMeshProUGUI* BE6E0D3D487E1FA8; // 0x78

		::TMPro::TextMeshProUGUI* E6D2EC58C9A33F06()
		{
			return ((::TMPro::TextMeshProUGUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_E6D2EC58C9A33F06_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* B31D81384D2FB6D1()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_B31D81384D2FB6D1_OFFSET))(this);
		}

		::System::Void B4403F053E5D8723(::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_B4403F053E5D8723_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_AD970635A668CF89_OFFSET))(this);
		}

		::System::Void A394279F0714B85B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_A394279F0714B85B_OFFSET))(this);
		}

		::System::Void AC2A18C882BE0FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_AC2A18C882BE0FD9_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM__CTOR_OFFSET))(this);
		}

		::System::Boolean B4F4F2542564A742()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSIMPLEANIM_B4F4F2542564A742_OFFSET))(this);
		}
	};
}
