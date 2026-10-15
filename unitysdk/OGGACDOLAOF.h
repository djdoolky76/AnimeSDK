#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCDOOFJDKO;
class OGGACDOLAOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGGACDOLAOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE518D0)
#define OGGACDOLAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE51C50)
#define OGGACDOLAOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE51410)
#define OGGACDOLAOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE51380)
#define OGGACDOLAOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE51340)
#define OGGACDOLAOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE515C0)
#define OGGACDOLAOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE51470)
#define OGGACDOLAOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE51450)
#define OGGACDOLAOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE516F0)
#define OGGACDOLAOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE51300)
#define OGGACDOLAOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE51A80)
#define OGGACDOLAOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE519E0)
#define OGGACDOLAOF_NOBAGBINANI_OFFSET UNITYSDK_OFFSET(0x1DE51460)
#define OGGACDOLAOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE51440)
#define OGGACDOLAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE51330)
#define OGGACDOLAOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE51760)
#define OGGACDOLAOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE517C0)

inline static constexpr unsigned int OGGACDOLAOF_TypeDefinitionIndex = 25932;

	class OGGACDOLAOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IKCDOOFJDKO*>* NPEBMEHKPEE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::IKCDOOFJDKO*>** StaticGet_KKLINHBIIHN()
		{
			return (::Google::Protobuf::FieldCodec_1<::IKCDOOFJDKO*>**)UnitySDK::FromName("", "OGGACDOLAOF")->GetStaticField(0x17DE0);
		}

		static ::Google::Protobuf::MessageParser_1<::OGGACDOLAOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGGACDOLAOF*>**)UnitySDK::FromName("", "OGGACDOLAOF")->GetStaticField(0x17DE8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OJIJKHIJFNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGGACDOLAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGGACDOLAOF*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGGACDOLAOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGGACDOLAOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGGACDOLAOF*>*(*)())((::PBYTE)hIl2Cpp + OGGACDOLAOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGGACDOLAOF* Clone()
		{
			return ((::OGGACDOLAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGGACDOLAOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IKCDOOFJDKO*>* NOBAGBINANI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IKCDOOFJDKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_NOBAGBINANI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGGACDOLAOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGGACDOLAOF*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGGACDOLAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGGACDOLAOF*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGGACDOLAOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
