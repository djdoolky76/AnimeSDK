#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/System/Object.h"
class AEMKMKIBMEE;
class GIDHOABFFFP;
class NNOALJAEMCG;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define RPG_AVATARSYSTEM_AVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0xC39C6E0)
#define RPG_AVATARSYSTEM_AVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC39D690)
#define RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC39CF40)
#define RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC39C680)
#define RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0xC39C6C0)
#define RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC39C6A0)
#define RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC39C740)
#define RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0xC39C6D0)
#define RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC39C6B0)
#define RPG_AVATARSYSTEM_AVATAR__INCREASEVERSION_OFFSET UNITYSDK_OFFSET(0xC39CEE0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 51891;

	class Avatar : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::AEMKMKIBMEE*>* _Components; // 0x10
		::NNOALJAEMCG* _Profile_k__BackingField; // 0x18
		::AHHNGJGLOKA _Identifier_k__BackingField; // 0x20
		::System::UInt32 _Version_k__BackingField; // 0x38
		::System::Void _ctor(::AHHNGJGLOKA a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::AEMKMKIBMEE*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::AEMKMKIBMEE*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_CTOR_OFFSET))(this, a1, a2);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET))(this, a1);
		}

		::NNOALJAEMCG* get_Profile()
		{
			return ((::NNOALJAEMCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_Profile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET))(this, a1);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_DISPOSE_OFFSET))(this);
		}

		::System::Void _IncreaseVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR__INCREASEVERSION_OFFSET))(this);
		}

	};
}
