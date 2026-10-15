#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGLIOOODBPN;
class PBMGACMAMBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBMGACMAMBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DECD120)
#define PBMGACMAMBE_CBIDMEHMIDA_OFFSET UNITYSDK_OFFSET(0x1DECCCB0)
#define PBMGACMAMBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECD4C0)
#define PBMGACMAMBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DECCC80)
#define PBMGACMAMBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECCBC0)
#define PBMGACMAMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECCB70)
#define PBMGACMAMBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DECCE30)
#define PBMGACMAMBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DECCCE0)
#define PBMGACMAMBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DECCF50)
#define PBMGACMAMBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DECCB30)
#define PBMGACMAMBE_KGGLHOOEGHM_OFFSET UNITYSDK_OFFSET(0x1DECCCD0)
#define PBMGACMAMBE_KOJMGPAKHBN_OFFSET UNITYSDK_OFFSET(0x1DECCCC0)
#define PBMGACMAMBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DECD2F0)
#define PBMGACMAMBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DECD250)
#define PBMGACMAMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DECCB60)
#define PBMGACMAMBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DECCFC0)
#define PBMGACMAMBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DECD020)

inline static constexpr unsigned int PBMGACMAMBE_TypeDefinitionIndex = 33166;

	class PBMGACMAMBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KGLIOOODBPN*>* IOPJHGFAAMP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AMCPEKJHOPE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PBMGACMAMBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBMGACMAMBE*>**)UnitySDK::FromName("", "PBMGACMAMBE")->GetStaticField(0x2CB90);
		}

		static ::Google::Protobuf::FieldCodec_1<::KGLIOOODBPN*>** StaticGet_NAPLHCGELCG()
		{
			return (::Google::Protobuf::FieldCodec_1<::KGLIOOODBPN*>**)UnitySDK::FromName("", "PBMGACMAMBE")->GetStaticField(0x2CB98);
		}

		// static const ::System::Object HNDGJMEPPNO; // 0x0
		// static const ::System::Object OLFMDIGLJBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBMGACMAMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBMGACMAMBE*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMGACMAMBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBMGACMAMBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBMGACMAMBE*>*(*)())((::PBYTE)hIl2Cpp + PBMGACMAMBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBMGACMAMBE* Clone()
		{
			return ((::PBMGACMAMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KGLIOOODBPN*>* CBIDMEHMIDA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KGLIOOODBPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_CBIDMEHMIDA_OFFSET))(this);
		}

		::System::UInt32 KOJMGPAKHBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_KOJMGPAKHBN_OFFSET))(this);
		}

		::System::Void KGGLHOOEGHM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBMGACMAMBE_KGGLHOOEGHM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBMGACMAMBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBMGACMAMBE*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGACMAMBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBMGACMAMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBMGACMAMBE*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBMGACMAMBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
