#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHCECAKHKJP;
class INIHHNDGOFP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define INIHHNDGOFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x164EF940)
#define INIHHNDGOFP_CTOR_OFFSET UNITYSDK_OFFSET(0x164EF8E0)
#define INIHHNDGOFP_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x164EF8F0)

	class INIHHNDGOFP : public ::System::Object
	{
	public:
		static ::INIHHNDGOFP** StaticGet_FMJPMFEDIJL()
		{
			return (::INIHHNDGOFP**)UnitySDK::FromName("", "INIHHNDGOFP")->GetStaticField(0x2DC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIHHNDGOFP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INIHHNDGOFP_CCTOR_OFFSET))();
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::GHCECAKHKJP* a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + INIHHNDGOFP_GETMODIFIER_OFFSET))(this, a1);
		}

	};
