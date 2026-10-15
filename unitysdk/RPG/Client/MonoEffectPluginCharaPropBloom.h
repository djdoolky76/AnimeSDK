#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xD7CFB40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7CE110)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7CE150)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropBloom_TypeDefinitionIndex = 69950;

	class MonoEffectPluginCharaPropBloom : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_BloomIntensity0; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single _BloomIntensity0; // 0x44
		::System::Boolean Toggle_BloomColor0; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::Color _BloomColor0; // 0x4C
		::System::Boolean Toggle_BloomIntensity1; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Single _BloomIntensity1; // 0x60
		::System::Boolean Toggle_BloomColor1; // 0x64
		::System::Byte _padding3[0x3];
		::UnityEngine::Color _BloomColor1; // 0x68
		::System::Boolean Toggle_BloomIntensity2; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single _BloomIntensity2; // 0x7C
		::System::Boolean Toggle_BloomColor2; // 0x80
		::System::Byte _padding5[0x3];
		::UnityEngine::Color _BloomColor2; // 0x84
		::System::Boolean Toggle_BloomIntensity3; // 0x94
		::System::Byte _padding6[0x3];
		::System::Single _BloomIntensity3; // 0x98
		::System::Boolean Toggle_BloomColor3; // 0x9C
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _BloomColor3; // 0xA0
		::System::Boolean Toggle_BloomIntensity4; // 0xB0
		::System::Byte _padding8[0x3];
		::System::Single _BloomIntensity4; // 0xB4
		::System::Boolean Toggle_BloomColor4; // 0xB8
		::System::Byte _padding9[0x3];
		::UnityEngine::Color _BloomColor4; // 0xBC
		::System::Boolean Toggle_BloomIntensity5; // 0xCC
		::System::Byte _padding10[0x3];
		::System::Single _BloomIntensity5; // 0xD0
		::System::Boolean Toggle_BloomColor5; // 0xD4
		::System::Byte _padding11[0x3];
		::UnityEngine::Color _BloomColor5; // 0xD8
		::System::Boolean Toggle_BloomIntensity6; // 0xE8
		::System::Byte _padding12[0x3];
		::System::Single _BloomIntensity6; // 0xEC
		::System::Boolean Toggle_BloomColor6; // 0xF0
		::System::Byte _padding13[0x3];
		::UnityEngine::Color _BloomColor6; // 0xF4
		::System::Boolean Toggle_BloomIntensity7; // 0x104
		::System::Byte _padding14[0x3];
		::System::Single _BloomIntensity7; // 0x108
		::System::Boolean Toggle_BloomColor7; // 0x10C
		::System::Byte _padding15[0x3];
		::UnityEngine::Color _BloomColor7; // 0x110
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

	};
}
