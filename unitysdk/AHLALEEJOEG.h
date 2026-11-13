#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJDNGHDIKG.h"
#include "unitysdk/System/Object.h"
class AHLALEEJOEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHLALEEJOEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205013D0)
#define AHLALEEJOEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x205016C0)
#define AHLALEEJOEG_CIDKOIGOKDA_OFFSET UNITYSDK_OFFSET(0x20500FE0)
#define AHLALEEJOEG_CLONE_OFFSET UNITYSDK_OFFSET(0x20500FB0)
#define AHLALEEJOEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20500F20)
#define AHLALEEJOEG_CTOR_OFFSET UNITYSDK_OFFSET(0x20500EE0)
#define AHLALEEJOEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20501130)
#define AHLALEEJOEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20500FF0)
#define AHLALEEJOEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20501250)
#define AHLALEEJOEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20500EA0)
#define AHLALEEJOEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20501510)
#define AHLALEEJOEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20501470)
#define AHLALEEJOEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20500ED0)
#define AHLALEEJOEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205012C0)
#define AHLALEEJOEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x20501320)

inline static constexpr unsigned int AHLALEEJOEG_TypeDefinitionIndex = 34155;

	class AHLALEEJOEG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MGJDNGHDIKG>* NGMAICDCHJF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::MGJDNGHDIKG>** StaticGet_HHAPKGFFABN()
		{
			return (::Google::Protobuf::FieldCodec_1<::MGJDNGHDIKG>**)UnitySDK::FromName("", "AHLALEEJOEG")->GetStaticField(0x30DD0);
		}

		static ::Google::Protobuf::MessageParser_1<::AHLALEEJOEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHLALEEJOEG*>**)UnitySDK::FromName("", "AHLALEEJOEG")->GetStaticField(0x30DD8);
		}

		// static const ::System::Object EGOIGAODHFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHLALEEJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHLALEEJOEG*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLALEEJOEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHLALEEJOEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHLALEEJOEG*>*(*)())((::PBYTE)hIl2Cpp + AHLALEEJOEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHLALEEJOEG* Clone()
		{
			return ((::AHLALEEJOEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MGJDNGHDIKG>* CIDKOIGOKDA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MGJDNGHDIKG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_CIDKOIGOKDA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHLALEEJOEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHLALEEJOEG*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHLALEEJOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHLALEEJOEG*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHLALEEJOEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
