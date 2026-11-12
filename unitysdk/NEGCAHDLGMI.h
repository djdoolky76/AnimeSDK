#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
class NEGCAHDLGMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEGCAHDLGMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE357A0)
#define NEGCAHDLGMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE35B30)
#define NEGCAHDLGMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE35300)
#define NEGCAHDLGMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE35270)
#define NEGCAHDLGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE35230)
#define NEGCAHDLGMI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FE35340)
#define NEGCAHDLGMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE354B0)
#define NEGCAHDLGMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE35360)
#define NEGCAHDLGMI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FE35350)
#define NEGCAHDLGMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE355D0)
#define NEGCAHDLGMI_ILAOHBLALMJ_OFFSET UNITYSDK_OFFSET(0x1FE35330)
#define NEGCAHDLGMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE351F0)
#define NEGCAHDLGMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE35970)
#define NEGCAHDLGMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE358D0)
#define NEGCAHDLGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE35220)
#define NEGCAHDLGMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE35640)
#define NEGCAHDLGMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE356A0)

inline static constexpr unsigned int NEGCAHDLGMI_TypeDefinitionIndex = 26557;

	class NEGCAHDLGMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>* CHDFOGBCGJA; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NEGCAHDLGMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEGCAHDLGMI*>**)UnitySDK::FromName("", "NEGCAHDLGMI")->GetStaticField(0x689B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOMPFHOMMBH*>** StaticGet_LCBOMNGKJJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOMPFHOMMBH*>**)UnitySDK::FromName("", "NEGCAHDLGMI")->GetStaticField(0x689B8);
		}

		// static const ::System::Object CGFGMCJLJNA; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEGCAHDLGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEGCAHDLGMI*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGCAHDLGMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEGCAHDLGMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEGCAHDLGMI*>*(*)())((::PBYTE)hIl2Cpp + NEGCAHDLGMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEGCAHDLGMI* Clone()
		{
			return ((::NEGCAHDLGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>* ILAOHBLALMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_ILAOHBLALMJ_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEGCAHDLGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEGCAHDLGMI*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEGCAHDLGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEGCAHDLGMI*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEGCAHDLGMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
