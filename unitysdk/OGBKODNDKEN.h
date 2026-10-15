#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACKPCFFEMHB.h"
#include "unitysdk/System/Object.h"
class OGBKODNDKEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGBKODNDKEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4F3A0)
#define OGBKODNDKEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F600)
#define OGBKODNDKEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4EFD0)
#define OGBKODNDKEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4EFA0)
#define OGBKODNDKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4EF90)
#define OGBKODNDKEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4F100)
#define OGBKODNDKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4F030)
#define OGBKODNDKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4F270)
#define OGBKODNDKEN_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DE4F020)
#define OGBKODNDKEN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DE4F010)
#define OGBKODNDKEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4EF50)
#define OGBKODNDKEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4F4A0)
#define OGBKODNDKEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4F470)
#define OGBKODNDKEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4EF80)
#define OGBKODNDKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4F2A0)
#define OGBKODNDKEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4F300)

	class OGBKODNDKEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACKPCFFEMHB GMPNCOBOFDM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OGBKODNDKEN")->GetStaticField(0x17CC0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGBKODNDKEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGBKODNDKEN*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGBKODNDKEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OGBKODNDKEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGBKODNDKEN* Clone()
		{
			return ((::OGBKODNDKEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_CLONE_OFFSET))(this);
		}

		::ACKPCFFEMHB JBIOGKPHKKC()
		{
			return ((::ACKPCFFEMHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::ACKPCFFEMHB a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACKPCFFEMHB))((::PBYTE)hIl2Cpp + OGBKODNDKEN_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGBKODNDKEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGBKODNDKEN*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGBKODNDKEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGBKODNDKEN*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGBKODNDKEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
