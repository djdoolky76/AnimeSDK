#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMFKPHCLAJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMFKPHCLAJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDF14A0)
#define GMFKPHCLAJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF1700)
#define GMFKPHCLAJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDF10A0)
#define GMFKPHCLAJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDF1010)
#define GMFKPHCLAJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF0FC0)
#define GMFKPHCLAJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDF11D0)
#define GMFKPHCLAJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDF10E0)
#define GMFKPHCLAJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDF12C0)
#define GMFKPHCLAJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDF0F80)
#define GMFKPHCLAJE_KOJFBAFKHJJ_OFFSET UNITYSDK_OFFSET(0x1FDF10D0)
#define GMFKPHCLAJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDF1560)
#define GMFKPHCLAJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDF1510)
#define GMFKPHCLAJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDF0FB0)
#define GMFKPHCLAJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDF13C0)
#define GMFKPHCLAJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDF1420)

inline static constexpr unsigned int GMFKPHCLAJE_TypeDefinitionIndex = 31398;

	class GMFKPHCLAJE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IELHCBKLKMA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>**)UnitySDK::FromName("", "GMFKPHCLAJE")->GetStaticField(0x183F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CGKPJLDLOPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMFKPHCLAJE")->GetStaticField(0x183F8);
		}

		// static const ::System::Object LKOPOGHAOKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMFKPHCLAJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>*(*)())((::PBYTE)hIl2Cpp + GMFKPHCLAJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMFKPHCLAJE* Clone()
		{
			return ((::GMFKPHCLAJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KOJFBAFKHJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_KOJFBAFKHJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMFKPHCLAJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMFKPHCLAJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
