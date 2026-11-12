#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
class LABAJFDICMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LABAJFDICMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC02C00)
#define LABAJFDICMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC02FA0)
#define LABAJFDICMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC02750)
#define LABAJFDICMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC02690)
#define LABAJFDICMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC02640)
#define LABAJFDICMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC02900)
#define LABAJFDICMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC027B0)
#define LABAJFDICMD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC027A0)
#define LABAJFDICMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC02A20)
#define LABAJFDICMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC02600)
#define LABAJFDICMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC02DD0)
#define LABAJFDICMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC02D30)
#define LABAJFDICMD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC02790)
#define LABAJFDICMD_OKJCINLOKCP_OFFSET UNITYSDK_OFFSET(0x1FC02780)
#define LABAJFDICMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC02630)
#define LABAJFDICMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC02A90)
#define LABAJFDICMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC02AF0)

inline static constexpr unsigned int LABAJFDICMD_TypeDefinitionIndex = 32569;

	class LABAJFDICMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>* PHCJLANBIDL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::EPADPABCFGH*>** StaticGet_POFDGCBHONB()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPADPABCFGH*>**)UnitySDK::FromName("", "LABAJFDICMD")->GetStaticField(0x25390);
		}

		static ::Google::Protobuf::MessageParser_1<::LABAJFDICMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LABAJFDICMD*>**)UnitySDK::FromName("", "LABAJFDICMD")->GetStaticField(0x25398);
		}

		// static const ::System::Object HBCIMHILPDP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LABAJFDICMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LABAJFDICMD*))((::PBYTE)hIl2Cpp + LABAJFDICMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABAJFDICMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LABAJFDICMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LABAJFDICMD*>*(*)())((::PBYTE)hIl2Cpp + LABAJFDICMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LABAJFDICMD* Clone()
		{
			return ((::LABAJFDICMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>* OKJCINLOKCP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPADPABCFGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_OKJCINLOKCP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LABAJFDICMD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LABAJFDICMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LABAJFDICMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LABAJFDICMD*))((::PBYTE)hIl2Cpp + LABAJFDICMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LABAJFDICMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LABAJFDICMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LABAJFDICMD*))((::PBYTE)hIl2Cpp + LABAJFDICMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LABAJFDICMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
