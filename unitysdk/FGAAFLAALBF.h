#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FGAAFLAALBF_CTOR_OFFSET UNITYSDK_OFFSET(0x18A76CA0)
#define FGAAFLAALBF_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x18A76C00)
#define FGAAFLAALBF_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18A76BE0)
#define FGAAFLAALBF_GET_BOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x18A76C20)
#define FGAAFLAALBF_GET_COMMONTALK_OFFSET UNITYSDK_OFFSET(0x18A76C60)
#define FGAAFLAALBF_GET_STARTTALK_OFFSET UNITYSDK_OFFSET(0x18A76C80)
#define FGAAFLAALBF_GET_VICTORYTALK_OFFSET UNITYSDK_OFFSET(0x18A76C40)
#define FGAAFLAALBF_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x18A76C10)
#define FGAAFLAALBF_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18A76BF0)
#define FGAAFLAALBF_SET_BOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x18A76C30)
#define FGAAFLAALBF_SET_COMMONTALK_OFFSET UNITYSDK_OFFSET(0x18A76C70)
#define FGAAFLAALBF_SET_STARTTALK_OFFSET UNITYSDK_OFFSET(0x18A76C90)
#define FGAAFLAALBF_SET_VICTORYTALK_OFFSET UNITYSDK_OFFSET(0x18A76C50)

inline static constexpr unsigned int FGAAFLAALBF_TypeDefinitionIndex = 65282;

	class FGAAFLAALBF : public ::System::Object
	{
	public:
		::System::String* _BoardAvatarIconPath_k__BackingField; // 0x10
		::System::String* _AvatarIconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _StartTalk_k__BackingField; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _VictoryTalk_k__BackingField; // 0x38
		::RPG::Client::TextID _CommonTalk_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_AVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_AvatarIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_AVATARICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BoardAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_BOARDAVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_BoardAvatarIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_BOARDAVATARICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_VictoryTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_VICTORYTALK_OFFSET))(this);
		}

		::System::Void set_VictoryTalk(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_VICTORYTALK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CommonTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_COMMONTALK_OFFSET))(this);
		}

		::System::Void set_CommonTalk(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_COMMONTALK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StartTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_GET_STARTTALK_OFFSET))(this);
		}

		::System::Void set_StartTalk(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FGAAFLAALBF_SET_STARTTALK_OFFSET))(this, a1);
		}

	};
