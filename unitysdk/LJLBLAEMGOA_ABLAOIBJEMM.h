#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }

#define LJLBLAEMGOA_ABLAOIBJEMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB71D8A0)
#define LJLBLAEMGOA_ABLAOIBJEMM_GET_ISMATCH_OFFSET UNITYSDK_OFFSET(0xB71E8C0)
#define LJLBLAEMGOA_ABLAOIBJEMM_GET_LISTENERAVATARID_OFFSET UNITYSDK_OFFSET(0xB71E8F0)
#define LJLBLAEMGOA_ABLAOIBJEMM_GET_SOURCELISTENERID_OFFSET UNITYSDK_OFFSET(0xB71E900)
#define LJLBLAEMGOA_ABLAOIBJEMM_GET_SPEAKERAVATARID_OFFSET UNITYSDK_OFFSET(0xB71E8E0)
#define LJLBLAEMGOA_ABLAOIBJEMM_JHCJALOEFAI_OFFSET UNITYSDK_OFFSET(0xB71D940)
#define LJLBLAEMGOA_ABLAOIBJEMM_LCLOPJFJGAJ_OFFSET UNITYSDK_OFFSET(0xB71E540)
#define LJLBLAEMGOA_ABLAOIBJEMM_PECLIFCJABN_OFFSET UNITYSDK_OFFSET(0xB71E7F0)
#define LJLBLAEMGOA_ABLAOIBJEMM_SET_ISMATCH_OFFSET UNITYSDK_OFFSET(0xB71E8D0)

inline static constexpr unsigned int LJLBLAEMGOA_ABLAOIBJEMM_TypeDefinitionIndex = 68113;

	class LJLBLAEMGOA_ABLAOIBJEMM : public ::System::Object
	{
	public:
		::RPG::Client::AvatarVoiceArchiveEntry* CMHECECPBNN; // 0x10
		::System::UInt32 _ListenerAvatarID_k__BackingField; // 0x18
		::System::UInt32 _SpeakerAvatarID_k__BackingField; // 0x1C
		::System::Boolean _IsMatch_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _SourceListenerID_k__BackingField; // 0x24
		// static const ::System::String* JEKLPOHHONP; // 0x0
		::System::Void _ctor(::RPG::GameCore::AvatarLinkRow* a1, ::RPG::GameCore::GenderType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarLinkRow*, ::RPG::GameCore::GenderType, ::System::UInt32))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* JHCJALOEFAI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_JHCJALOEFAI_OFFSET))(this);
		}

		::System::Void LCLOPJFJGAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_LCLOPJFJGAJ_OFFSET))(this);
		}

		::System::String* PECLIFCJABN(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_PECLIFCJABN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_GET_ISMATCH_OFFSET))(this);
		}

		::System::Void set_IsMatch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_SET_ISMATCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpeakerAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_GET_SPEAKERAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_ListenerAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_GET_LISTENERAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_SourceListenerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM_GET_SOURCELISTENERID_OFFSET))(this);
		}

	};
