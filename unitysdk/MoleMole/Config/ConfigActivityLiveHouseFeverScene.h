#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNMGFDGBNPB.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSEFEVERSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x174F4260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseFeverScene_TypeDefinitionIndex = 91639;

	class ConfigActivityLiveHouseFeverScene : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* decoLightEffectList; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* audioMaterialList; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* lambEffectList; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* liveLightEffectList; // 0x70
		::CNMGFDGBNPB feverLightBeam; // 0x78
		::System::Byte _padding0[0x4];
		::System::String* feverLightBeamScreen; // 0x80
		::System::String* feverLightKey; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSEFEVERSCENE__CTOR_OFFSET))(this);
		}
	};
}
