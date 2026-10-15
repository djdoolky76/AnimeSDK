#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define OOADCLKADJC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5A3B0)
#define OOADCLKADJC_GET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xBF5A390)
#define OOADCLKADJC_GET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xBF5A370)
#define OOADCLKADJC_GET_ID_OFFSET UNITYSDK_OFFSET(0xBF5A350)
#define OOADCLKADJC_SET_FUNTITLEDESC_OFFSET UNITYSDK_OFFSET(0xBF5A3A0)
#define OOADCLKADJC_SET_FUNTITLENAME_OFFSET UNITYSDK_OFFSET(0xBF5A380)
#define OOADCLKADJC_SET_ID_OFFSET UNITYSDK_OFFSET(0xBF5A360)

inline static constexpr unsigned int OOADCLKADJC_TypeDefinitionIndex = 63841;

	class OOADCLKADJC : public ::System::Object
	{
	public:
		::RPG::Client::TextID _FunTitleName_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _FunTitleDesc_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOADCLKADJC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOADCLKADJC_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOADCLKADJC_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_FunTitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OOADCLKADJC_GET_FUNTITLENAME_OFFSET))(this);
		}

		::System::Void set_FunTitleName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OOADCLKADJC_SET_FUNTITLENAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_FunTitleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OOADCLKADJC_GET_FUNTITLEDESC_OFFSET))(this);
		}

		::System::Void set_FunTitleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OOADCLKADJC_SET_FUNTITLEDESC_OFFSET))(this, a1);
		}

	};
