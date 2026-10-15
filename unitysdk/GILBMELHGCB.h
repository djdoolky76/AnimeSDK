#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GILBMELHGCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GILBMELHGCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E471520)
#define GILBMELHGCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E471820)
#define GILBMELHGCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E471090)
#define GILBMELHGCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E471000)
#define GILBMELHGCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E470FB0)
#define GILBMELHGCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4711F0)
#define GILBMELHGCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4710F0)
#define GILBMELHGCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4712E0)
#define GILBMELHGCB_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E4710E0)
#define GILBMELHGCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E470F70)
#define GILBMELHGCB_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E4710D0)
#define GILBMELHGCB_MAPGJELNGAG_OFFSET UNITYSDK_OFFSET(0x1E4710C0)
#define GILBMELHGCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E471660)
#define GILBMELHGCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E471610)
#define GILBMELHGCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E470FA0)
#define GILBMELHGCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4713E0)
#define GILBMELHGCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E471440)

inline static constexpr unsigned int GILBMELHGCB_TypeDefinitionIndex = 33897;

	class GILBMELHGCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JPLEMAAJKJE; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GILBMELHGCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GILBMELHGCB*>**)UnitySDK::FromName("", "GILBMELHGCB")->GetStaticField(0x19410);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HIOAPDKCFAH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GILBMELHGCB")->GetStaticField(0x19418);
		}

		// static const ::System::Object CELFMPHOAMB; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GILBMELHGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILBMELHGCB*))((::PBYTE)hIl2Cpp + GILBMELHGCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILBMELHGCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GILBMELHGCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GILBMELHGCB*>*(*)())((::PBYTE)hIl2Cpp + GILBMELHGCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GILBMELHGCB* Clone()
		{
			return ((::GILBMELHGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MAPGJELNGAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_MAPGJELNGAG_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GILBMELHGCB_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GILBMELHGCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GILBMELHGCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GILBMELHGCB*))((::PBYTE)hIl2Cpp + GILBMELHGCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GILBMELHGCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GILBMELHGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILBMELHGCB*))((::PBYTE)hIl2Cpp + GILBMELHGCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GILBMELHGCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
