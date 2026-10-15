#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class GJABEBPIGDN;
class HGKJLOMFCAG;
class NNOALJAEMCG;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define PGENPMICILM_CBGAPNACLEB_OFFSET UNITYSDK_OFFSET(0xC217E50)
#define PGENPMICILM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2180B0)
#define PGENPMICILM_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC218020)
#define PGENPMICILM_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xC217E10)
#define PGENPMICILM_GET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0xC217E30)
#define PGENPMICILM_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xC217DF0)
#define PGENPMICILM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC217DD0)
#define PGENPMICILM_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC217FC0)
#define PGENPMICILM_OFFDHBBELHJ_OFFSET UNITYSDK_OFFSET(0xC217EA0)
#define PGENPMICILM_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xC217E20)
#define PGENPMICILM_SET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0xC217E40)
#define PGENPMICILM_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xC217E00)
#define PGENPMICILM_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC217DE0)

inline static constexpr unsigned int PGENPMICILM_TypeDefinitionIndex = 51912;

	class PGENPMICILM : public ::System::Object
	{
	public:
		::GJABEBPIGDN* _LightCone_k__BackingField; // 0x10
		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x18
		::HGKJLOMFCAG* _ExtraAdditionProvider_k__BackingField; // 0x20
		::System::UInt32 _Version_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGENPMICILM_SET_VERSION_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PGENPMICILM_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
		}

		::HGKJLOMFCAG* get_ExtraAdditionProvider()
		{
			return ((::HGKJLOMFCAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
		}

		::System::Void set_ExtraAdditionProvider(::HGKJLOMFCAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKJLOMFCAG*))((::PBYTE)hIl2Cpp + PGENPMICILM_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, a1);
		}

		::GJABEBPIGDN* get_LightCone()
		{
			return ((::GJABEBPIGDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_GET_LIGHTCONE_OFFSET))(this);
		}

		::System::Void set_LightCone(::GJABEBPIGDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + PGENPMICILM_SET_LIGHTCONE_OFFSET))(this, a1);
		}

		::System::Boolean CBGAPNACLEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_CBGAPNACLEB_OFFSET))(this);
		}

		::System::UInt32 OFFDHBBELHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGENPMICILM_OFFDHBBELHJ_OFFSET))(this);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + PGENPMICILM_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + PGENPMICILM_EXPORTPROFILE_OFFSET))(this, a1);
		}

	};
