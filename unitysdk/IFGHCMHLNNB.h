#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IFGHCMHLNNB;
namespace System { class String; }

#define IFGHCMHLNNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEF940)
#define IFGHCMHLNNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEF6E0)

	class IFGHCMHLNNB : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::Il2CppArray<::System::UInt32>* BEEMLBPEGKH; // 0x18
		::RPG::Client::TextID AABNPBGMOFN; // 0x20
		::System::Single JONJKELPPAI; // 0x30
		::System::UInt32 PHFMCACHFIJ; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGHCMHLNNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFGHCMHLNNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFGHCMHLNNB*))((::PBYTE)hIl2Cpp + IFGHCMHLNNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
