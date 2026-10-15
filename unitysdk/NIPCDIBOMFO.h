#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
class DNFLPDDLIPA;
namespace System { class String; }

#define NIPCDIBOMFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC07090)
#define NIPCDIBOMFO_GET_ATTRIBUTELEVEL_OFFSET UNITYSDK_OFFSET(0xBC07060)
#define NIPCDIBOMFO_GET_MESHJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBC07080)
#define NIPCDIBOMFO_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xBC07070)

	class NIPCDIBOMFO : public ::System::Object
	{
	public:
		::System::String* _MeshJsonConfigPath_k__BackingField; // 0x10
		::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x18
		::System::UInt32 _AttributeLevel_k__BackingField; // 0x1C
		::System::Void _ctor(::DNFLPDDLIPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFLPDDLIPA*))((::PBYTE)hIl2Cpp + NIPCDIBOMFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttributeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPCDIBOMFO_GET_ATTRIBUTELEVEL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftPartType get_PartType()
		{
			return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPCDIBOMFO_GET_PARTTYPE_OFFSET))(this);
		}

		::System::String* get_MeshJsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPCDIBOMFO_GET_MESHJSONCONFIGPATH_OFFSET))(this);
		}

	};
