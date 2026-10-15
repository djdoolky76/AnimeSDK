#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFMDFCHECOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFMDFCHECOM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E7F2310)
#define KFMDFCHECOM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E7F2320)
#define KFMDFCHECOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F2740)
#define KFMDFCHECOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F29E0)
#define KFMDFCHECOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F22B0)
#define KFMDFCHECOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F2210)
#define KFMDFCHECOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F21C0)
#define KFMDFCHECOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F23B0)
#define KFMDFCHECOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F2330)
#define KFMDFCHECOM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7F22F0)
#define KFMDFCHECOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F24B0)
#define KFMDFCHECOM_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E7F2300)
#define KFMDFCHECOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F2180)
#define KFMDFCHECOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F2910)
#define KFMDFCHECOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F28B0)
#define KFMDFCHECOM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7F22E0)
#define KFMDFCHECOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F21B0)
#define KFMDFCHECOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F25B0)
#define KFMDFCHECOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F2610)

inline static constexpr unsigned int KFMDFCHECOM_TypeDefinitionIndex = 32206;

	class KFMDFCHECOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KFMDFCHECOM")->GetStaticField(0x13340);
		}

		static ::Google::Protobuf::MessageParser_1<::KFMDFCHECOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFMDFCHECOM*>**)UnitySDK::FromName("", "KFMDFCHECOM")->GetStaticField(0x13348);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFMDFCHECOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMDFCHECOM*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMDFCHECOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFMDFCHECOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFMDFCHECOM*>*(*)())((::PBYTE)hIl2Cpp + KFMDFCHECOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFMDFCHECOM* Clone()
		{
			return ((::KFMDFCHECOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFMDFCHECOM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_JINLEONNCEN_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFMDFCHECOM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFMDFCHECOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFMDFCHECOM*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFMDFCHECOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMDFCHECOM*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFMDFCHECOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
