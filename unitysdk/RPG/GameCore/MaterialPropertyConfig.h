#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MaterialPropertyType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MATERIALPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85E330)
#define RPG_GAMECORE_MATERIALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D85E0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialPropertyConfig_TypeDefinitionIndex = 16509;

	class MaterialPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MaterialPropertyType PropertyType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PropertyName; // 0x18
		::System::Single FloatValue; // 0x20
		::RPG::MVector3 Vector3Value; // 0x24
		::BMAGJGLPIIF Vector4Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MaterialPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MaterialPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
