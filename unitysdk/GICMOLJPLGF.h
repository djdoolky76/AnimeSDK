#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GICMOLJPLGF;
class PHHFOGFKDBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GICMOLJPLGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4659C0)
#define GICMOLJPLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E465CC0)
#define GICMOLJPLGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E465540)
#define GICMOLJPLGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4654B0)
#define GICMOLJPLGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E465470)
#define GICMOLJPLGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E465720)
#define GICMOLJPLGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4655A0)
#define GICMOLJPLGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E465840)
#define GICMOLJPLGF_IFLCAAOIHIF_OFFSET UNITYSDK_OFFSET(0x1E465590)
#define GICMOLJPLGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E465400)
#define GICMOLJPLGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E465B00)
#define GICMOLJPLGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E465A60)
#define GICMOLJPLGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E465460)
#define GICMOLJPLGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4658B0)
#define GICMOLJPLGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E465910)

inline static constexpr unsigned int GICMOLJPLGF_TypeDefinitionIndex = 27168;

	class GICMOLJPLGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PHHFOGFKDBC*>* DBFIMKCGMNO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::PHHFOGFKDBC*>** StaticGet_LEKCENNIBEM()
		{
			return (::Google::Protobuf::FieldCodec_1<::PHHFOGFKDBC*>**)UnitySDK::FromName("", "GICMOLJPLGF")->GetStaticField(0x18130);
		}

		static ::Google::Protobuf::MessageParser_1<::GICMOLJPLGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GICMOLJPLGF*>**)UnitySDK::FromName("", "GICMOLJPLGF")->GetStaticField(0x18138);
		}

		// static const ::System::Object MMOGIHIBIHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GICMOLJPLGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICMOLJPLGF*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICMOLJPLGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GICMOLJPLGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GICMOLJPLGF*>*(*)())((::PBYTE)hIl2Cpp + GICMOLJPLGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GICMOLJPLGF* Clone()
		{
			return ((::GICMOLJPLGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PHHFOGFKDBC*>* IFLCAAOIHIF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PHHFOGFKDBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_IFLCAAOIHIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GICMOLJPLGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GICMOLJPLGF*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GICMOLJPLGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICMOLJPLGF*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GICMOLJPLGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
