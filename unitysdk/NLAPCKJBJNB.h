#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLAPCKJBJNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLAPCKJBJNB_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1EB61260)
#define NLAPCKJBJNB_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1EB61270)
#define NLAPCKJBJNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB61660)
#define NLAPCKJBJNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB61990)
#define NLAPCKJBJNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB61210)
#define NLAPCKJBJNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB61180)
#define NLAPCKJBJNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61130)
#define NLAPCKJBJNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB613C0)
#define NLAPCKJBJNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB61290)
#define NLAPCKJBJNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB614B0)
#define NLAPCKJBJNB_HIKMOKCDPCF_OFFSET UNITYSDK_OFFSET(0x1EB61280)
#define NLAPCKJBJNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB610C0)
#define NLAPCKJBJNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB617C0)
#define NLAPCKJBJNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB61770)
#define NLAPCKJBJNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB61120)
#define NLAPCKJBJNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB61500)
#define NLAPCKJBJNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB61560)

inline static constexpr unsigned int NLAPCKJBJNB_TypeDefinitionIndex = 25645;

	class NLAPCKJBJNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* BPPLOCGIEKE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NLAPCKJBJNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLAPCKJBJNB*>**)UnitySDK::FromName("", "NLAPCKJBJNB")->GetStaticField(0x1C090);
		}

		static ::System::Object** StaticGet_FDJODLDJEJP()
		{
			return (::System::Object**)UnitySDK::FromName("", "NLAPCKJBJNB")->GetStaticField(0x1C098);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object PLCKJBEHLCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLAPCKJBJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAPCKJBJNB*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAPCKJBJNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLAPCKJBJNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLAPCKJBJNB*>*(*)())((::PBYTE)hIl2Cpp + NLAPCKJBJNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLAPCKJBJNB* Clone()
		{
			return ((::NLAPCKJBJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* HIKMOKCDPCF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_HIKMOKCDPCF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLAPCKJBJNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLAPCKJBJNB*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLAPCKJBJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAPCKJBJNB*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLAPCKJBJNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
