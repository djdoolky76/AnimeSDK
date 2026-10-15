#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
class PNAKHANCNGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNAKHANCNGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB0F90)
#define PNAKHANCNGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1330)
#define PNAKHANCNGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB0A80)
#define PNAKHANCNGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB09C0)
#define PNAKHANCNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0970)
#define PNAKHANCNGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB0C90)
#define PNAKHANCNGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB0B00)
#define PNAKHANCNGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB0DB0)
#define PNAKHANCNGK_IFFEEMHIHEP_OFFSET UNITYSDK_OFFSET(0x1DFB0AD0)
#define PNAKHANCNGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB0900)
#define PNAKHANCNGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB1160)
#define PNAKHANCNGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB10C0)
#define PNAKHANCNGK_MIIIIINLMKC_OFFSET UNITYSDK_OFFSET(0x1DFB0AF0)
#define PNAKHANCNGK_NGLCKJEFKIN_OFFSET UNITYSDK_OFFSET(0x1DFB0AE0)
#define PNAKHANCNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0960)
#define PNAKHANCNGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB0E20)
#define PNAKHANCNGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB0E80)

	class PNAKHANCNGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>* ABMPKGNBMNA; // 0x18
		::System::UInt32 BLCIEPPJJCC; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_ELINIFIFONO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PNAKHANCNGK")->GetStaticField(0x20ED0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNAKHANCNGK")->GetStaticField(0x20ED8);
		}

		// static const ::System::Object EGIFDDMMJBK; // 0x0
		// static const ::System::Object KKAFPBONMMD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNAKHANCNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNAKHANCNGK*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNAKHANCNGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNAKHANCNGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNAKHANCNGK* Clone()
		{
			return ((::PNAKHANCNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>* IFFEEMHIHEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_IFFEEMHIHEP_OFFSET))(this);
		}

		::System::UInt32 NGLCKJEFKIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_NGLCKJEFKIN_OFFSET))(this);
		}

		::System::Void MIIIIINLMKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNAKHANCNGK_MIIIIINLMKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNAKHANCNGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNAKHANCNGK*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNAKHANCNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNAKHANCNGK*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNAKHANCNGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
