#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFDHDBNIHPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFDHDBNIHPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E070FD0)
#define CFDHDBNIHPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0712D0)
#define CFDHDBNIHPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E070A10)
#define CFDHDBNIHPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E070980)
#define CFDHDBNIHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E070930)
#define CFDHDBNIHPL_DHJAEIKNPFM_OFFSET UNITYSDK_OFFSET(0x1E070A40)
#define CFDHDBNIHPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E070AA0)
#define CFDHDBNIHPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E070A70)
#define CFDHDBNIHPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E070CA0)
#define CFDHDBNIHPL_HJLBBCICADF_OFFSET UNITYSDK_OFFSET(0x1E070A60)
#define CFDHDBNIHPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0708F0)
#define CFDHDBNIHPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0710C0)
#define CFDHDBNIHPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E071060)
#define CFDHDBNIHPL_MNHEJBGLLIC_OFFSET UNITYSDK_OFFSET(0x1E070A50)
#define CFDHDBNIHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E070920)
#define CFDHDBNIHPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E070E90)
#define CFDHDBNIHPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E070EF0)

inline static constexpr unsigned int CFDHDBNIHPL_TypeDefinitionIndex = 25455;

	class CFDHDBNIHPL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AEFONHHNKDD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Double AHCDDPBAHMD; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IJFMKNJNPJA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CFDHDBNIHPL")->GetStaticField(0x11880);
		}

		static ::Google::Protobuf::MessageParser_1<::CFDHDBNIHPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFDHDBNIHPL*>**)UnitySDK::FromName("", "CFDHDBNIHPL")->GetStaticField(0x11888);
		}

		// static const ::System::Object IJOMFDBAGLF; // 0x0
		// static const ::System::Object OJNAEOAFHAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFDHDBNIHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFDHDBNIHPL*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFDHDBNIHPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFDHDBNIHPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFDHDBNIHPL*>*(*)())((::PBYTE)hIl2Cpp + CFDHDBNIHPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFDHDBNIHPL* Clone()
		{
			return ((::CFDHDBNIHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_CLONE_OFFSET))(this);
		}

		::System::Double DHJAEIKNPFM()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_DHJAEIKNPFM_OFFSET))(this);
		}

		::System::Void MNHEJBGLLIC(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_MNHEJBGLLIC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HJLBBCICADF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_HJLBBCICADF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFDHDBNIHPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFDHDBNIHPL*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFDHDBNIHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFDHDBNIHPL*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFDHDBNIHPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
