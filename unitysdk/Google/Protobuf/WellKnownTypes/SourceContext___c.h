#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class SourceContext; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B0F10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B0F50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B8B0F60)

namespace Google::Protobuf::WellKnownTypes
{
	class SourceContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x1AB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::SourceContext* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::SourceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
