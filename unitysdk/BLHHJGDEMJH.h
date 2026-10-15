#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLHHJGDEMJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLHHJGDEMJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF62660)
#define BLHHJGDEMJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF62940)
#define BLHHJGDEMJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF621D0)
#define BLHHJGDEMJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF62140)
#define BLHHJGDEMJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF620F0)
#define BLHHJGDEMJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF62330)
#define BLHHJGDEMJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF62230)
#define BLHHJGDEMJH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF62210)
#define BLHHJGDEMJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF62420)
#define BLHHJGDEMJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF620B0)
#define BLHHJGDEMJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF62790)
#define BLHHJGDEMJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF62740)
#define BLHHJGDEMJH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF62200)
#define BLHHJGDEMJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF620E0)
#define BLHHJGDEMJH_PELKKEFJLOF_OFFSET UNITYSDK_OFFSET(0x1DF62220)
#define BLHHJGDEMJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF62520)
#define BLHHJGDEMJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF62580)

inline static constexpr unsigned int BLHHJGDEMJH_TypeDefinitionIndex = 34250;

	class BLHHJGDEMJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANKADEGDBEL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKFCEHHCHCH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BLHHJGDEMJH")->GetStaticField(0x4CCA0);
		}

		static ::Google::Protobuf::MessageParser_1<::BLHHJGDEMJH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLHHJGDEMJH*>**)UnitySDK::FromName("", "BLHHJGDEMJH")->GetStaticField(0x4CCA8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MKIHJHHDFND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLHHJGDEMJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLHHJGDEMJH*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLHHJGDEMJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLHHJGDEMJH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLHHJGDEMJH*>*(*)())((::PBYTE)hIl2Cpp + BLHHJGDEMJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLHHJGDEMJH* Clone()
		{
			return ((::BLHHJGDEMJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PELKKEFJLOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_PELKKEFJLOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLHHJGDEMJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLHHJGDEMJH*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLHHJGDEMJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLHHJGDEMJH*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLHHJGDEMJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
