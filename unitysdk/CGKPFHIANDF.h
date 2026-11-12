#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKPFHIANDF;
class IDBCDHIOKEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGKPFHIANDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F37A7D0)
#define CGKPFHIANDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F37AB60)
#define CGKPFHIANDF_CINCCOBLOOC_OFFSET UNITYSDK_OFFSET(0x1F37A370)
#define CGKPFHIANDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F37A320)
#define CGKPFHIANDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F37A290)
#define CGKPFHIANDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F37A250)
#define CGKPFHIANDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F37A4D0)
#define CGKPFHIANDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F37A380)
#define CGKPFHIANDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F37A5F0)
#define CGKPFHIANDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F37A210)
#define CGKPFHIANDF_LCLMOEMLBCD_OFFSET UNITYSDK_OFFSET(0x1F37A350)
#define CGKPFHIANDF_LEDIGJDPLFE_OFFSET UNITYSDK_OFFSET(0x1F37A360)
#define CGKPFHIANDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F37A9A0)
#define CGKPFHIANDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F37A900)
#define CGKPFHIANDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F37A240)
#define CGKPFHIANDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F37A660)
#define CGKPFHIANDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F37A6C0)

inline static constexpr unsigned int CGKPFHIANDF_TypeDefinitionIndex = 35658;

	class CGKPFHIANDF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* CHHAFNHIMEK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LCFEJAGDGOE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>** StaticGet_IGANHHPNMEB()
		{
			return (::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>**)UnitySDK::FromName("", "CGKPFHIANDF")->GetStaticField(0xCC30);
		}

		static ::Google::Protobuf::MessageParser_1<::CGKPFHIANDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGKPFHIANDF*>**)UnitySDK::FromName("", "CGKPFHIANDF")->GetStaticField(0xCC38);
		}

		// static const ::System::Object MMCNLBGHAMG; // 0x0
		// static const ::System::Object LPINGDBBCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGKPFHIANDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKPFHIANDF*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKPFHIANDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGKPFHIANDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGKPFHIANDF*>*(*)())((::PBYTE)hIl2Cpp + CGKPFHIANDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGKPFHIANDF* Clone()
		{
			return ((::CGKPFHIANDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* LCLMOEMLBCD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_LCLMOEMLBCD_OFFSET))(this);
		}

		::System::UInt32 LEDIGJDPLFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_LEDIGJDPLFE_OFFSET))(this);
		}

		::System::Void CINCCOBLOOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKPFHIANDF_CINCCOBLOOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGKPFHIANDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGKPFHIANDF*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGKPFHIANDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKPFHIANDF*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGKPFHIANDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
