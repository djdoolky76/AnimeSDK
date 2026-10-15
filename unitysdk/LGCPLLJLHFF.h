#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNOGFAMJ;
class LGCPLLJLHFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGCPLLJLHFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E94A810)
#define LGCPLLJLHFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94AB90)
#define LGCPLLJLHFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E94A2F0)
#define LGCPLLJLHFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E94A260)
#define LGCPLLJLHFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94A220)
#define LGCPLLJLHFF_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E94A340)
#define LGCPLLJLHFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E94A500)
#define LGCPLLJLHFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E94A370)
#define LGCPLLJLHFF_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E94A350)
#define LGCPLLJLHFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E94A630)
#define LGCPLLJLHFF_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E94A360)
#define LGCPLLJLHFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E94A1B0)
#define LGCPLLJLHFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E94A9C0)
#define LGCPLLJLHFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E94A920)
#define LGCPLLJLHFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E94A210)
#define LGCPLLJLHFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E94A6A0)
#define LGCPLLJLHFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E94A700)

	class LGCPLLJLHFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* JLFDMJMJDND; // 0x18
		::System::UInt32 NOMDEJJPCMH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGCPLLJLHFF")->GetStaticField(0x3D900);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LGCPLLJLHFF")->GetStaticField(0x3D908);
		}

		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGCPLLJLHFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGCPLLJLHFF*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCPLLJLHFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGCPLLJLHFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGCPLLJLHFF* Clone()
		{
			return ((::LGCPLLJLHFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGCPLLJLHFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGCPLLJLHFF*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGCPLLJLHFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGCPLLJLHFF*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGCPLLJLHFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
