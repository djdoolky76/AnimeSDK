#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class HGKJLOMFCAG;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIKNOONFCFG_CTOR_OFFSET UNITYSDK_OFFSET(0xEBAFC50)
#define AIKNOONFCFG_DJLGMANPEHB_OFFSET UNITYSDK_OFFSET(0xEBAF980)
#define AIKNOONFCFG_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xEBAF740)
#define AIKNOONFCFG_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xEBAF160)
#define AIKNOONFCFG_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xEBAF180)
#define AIKNOONFCFG_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xEBAF140)
#define AIKNOONFCFG_GOBDNGEODEB_OFFSET UNITYSDK_OFFSET(0xEBAF1A0)
#define AIKNOONFCFG_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xEBAF1F0)
#define AIKNOONFCFG_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xEBAF9C0)
#define AIKNOONFCFG_NPIKCBCEBCD_OFFSET UNITYSDK_OFFSET(0xEBAFA20)
#define AIKNOONFCFG_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xEBAF170)
#define AIKNOONFCFG_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xEBAF190)
#define AIKNOONFCFG_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xEBAF150)

inline static constexpr unsigned int AIKNOONFCFG_TypeDefinitionIndex = 51927;

	class AIKNOONFCFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KGHMBCLFFLG*>* KDKIPLIDEIM; // 0x10
		::HGKJLOMFCAG* _ExtraAdditionProvider_k__BackingField; // 0x18
		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x20
		::System::UInt32 _Version_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIKNOONFCFG_SET_VERSION_OFFSET))(this, a1);
		}

		::HGKJLOMFCAG* get_ExtraAdditionProvider()
		{
			return ((::HGKJLOMFCAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
		}

		::System::Void set_ExtraAdditionProvider(::HGKJLOMFCAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKJLOMFCAG*))((::PBYTE)hIl2Cpp + AIKNOONFCFG_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + AIKNOONFCFG_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
		}

		::System::Int32 GOBDNGEODEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_GOBDNGEODEB_OFFSET))(this);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + AIKNOONFCFG_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + AIKNOONFCFG_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* DJLGMANPEHB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKNOONFCFG_DJLGMANPEHB_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + AIKNOONFCFG_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::KGHMBCLFFLG* NPIKCBCEBCD(::RPG::GameCore::RelicType a1)
		{
			return ((::KGHMBCLFFLG*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + AIKNOONFCFG_NPIKCBCEBCD_OFFSET))(this, a1);
		}

	};
