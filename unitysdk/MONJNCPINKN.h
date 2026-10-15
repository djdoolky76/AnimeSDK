#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPHDCKJMMN;
class MONJNCPINKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MONJNCPINKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA82ED0)
#define MONJNCPINKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA831D0)
#define MONJNCPINKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA82A50)
#define MONJNCPINKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA829A0)
#define MONJNCPINKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA82950)
#define MONJNCPINKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA82C30)
#define MONJNCPINKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA82AB0)
#define MONJNCPINKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA82D50)
#define MONJNCPINKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA828E0)
#define MONJNCPINKN_MABFDAOEMPN_OFFSET UNITYSDK_OFFSET(0x1EA82AA0)
#define MONJNCPINKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA83010)
#define MONJNCPINKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA82F70)
#define MONJNCPINKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA82940)
#define MONJNCPINKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA82DC0)
#define MONJNCPINKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA82E20)

inline static constexpr unsigned int MONJNCPINKN_TypeDefinitionIndex = 29199;

	class MONJNCPINKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BOPHDCKJMMN*>* ELBKHPPDDPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MONJNCPINKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MONJNCPINKN*>**)UnitySDK::FromName("", "MONJNCPINKN")->GetStaticField(0x5AFD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOPHDCKJMMN*>** StaticGet_NDLGPKOJLJI()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOPHDCKJMMN*>**)UnitySDK::FromName("", "MONJNCPINKN")->GetStaticField(0x5AFD8);
		}

		// static const ::System::Object DPCIOMJLEBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MONJNCPINKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJNCPINKN*))((::PBYTE)hIl2Cpp + MONJNCPINKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONJNCPINKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MONJNCPINKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MONJNCPINKN*>*(*)())((::PBYTE)hIl2Cpp + MONJNCPINKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MONJNCPINKN* Clone()
		{
			return ((::MONJNCPINKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOPHDCKJMMN*>* MABFDAOEMPN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOPHDCKJMMN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_MABFDAOEMPN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONJNCPINKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MONJNCPINKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MONJNCPINKN*))((::PBYTE)hIl2Cpp + MONJNCPINKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MONJNCPINKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MONJNCPINKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJNCPINKN*))((::PBYTE)hIl2Cpp + MONJNCPINKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MONJNCPINKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
