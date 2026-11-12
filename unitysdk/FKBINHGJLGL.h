#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKBINHGJLGL;
class GKHGFCBMLBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKBINHGJLGL_ABGEGMHAOPO_OFFSET UNITYSDK_OFFSET(0x1F6AE560)
#define FKBINHGJLGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6AEAF0)
#define FKBINHGJLGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6AED70)
#define FKBINHGJLGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6AE4B0)
#define FKBINHGJLGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6AE420)
#define FKBINHGJLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6AE410)
#define FKBINHGJLGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6AE6E0)
#define FKBINHGJLGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6AE570)
#define FKBINHGJLGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6AE9B0)
#define FKBINHGJLGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6AE3D0)
#define FKBINHGJLGL_MBGJFAKGJAL_OFFSET UNITYSDK_OFFSET(0x1F6AE550)
#define FKBINHGJLGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6AEBE0)
#define FKBINHGJLGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6AEB50)
#define FKBINHGJLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6AE400)
#define FKBINHGJLGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6AEA00)
#define FKBINHGJLGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6AEA60)

inline static constexpr unsigned int FKBINHGJLGL_TypeDefinitionIndex = 33627;

	class FKBINHGJLGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GKHGFCBMLBL* KPNCLGABAOD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FKBINHGJLGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKBINHGJLGL*>**)UnitySDK::FromName("", "FKBINHGJLGL")->GetStaticField(0x47AC0);
		}

		// static const ::System::Object ALBJBNPCJFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKBINHGJLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKBINHGJLGL*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKBINHGJLGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKBINHGJLGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKBINHGJLGL*>*(*)())((::PBYTE)hIl2Cpp + FKBINHGJLGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKBINHGJLGL* Clone()
		{
			return ((::FKBINHGJLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_CLONE_OFFSET))(this);
		}

		::GKHGFCBMLBL* MBGJFAKGJAL()
		{
			return ((::GKHGFCBMLBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_MBGJFAKGJAL_OFFSET))(this);
		}

		::System::Void ABGEGMHAOPO(::GKHGFCBMLBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHGFCBMLBL*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_ABGEGMHAOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKBINHGJLGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKBINHGJLGL*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKBINHGJLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKBINHGJLGL*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKBINHGJLGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
