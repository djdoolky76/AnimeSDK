#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Timestamp; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20909770)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x209097B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x209097C0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp___c_TypeDefinitionIndex = 36684;

	class Timestamp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* __cctor_b__45_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__45_0_OFFSET))(this);
		}

	};
}
