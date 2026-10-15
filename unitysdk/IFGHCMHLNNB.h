#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IFGHCMHLNNB;
namespace System { class String; }

#define IFGHCMHLNNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1880)
#define IFGHCMHLNNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC1620)

inline static constexpr unsigned int IFGHCMHLNNB_TypeDefinitionIndex = 12016;

	class IFGHCMHLNNB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEEMLBPEGKH; // 0x10
		::System::String* FBKAMIHGLFK; // 0x18
		::System::Single JONJKELPPAI; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::RPG::Client::TextID AABNPBGMOFN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGHCMHLNNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFGHCMHLNNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFGHCMHLNNB*))((::PBYTE)hIl2Cpp + IFGHCMHLNNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
