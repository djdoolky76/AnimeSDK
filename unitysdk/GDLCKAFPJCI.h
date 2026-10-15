#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLCKAFPJCI;
class JMJEIBGACMD;
class NPAJHGDEIDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDLCKAFPJCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4204F0)
#define GDLCKAFPJCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E420970)
#define GDLCKAFPJCI_CLHHGOFMLBE_OFFSET UNITYSDK_OFFSET(0x1E4200D0)
#define GDLCKAFPJCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4200A0)
#define GDLCKAFPJCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41FFC0)
#define GDLCKAFPJCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41FF60)
#define GDLCKAFPJCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E420140)
#define GDLCKAFPJCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E420110)
#define GDLCKAFPJCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E420100)
#define GDLCKAFPJCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E420290)
#define GDLCKAFPJCI_GNFPMMAJHHE_OFFSET UNITYSDK_OFFSET(0x1E4200E0)
#define GDLCKAFPJCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41FF20)
#define GDLCKAFPJCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E420760)
#define GDLCKAFPJCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E420650)
#define GDLCKAFPJCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4200F0)
#define GDLCKAFPJCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41FF50)
#define GDLCKAFPJCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E420320)
#define GDLCKAFPJCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E420380)

inline static constexpr unsigned int GDLCKAFPJCI_TypeDefinitionIndex = 33372;

	class GDLCKAFPJCI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NPAJHGDEIDJ*>* MPCPPJAAKGA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JMJEIBGACMD*>* MBGNKCBDLOG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::GDLCKAFPJCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDLCKAFPJCI*>**)UnitySDK::FromName("", "GDLCKAFPJCI")->GetStaticField(0x10250);
		}

		static ::Google::Protobuf::FieldCodec_1<::NPAJHGDEIDJ*>** StaticGet_LNENKAOGANL()
		{
			return (::Google::Protobuf::FieldCodec_1<::NPAJHGDEIDJ*>**)UnitySDK::FromName("", "GDLCKAFPJCI")->GetStaticField(0x10258);
		}

		static ::Google::Protobuf::FieldCodec_1<::JMJEIBGACMD*>** StaticGet_PFHDDFGEDEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::JMJEIBGACMD*>**)UnitySDK::FromName("", "GDLCKAFPJCI")->GetStaticField(0x10260);
		}

		// static const ::System::Object NJBHDFPKNOL; // 0x0
		// static const ::System::Object GHANEDBLOPG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDLCKAFPJCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLCKAFPJCI*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDLCKAFPJCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDLCKAFPJCI*>*(*)())((::PBYTE)hIl2Cpp + GDLCKAFPJCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDLCKAFPJCI* Clone()
		{
			return ((::GDLCKAFPJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JMJEIBGACMD*>* CLHHGOFMLBE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JMJEIBGACMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CLHHGOFMLBE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPAJHGDEIDJ*>* GNFPMMAJHHE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPAJHGDEIDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_GNFPMMAJHHE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDLCKAFPJCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDLCKAFPJCI*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDLCKAFPJCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLCKAFPJCI*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDLCKAFPJCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
