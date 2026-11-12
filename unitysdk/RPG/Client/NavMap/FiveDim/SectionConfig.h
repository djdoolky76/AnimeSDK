#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
class JBOLKLEHLME;
namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::GameCore { class FiveDimSectionConfig; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xE3DD470)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE3DD4F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_FOGID_OFFSET UNITYSDK_OFFSET(0xE3DD590)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_HASFOG_OFFSET UNITYSDK_OFFSET(0xE3D7EE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET UNITYSDK_OFFSET(0xE3DD520)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xE3DD500)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0xE3DD540)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0xE3DD5B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET UNITYSDK_OFFSET(0xE3DD5D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET UNITYSDK_OFFSET(0xE3DD5A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET UNITYSDK_OFFSET(0xE3DD530)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xE3DD510)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0xE3DD5C0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SectionConfig_TypeDefinitionIndex = 76818;

	class SectionConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Indices_k__BackingField; // 0x10
		::JBOLKLEHLME* __FogOfWarConfig_k__BackingField; // 0x18
		::System::Nullable_1<::System::UInt32> _FogID_k__BackingField; // 0x20
		::System::UInt32 _SectionID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::FiveDim::SectionConfig* Create(::RPG::GameCore::FiveDimSectionConfig* a1, ::JBOLKLEHLME* a2)
		{
			return ((::RPG::Client::NavMap::FiveDim::SectionConfig*(*)(::RPG::GameCore::FiveDimSectionConfig*, ::JBOLKLEHLME*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_Indices()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET))(this);
		}

		::System::Void set_Indices(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::MVector2>* get_SectionVertices()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONVERTICES_OFFSET))(this);
		}

		::System::Boolean get_HasFog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_HASFOG_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_FogID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_FOGID_OFFSET))(this);
		}

		::System::Void set_FogID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET))(this, a1);
		}

		::JBOLKLEHLME* get__FogOfWarConfig()
		{
			return ((::JBOLKLEHLME*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET))(this);
		}

		::System::Void set__FogOfWarConfig(::JBOLKLEHLME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOLKLEHLME*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetFogID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET))(this, a1);
		}

	};
}
