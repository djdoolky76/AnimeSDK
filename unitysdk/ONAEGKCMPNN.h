#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONAEGKCMPNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONAEGKCMPNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC1670)
#define ONAEGKCMPNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC18D0)
#define ONAEGKCMPNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC1280)
#define ONAEGKCMPNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC1240)
#define ONAEGKCMPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC1230)
#define ONAEGKCMPNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC13F0)
#define ONAEGKCMPNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC1310)
#define ONAEGKCMPNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEC12E0)
#define ONAEGKCMPNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC14D0)
#define ONAEGKCMPNN_GGHGGIMPBFK_OFFSET UNITYSDK_OFFSET(0x1DEC12F0)
#define ONAEGKCMPNN_HLMFDGJJOKN_OFFSET UNITYSDK_OFFSET(0x1DEC1300)
#define ONAEGKCMPNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC11F0)
#define ONAEGKCMPNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC1750)
#define ONAEGKCMPNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC1710)
#define ONAEGKCMPNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEC12D0)
#define ONAEGKCMPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC1220)
#define ONAEGKCMPNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC1500)
#define ONAEGKCMPNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC1560)

inline static constexpr unsigned int ONAEGKCMPNN_TypeDefinitionIndex = 30661;

	class ONAEGKCMPNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OHLHEGBGEOH; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONAEGKCMPNN")->GetStaticField(0x2BD50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NJBJCFLEIAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONAEGKCMPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONAEGKCMPNN*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONAEGKCMPNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONAEGKCMPNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONAEGKCMPNN* Clone()
		{
			return ((::ONAEGKCMPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean GGHGGIMPBFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_GGHGGIMPBFK_OFFSET))(this);
		}

		::System::Void HLMFDGJJOKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_HLMFDGJJOKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONAEGKCMPNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONAEGKCMPNN*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONAEGKCMPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONAEGKCMPNN*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONAEGKCMPNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
