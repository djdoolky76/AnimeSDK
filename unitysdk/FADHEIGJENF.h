#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FADHEIGJENF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FADHEIGJENF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F0480)
#define FADHEIGJENF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F0750)
#define FADHEIGJENF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F0000)
#define FADHEIGJENF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EFF50)
#define FADHEIGJENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFF00)
#define FADHEIGJENF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F01E0)
#define FADHEIGJENF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F0060)
#define FADHEIGJENF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F0300)
#define FADHEIGJENF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EFE90)
#define FADHEIGJENF_LHENMJDKPIL_OFFSET UNITYSDK_OFFSET(0x1E2F0050)
#define FADHEIGJENF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2F0590)
#define FADHEIGJENF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2F0520)
#define FADHEIGJENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFEF0)
#define FADHEIGJENF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F0370)
#define FADHEIGJENF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F03D0)

inline static constexpr unsigned int FADHEIGJENF_TypeDefinitionIndex = 29245;

	class FADHEIGJENF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* DBAAPDGGDCO; // 0x18
		static ::System::Object** StaticGet_ADBHJGLDBND()
		{
			return (::System::Object**)UnitySDK::FromName("", "FADHEIGJENF")->GetStaticField(0x4B060);
		}

		static ::Google::Protobuf::MessageParser_1<::FADHEIGJENF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FADHEIGJENF*>**)UnitySDK::FromName("", "FADHEIGJENF")->GetStaticField(0x4B068);
		}

		// static const ::System::Object MBIHEIALDIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FADHEIGJENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FADHEIGJENF*))((::PBYTE)hIl2Cpp + FADHEIGJENF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FADHEIGJENF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FADHEIGJENF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FADHEIGJENF*>*(*)())((::PBYTE)hIl2Cpp + FADHEIGJENF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FADHEIGJENF* Clone()
		{
			return ((::FADHEIGJENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* LHENMJDKPIL()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_LHENMJDKPIL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FADHEIGJENF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FADHEIGJENF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FADHEIGJENF*))((::PBYTE)hIl2Cpp + FADHEIGJENF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FADHEIGJENF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHEIGJENF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FADHEIGJENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FADHEIGJENF*))((::PBYTE)hIl2Cpp + FADHEIGJENF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FADHEIGJENF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
