#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APFOIAIFHEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APFOIAIFHEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E647990)
#define APFOIAIFHEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E647CE0)
#define APFOIAIFHEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E647470)
#define APFOIAIFHEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6473B0)
#define APFOIAIFHEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E647340)
#define APFOIAIFHEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E647630)
#define APFOIAIFHEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6474E0)
#define APFOIAIFHEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E647740)
#define APFOIAIFHEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6472D0)
#define APFOIAIFHEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E647AC0)
#define APFOIAIFHEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E647A60)
#define APFOIAIFHEN_OLNAGBJNHDE_OFFSET UNITYSDK_OFFSET(0x1E6474C0)
#define APFOIAIFHEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E647330)
#define APFOIAIFHEN_PDOKCNECDME_OFFSET UNITYSDK_OFFSET(0x1E6474D0)
#define APFOIAIFHEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E647850)
#define APFOIAIFHEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6478B0)

inline static constexpr unsigned int APFOIAIFHEN_TypeDefinitionIndex = 25663;

	class APFOIAIFHEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDBAJAMDGNA; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OIFFIODHPMK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::APFOIAIFHEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APFOIAIFHEN*>**)UnitySDK::FromName("", "APFOIAIFHEN")->GetStaticField(0x4A230);
		}

		static ::System::Object** StaticGet_DEHOIJAAJKH()
		{
			return (::System::Object**)UnitySDK::FromName("", "APFOIAIFHEN")->GetStaticField(0x4A238);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IJECGKIBIGA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "APFOIAIFHEN")->GetStaticField(0x4A240);
		}

		// static const ::System::Object MKPLPCJHDIH; // 0x0
		// static const ::System::Object HJFIGCJNFND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APFOIAIFHEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APFOIAIFHEN*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APFOIAIFHEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APFOIAIFHEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APFOIAIFHEN*>*(*)())((::PBYTE)hIl2Cpp + APFOIAIFHEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APFOIAIFHEN* Clone()
		{
			return ((::APFOIAIFHEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OLNAGBJNHDE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_OLNAGBJNHDE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* PDOKCNECDME()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_PDOKCNECDME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APFOIAIFHEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APFOIAIFHEN*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APFOIAIFHEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APFOIAIFHEN*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APFOIAIFHEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
