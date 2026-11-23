#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::Shared::Tools { class SerializableDetails; }
namespace PampelGames::Shared::Tools { class SerializableTextures; }
namespace PampelGames::Shared::Tools { class SerializableTreeInstance; }
namespace UnityEngine { class Terrain; }

#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_FLATTENARRAY_1_OFFSET UNITYSDK_OFFSET(0x3DBE880)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_FLATTENARRAY_OFFSET UNITYSDK_OFFSET(0x3DBE760)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_SERIALIZETERRAIN_OFFSET UNITYSDK_OFFSET(0x3DBE9A0)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_SETTERRAINDATA_OFFSET UNITYSDK_OFFSET(0x3DBEFF0)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_UNFLATTENARRAY_1_OFFSET UNITYSDK_OFFSET(0x3DBF590)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_UNFLATTENARRAY_OFFSET UNITYSDK_OFFSET(0x3DBF4A0)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBF680)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int SerializableTerrain_TypeDefinitionIndex = 21151;

	class SerializableTerrain : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* flatHeights; // 0x10
		::System::Int32 heightmapResolution; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::PampelGames::Shared::Tools::SerializableTextures*>* flatAlphaArrays; // 0x20
		::System::Int32 alphamapResolution; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::PampelGames::Shared::Tools::SerializableDetails*>* flatDetailsArrays; // 0x30
		::System::Int32 detailsResolution; // 0x38
		::System::Byte _padding2[0x4];
		::Il2CppArray<::PampelGames::Shared::Tools::SerializableTreeInstance*>* treeInstances; // 0x40

		static ::Il2CppArray<::System::Int32>* FlattenArray(::System::Object* F04B0AB19820A7CA)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_FLATTENARRAY_OFFSET))(F04B0AB19820A7CA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN__CTOR_OFFSET))(this);
		}

		::System::Void SetTerrainData(::UnityEngine::Terrain* E2696312240EF6B5, ::System::Boolean A47D03E3ADC5BF2B, ::System::Boolean A6816102F297F310, ::System::Boolean E5385583C3BDAAD0, ::System::Boolean F120A622E1CF8E2C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_SETTERRAINDATA_OFFSET))(this, E2696312240EF6B5, A47D03E3ADC5BF2B, A6816102F297F310, E5385583C3BDAAD0, F120A622E1CF8E2C);
		}

		static ::System::Object* UnflattenArray(::Il2CppArray<::System::Single>* F09A6474A44FEE23, ::System::Int32 FB0AEEDE6715CCF6, ::System::Int32 F4E82C9EC2FC8177)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_UNFLATTENARRAY_OFFSET))(F09A6474A44FEE23, FB0AEEDE6715CCF6, F4E82C9EC2FC8177);
		}

		static ::Il2CppArray<::System::Single>* FlattenArray_1(::System::Object* F04B0AB19820A7CA)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_FLATTENARRAY_1_OFFSET))(F04B0AB19820A7CA);
		}

		static ::System::Object* UnflattenArray_1(::Il2CppArray<::System::Int32>* F09A6474A44FEE23, ::System::Int32 FB0AEEDE6715CCF6, ::System::Int32 F4E82C9EC2FC8177)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_UNFLATTENARRAY_1_OFFSET))(F09A6474A44FEE23, FB0AEEDE6715CCF6, F4E82C9EC2FC8177);
		}

		::System::Void SerializeTerrain(::UnityEngine::Terrain* E2696312240EF6B5, ::System::Boolean A47D03E3ADC5BF2B, ::System::Boolean A6816102F297F310, ::System::Boolean E5385583C3BDAAD0, ::System::Boolean F120A622E1CF8E2C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_SERIALIZETERRAIN_OFFSET))(this, E2696312240EF6B5, A47D03E3ADC5BF2B, A6816102F297F310, E5385583C3BDAAD0, F120A622E1CF8E2C);
		}
	};
}
