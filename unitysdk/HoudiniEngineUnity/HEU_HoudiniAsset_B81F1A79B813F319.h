#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_B81F1A79B813F319_FC3160B25BA0DD0D_OFFSET UNITYSDK_OFFSET(0x1C28010)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_B81F1A79B813F319__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_B81F1A79B813F319_TypeDefinitionIndex = 18027;

	class HEU_HoudiniAsset_B81F1A79B813F319 : public ::System::Object
	{
	public:
		::System::Boolean E82293C0814051A5; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_B81F1A79B813F319__CTOR_OFFSET))(this);
		}

		::System::Void FC3160B25BA0DD0D(::System::Boolean A1BF7F57B7B32978)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_B81F1A79B813F319_FC3160B25BA0DD0D_OFFSET))(this, A1BF7F57B7B32978);
		}
	};
}
