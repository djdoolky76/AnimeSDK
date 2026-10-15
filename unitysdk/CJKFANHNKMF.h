#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NetPacket; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJKFANHNKMF_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2103C0)
#define CJKFANHNKMF_EFAGHKBHDAK_OFFSET UNITYSDK_OFFSET(0xD2450E0)

inline static constexpr unsigned int CJKFANHNKMF_TypeDefinitionIndex = 59294;

	class CJKFANHNKMF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Object*>** StaticGet_IBBEEEIHJEJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Object*>**)UnitySDK::FromName("", "CJKFANHNKMF")->GetStaticField(0x344B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJKFANHNKMF_CCTOR_OFFSET))();
		}

		static ::System::Boolean EFAGHKBHDAK(::RPG::Client::NetPacket* a1, ::System::Object* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::NetPacket*, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + CJKFANHNKMF_EFAGHKBHDAK_OFFSET))(a1, a2, a3);
		}

	};
