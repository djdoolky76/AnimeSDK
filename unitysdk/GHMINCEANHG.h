#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMINCEANHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHMINCEANHG_BPAHKGLMGMI_OFFSET UNITYSDK_OFFSET(0x1E45EDA0)
#define GHMINCEANHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45F100)
#define GHMINCEANHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45F3D0)
#define GHMINCEANHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45ED00)
#define GHMINCEANHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45ECD0)
#define GHMINCEANHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45ECC0)
#define GHMINCEANHG_EOELKKJALCN_OFFSET UNITYSDK_OFFSET(0x1E45ED90)
#define GHMINCEANHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45EEC0)
#define GHMINCEANHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45EDB0)
#define GHMINCEANHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45EF90)
#define GHMINCEANHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45EC50)
#define GHMINCEANHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45F250)
#define GHMINCEANHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45F210)
#define GHMINCEANHG_MIJCOADGEJN_OFFSET UNITYSDK_OFFSET(0x1E45ED70)
#define GHMINCEANHG_OCEDKFDBPLM_OFFSET UNITYSDK_OFFSET(0x1E45ED80)
#define GHMINCEANHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45ECB0)
#define GHMINCEANHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45EFC0)
#define GHMINCEANHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45F020)

inline static constexpr unsigned int GHMINCEANHG_TypeDefinitionIndex = 26210;

	class GHMINCEANHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NKLOJACCNHD; // 0x18
		::System::UInt32 KNNOFLGOPDC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GHMINCEANHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHMINCEANHG*>**)UnitySDK::FromName("", "GHMINCEANHG")->GetStaticField(0xCD50);
		}

		// static const ::System::Object MFBHCNGOEKC; // 0x0
		// static const ::System::Object IHCMHGANAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHMINCEANHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMINCEANHG*))((::PBYTE)hIl2Cpp + GHMINCEANHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMINCEANHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHMINCEANHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHMINCEANHG*>*(*)())((::PBYTE)hIl2Cpp + GHMINCEANHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHMINCEANHG* Clone()
		{
			return ((::GHMINCEANHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 MIJCOADGEJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_MIJCOADGEJN_OFFSET))(this);
		}

		::System::Void OCEDKFDBPLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMINCEANHG_OCEDKFDBPLM_OFFSET))(this, a1);
		}

		::System::UInt32 EOELKKJALCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_EOELKKJALCN_OFFSET))(this);
		}

		::System::Void BPAHKGLMGMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMINCEANHG_BPAHKGLMGMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMINCEANHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHMINCEANHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMINCEANHG*))((::PBYTE)hIl2Cpp + GHMINCEANHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHMINCEANHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHMINCEANHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMINCEANHG*))((::PBYTE)hIl2Cpp + GHMINCEANHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHMINCEANHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
