#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHHBLFHDFEK;
class EPHFHKDJKMD;
class JILFBOOFKEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JILFBOOFKEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA60430)
#define JILFBOOFKEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA608D0)
#define JILFBOOFKEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA60010)
#define JILFBOOFKEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA5FF00)
#define JILFBOOFKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5FE90)
#define JILFBOOFKEO_EBKHBLMOPAD_OFFSET UNITYSDK_OFFSET(0x1FA60040)
#define JILFBOOFKEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA600B0)
#define JILFBOOFKEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA60080)
#define JILFBOOFKEO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA60060)
#define JILFBOOFKEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA60200)
#define JILFBOOFKEO_HKNAGCCCLEM_OFFSET UNITYSDK_OFFSET(0x1FA60070)
#define JILFBOOFKEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA5FE50)
#define JILFBOOFKEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA606B0)
#define JILFBOOFKEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA605B0)
#define JILFBOOFKEO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA60050)
#define JILFBOOFKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA5FE80)
#define JILFBOOFKEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA60290)
#define JILFBOOFKEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA602F0)

inline static constexpr unsigned int JILFBOOFKEO_TypeDefinitionIndex = 27960;

	class JILFBOOFKEO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CHHBLFHDFEK*>* NAJGODJDFLB; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPHFHKDJKMD*>* GFGMEOEFIMB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::CHHBLFHDFEK*>** StaticGet_GMNOJOCHGMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CHHBLFHDFEK*>**)UnitySDK::FromName("", "JILFBOOFKEO")->GetStaticField(0x4B5A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPHFHKDJKMD*>** StaticGet_IJCJOMNDMFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPHFHKDJKMD*>**)UnitySDK::FromName("", "JILFBOOFKEO")->GetStaticField(0x4B5A8);
		}

		static ::Google::Protobuf::MessageParser_1<::JILFBOOFKEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JILFBOOFKEO*>**)UnitySDK::FromName("", "JILFBOOFKEO")->GetStaticField(0x4B5B0);
		}

		// static const ::System::Object FOPDAOKLCOJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBOIPELDIGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JILFBOOFKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JILFBOOFKEO*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILFBOOFKEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JILFBOOFKEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JILFBOOFKEO*>*(*)())((::PBYTE)hIl2Cpp + JILFBOOFKEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JILFBOOFKEO* Clone()
		{
			return ((::JILFBOOFKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CHHBLFHDFEK*>* EBKHBLMOPAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CHHBLFHDFEK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_EBKHBLMOPAD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JILFBOOFKEO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPHFHKDJKMD*>* HKNAGCCCLEM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPHFHKDJKMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_HKNAGCCCLEM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JILFBOOFKEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JILFBOOFKEO*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JILFBOOFKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JILFBOOFKEO*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JILFBOOFKEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
