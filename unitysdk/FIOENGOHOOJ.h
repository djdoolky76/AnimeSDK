#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIOENGOHOOJ;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIOENGOHOOJ_AIMADBLFEBD_OFFSET UNITYSDK_OFFSET(0x1E39CFE0)
#define FIOENGOHOOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E39D5A0)
#define FIOENGOHOOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39D820)
#define FIOENGOHOOJ_CDADLADHIKI_OFFSET UNITYSDK_OFFSET(0x1E39CFD0)
#define FIOENGOHOOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E39CF00)
#define FIOENGOHOOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E39CE70)
#define FIOENGOHOOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39CE60)
#define FIOENGOHOOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E39D190)
#define FIOENGOHOOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E39CFF0)
#define FIOENGOHOOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E39D460)
#define FIOENGOHOOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E39CDF0)
#define FIOENGOHOOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E39D690)
#define FIOENGOHOOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E39D600)
#define FIOENGOHOOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E39CE50)
#define FIOENGOHOOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E39D4B0)
#define FIOENGOHOOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E39D510)

	class FIOENGOHOOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NEMIDPFEJFL* GNEMPOKDHAA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIOENGOHOOJ")->GetStaticField(0x603E0);
		}

		// static const ::System::Object FHEGNKDJLFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIOENGOHOOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIOENGOHOOJ*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIOENGOHOOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIOENGOHOOJ* Clone()
		{
			return ((::FIOENGOHOOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CLONE_OFFSET))(this);
		}

		::NEMIDPFEJFL* CDADLADHIKI()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CDADLADHIKI_OFFSET))(this);
		}

		::System::Void AIMADBLFEBD(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_AIMADBLFEBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIOENGOHOOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIOENGOHOOJ*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIOENGOHOOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIOENGOHOOJ*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIOENGOHOOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
