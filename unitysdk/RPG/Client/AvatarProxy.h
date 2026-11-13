#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLFCEMNDFDM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class GIDHOABFFFP;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_AVATARPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F41D0)
#define RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0F4400)
#define RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x1B0F42C0)
#define RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B0F3F20)
#define RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B0F40A0)
#define RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1B0F4230)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarProxy_TypeDefinitionIndex = 64156;

	class AvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Source; // 0x10
		::MLFCEMNDFDM _InstanceIdentifier; // 0x18
		::System::Void _ctor(::MLFCEMNDFDM a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLFCEMNDFDM, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_CTOR_OFFSET))(this, a1, a2);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void SetSource(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET))(this);
		}

	};
}
