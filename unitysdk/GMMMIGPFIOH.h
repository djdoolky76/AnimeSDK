#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMMMIGPFIOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMMMIGPFIOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D6810)
#define GMMMIGPFIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D6AD0)
#define GMMMIGPFIOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D6390)
#define GMMMIGPFIOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D6300)
#define GMMMIGPFIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D62B0)
#define GMMMIGPFIOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D6510)
#define GMMMIGPFIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D63F0)
#define GMMMIGPFIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D6600)
#define GMMMIGPFIOH_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E4D63E0)
#define GMMMIGPFIOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D6240)
#define GMMMIGPFIOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D6900)
#define GMMMIGPFIOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D68B0)
#define GMMMIGPFIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D62A0)
#define GMMMIGPFIOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D6700)
#define GMMMIGPFIOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D6760)

	class GMMMIGPFIOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMMMIGPFIOH")->GetStaticField(0x226A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMMMIGPFIOH")->GetStaticField(0x226A8);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMMMIGPFIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMMMIGPFIOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMMMIGPFIOH* Clone()
		{
			return ((::GMMMIGPFIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMMMIGPFIOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMMMIGPFIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMMMIGPFIOH*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMMMIGPFIOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
