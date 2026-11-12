#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TextJoinItemRow; }
namespace System { class String; }

#define MHLJNIMJGKN_MIDJPFNPFPA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1FA170)
#define MHLJNIMJGKN_MIDJPFNPFPA_GET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0xC1FA7C0)
#define MHLJNIMJGKN_MIDJPFNPFPA_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0xC1FA440)
#define MHLJNIMJGKN_MIDJPFNPFPA_SET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0xC1FA7D0)

inline static constexpr unsigned int MHLJNIMJGKN_MIDJPFNPFPA_TypeDefinitionIndex = 76536;

	class MHLJNIMJGKN_MIDJPFNPFPA : public ::System::Object
	{
	public:
		::RPG::Client::TextID GEPFFDDHPAI; // 0x10
		::System::UInt32 _TextJoinItemId_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::TextJoinItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinItemRow*))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_MIDJPFNPFPA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TextJoinItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_MIDJPFNPFPA_GET_TEXTJOINITEMID_OFFSET))(this);
		}

		::System::Void set_TextJoinItemId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_MIDJPFNPFPA_SET_TEXTJOINITEMID_OFFSET))(this, a1);
		}

		::System::String* OACBGCFADMP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_MIDJPFNPFPA_OACBGCFADMP_OFFSET))(this);
		}

	};
