#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HAELNJMDBMN;
namespace System { class String; }

#define HAELNJMDBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C6B0)
#define HAELNJMDBMN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE7C450)

	class HAELNJMDBMN : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::RPG::Client::TextID KEGANNHEKHA; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MIIPHKBBMAF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAELNJMDBMN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HAELNJMDBMN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAELNJMDBMN*))((::PBYTE)hIl2Cpp + HAELNJMDBMN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
