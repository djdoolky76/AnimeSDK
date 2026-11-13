#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace RPG::AvatarSystem { class AvatarExEidolon; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B0F9790)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FA0D0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0F9730)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1B0F91F0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET UNITYSDK_OFFSET(0x1B0F9C30)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATAREXRANKUPCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0x1B0F9FB0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1B0F9BD0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0x1B0F9A40)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0x1B0F9A90)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0x1B0F9240)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x1B0F9E80)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0x1B0F9B50)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankUpRedDotFilter_TypeDefinitionIndex = 68765;

	class AvatarRankUpRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, a1);
		}

		::System::Void _OnHeroBasicTypeChanged(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsAvatarCanRankUp(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET))(this, a1);
		}

		::System::Boolean _IsAvatarExRankUpCostEnough(::RPG::AvatarSystem::AvatarExEidolon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::AvatarExEidolon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATAREXRANKUPCOSTENOUGH_OFFSET))(this, a1);
		}

	};
}
