#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarExEidolon; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAREXEIDOLONHELPER_ACTIVEEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4AD860)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKCANACTIVEEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4AD730)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKHASANYACTIVATEDEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4AD560)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKHASEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4AD020)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_FILLACTIVATEDEXEIDOLONSTO_OFFSET UNITYSDK_OFFSET(0x1A4ACB30)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_FILLEXEIDOLONSTO_OFFSET UNITYSDK_OFFSET(0x1A4AC830)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_GETACTIVATABLEEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4AD350)
#define RPG_CLIENT_AVATAREXEIDOLONHELPER_GETEXEIDOLON_OFFSET UNITYSDK_OFFSET(0x1A4ACA60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExEidolonHelper_TypeDefinitionIndex = 64073;

	class AvatarExEidolonHelper : public ::System::Object
	{
	public:
		static ::System::Void FillExEidolonsTo(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* a2)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_FILLEXEIDOLONSTO_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::AvatarExEidolon* GetExEidolon(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_GETEXEIDOLON_OFFSET))(a1);
		}

		static ::System::Void FillActivatedExEidolonsTo(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* a2)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_FILLACTIVATEDEXEIDOLONSTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckHasExEidolon(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::AvatarExEidolon* a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::AvatarExEidolon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKHASEXEIDOLON_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::AvatarExEidolon* GetActivatableExEidolon(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_GETACTIVATABLEEXEIDOLON_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasAnyActivatedExEidolon(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKHASANYACTIVATEDEXEIDOLON_OFFSET))(a1);
		}

		static ::System::Boolean CheckCanActiveExEidolon(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::AvatarExEidolon* a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::AvatarExEidolon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_CHECKCANACTIVEEXEIDOLON_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* ActiveExEidolon(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::AvatarExEidolon* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::AvatarExEidolon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXEIDOLONHELPER_ACTIVEEXEIDOLON_OFFSET))(a1, a2);
		}

	};
}
