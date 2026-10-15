#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGGBMGKNGC;
class HDIHFIHMEIB;
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define GEGGBMGKNGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAC5E0)
#define GEGGBMGKNGC_GBJNJBKJJLA_OFFSET UNITYSDK_OFFSET(0x1DDAB240)
#define GEGGBMGKNGC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1DD9F930)
#define GEGGBMGKNGC_GHPNJOFKEOM_OFFSET UNITYSDK_OFFSET(0x1DD9FA00)

	class GEGGBMGKNGC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::Google::Protobuf::IMessage*>*>* EMKEOAAMKOH; // 0x10
		::HDIHFIHMEIB* OPKAFIEEJCK; // 0x18
		static ::GEGGBMGKNGC** StaticGet_FLMODBLFAGD()
		{
			return (::GEGGBMGKNGC**)UnitySDK::FromName("", "GEGGBMGKNGC")->GetStaticField(0x5EEC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGGBMGKNGC_CTOR_OFFSET))(this);
		}

		static ::GEGGBMGKNGC* GGBLHEHJBDO()
		{
			return ((::GEGGBMGKNGC*(*)())((::PBYTE)hIl2Cpp + GEGGBMGKNGC_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::Client::NetPacket* GBJNJBKJJLA()
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGGBMGKNGC_GBJNJBKJJLA_OFFSET))(this);
		}

		::System::Void GHPNJOFKEOM(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + GEGGBMGKNGC_GHPNJOFKEOM_OFFSET))(this, a1);
		}

	};
