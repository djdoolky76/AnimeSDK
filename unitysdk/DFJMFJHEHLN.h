#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJMFJHEHLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFJMFJHEHLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F47D0D0)
#define DFJMFJHEHLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47D390)
#define DFJMFJHEHLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F47CC50)
#define DFJMFJHEHLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F47CBC0)
#define DFJMFJHEHLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F47CB70)
#define DFJMFJHEHLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F47CDD0)
#define DFJMFJHEHLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F47CCB0)
#define DFJMFJHEHLN_FJPGINAECGD_OFFSET UNITYSDK_OFFSET(0x1F47CCA0)
#define DFJMFJHEHLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F47CEC0)
#define DFJMFJHEHLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F47CB00)
#define DFJMFJHEHLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F47D1C0)
#define DFJMFJHEHLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F47D170)
#define DFJMFJHEHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F47CB60)
#define DFJMFJHEHLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F47CFC0)
#define DFJMFJHEHLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F47D020)

inline static constexpr unsigned int DFJMFJHEHLN_TypeDefinitionIndex = 29774;

	class DFJMFJHEHLN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHDDICLFLFB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DFJMFJHEHLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFJMFJHEHLN*>**)UnitySDK::FromName("", "DFJMFJHEHLN")->GetStaticField(0x2D360);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NANHKNECMEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DFJMFJHEHLN")->GetStaticField(0x2D368);
		}

		// static const ::System::Object LIOCIDAKJOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFJMFJHEHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJMFJHEHLN*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFJMFJHEHLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFJMFJHEHLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFJMFJHEHLN*>*(*)())((::PBYTE)hIl2Cpp + DFJMFJHEHLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFJMFJHEHLN* Clone()
		{
			return ((::DFJMFJHEHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FJPGINAECGD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_FJPGINAECGD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFJMFJHEHLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFJMFJHEHLN*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFJMFJHEHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJMFJHEHLN*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFJMFJHEHLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
