#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBCFDAIKG;
class BBHHENEONHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAHBCFDAIKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E787C80)
#define BAHBCFDAIKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E787F80)
#define BAHBCFDAIKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E787800)
#define BAHBCFDAIKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E787750)
#define BAHBCFDAIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787700)
#define BAHBCFDAIKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7879E0)
#define BAHBCFDAIKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E787860)
#define BAHBCFDAIKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E787B00)
#define BAHBCFDAIKG_GLHEHIDAPCN_OFFSET UNITYSDK_OFFSET(0x1E787850)
#define BAHBCFDAIKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E787690)
#define BAHBCFDAIKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E787DC0)
#define BAHBCFDAIKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E787D20)
#define BAHBCFDAIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7876F0)
#define BAHBCFDAIKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E787B70)
#define BAHBCFDAIKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E787BD0)

inline static constexpr unsigned int BAHBCFDAIKG_TypeDefinitionIndex = 33321;

	class BAHBCFDAIKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BBHHENEONHO*>* EHBCNEABANI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BAHBCFDAIKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAHBCFDAIKG*>**)UnitySDK::FromName("", "BAHBCFDAIKG")->GetStaticField(0x4C1A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BBHHENEONHO*>** StaticGet_EEPJDNAMHBL()
		{
			return (::Google::Protobuf::FieldCodec_1<::BBHHENEONHO*>**)UnitySDK::FromName("", "BAHBCFDAIKG")->GetStaticField(0x4C1A8);
		}

		// static const ::System::Object COPKFJJMANI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAHBCFDAIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHBCFDAIKG*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBCFDAIKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAHBCFDAIKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAHBCFDAIKG*>*(*)())((::PBYTE)hIl2Cpp + BAHBCFDAIKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAHBCFDAIKG* Clone()
		{
			return ((::BAHBCFDAIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BBHHENEONHO*>* GLHEHIDAPCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BBHHENEONHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_GLHEHIDAPCN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAHBCFDAIKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHBCFDAIKG*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAHBCFDAIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHBCFDAIKG*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAHBCFDAIKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
