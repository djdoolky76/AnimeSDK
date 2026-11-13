#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class BAKEHCJGODI;
class GIDHOABFFFP;
class NNOALJAEMCG;
namespace RPG::AvatarSystem { class Avatar; }

#define RPG_CLIENT_PREVIEWAVATARPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x19BE5680)
#define RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BE5850)
#define RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x19BE5780)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19BE5500)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x19BE5580)
#define RPG_CLIENT_PREVIEWAVATARPROXY_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x19BE5710)
#define RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x19BE57F0)
#define RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0x19BE55E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreviewAvatarProxy_TypeDefinitionIndex = 64129;

	class PreviewAvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Avatar* _Origin; // 0x10
		::BAKEHCJGODI* _Pool; // 0x18
		::System::Boolean _Disposed; // 0x20
		::System::Void _ctor(::RPG::AvatarSystem::Avatar* a1, ::BAKEHCJGODI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::BAKEHCJGODI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_CTOR_OFFSET))(this, a1, a2);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Reset(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _EnsureNotDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET))(this);
		}

	};
}
