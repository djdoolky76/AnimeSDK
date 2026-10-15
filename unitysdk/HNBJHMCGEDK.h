#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNBJHMCGEDK;
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNBJHMCGEDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5AB580)
#define HNBJHMCGEDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB920)
#define HNBJHMCGEDK_CHAFOPGLICD_OFFSET UNITYSDK_OFFSET(0x1E5AB0C0)
#define HNBJHMCGEDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AB070)
#define HNBJHMCGEDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AAFE0)
#define HNBJHMCGEDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AAFA0)
#define HNBJHMCGEDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AB280)
#define HNBJHMCGEDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AB0F0)
#define HNBJHMCGEDK_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E5AB0E0)
#define HNBJHMCGEDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AB3A0)
#define HNBJHMCGEDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5AAF30)
#define HNBJHMCGEDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5AB750)
#define HNBJHMCGEDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5AB6B0)
#define HNBJHMCGEDK_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E5AB0D0)
#define HNBJHMCGEDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5AAF90)
#define HNBJHMCGEDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AB410)
#define HNBJHMCGEDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5AB470)

inline static constexpr unsigned int HNBJHMCGEDK_TypeDefinitionIndex = 26931;

	class HNBJHMCGEDK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* EPOLBMGHIEE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HNBJHMCGEDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNBJHMCGEDK*>**)UnitySDK::FromName("", "HNBJHMCGEDK")->GetStaticField(0x136C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>** StaticGet_HPLPADKKELP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>**)UnitySDK::FromName("", "HNBJHMCGEDK")->GetStaticField(0x136C8);
		}

		// static const ::System::Object JKFLAJKLODN; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNBJHMCGEDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBJHMCGEDK*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNBJHMCGEDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNBJHMCGEDK*>*(*)())((::PBYTE)hIl2Cpp + HNBJHMCGEDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNBJHMCGEDK* Clone()
		{
			return ((::HNBJHMCGEDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CHAFOPGLICD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CHAFOPGLICD_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNBJHMCGEDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNBJHMCGEDK*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNBJHMCGEDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBJHMCGEDK*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNBJHMCGEDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
