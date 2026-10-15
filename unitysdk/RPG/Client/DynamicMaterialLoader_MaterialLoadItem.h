#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFD3A0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_GET_MATINST_OFFSET UNITYSDK_OFFSET(0xCCFD390)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xCCFD2B0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xCCFD330)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_MaterialLoadItem_TypeDefinitionIndex = 68409;

	class DynamicMaterialLoader_MaterialLoadItem : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::UnityEngine::Material* _MatInst; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_CTOR_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_PEECNCABGFD_OFFSET))(this);
		}

		::UnityEngine::Material* get_MatInst()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_MATERIALLOADITEM_GET_MATINST_OFFSET))(this);
		}

	};
}
