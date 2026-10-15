#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLMPCCGCADK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLMPCCGCADK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CF3D0)
#define CLMPCCGCADK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF5F0)
#define CLMPCCGCADK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CF020)
#define CLMPCCGCADK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CEFF0)
#define CLMPCCGCADK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CEFE0)
#define CLMPCCGCADK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CF150)
#define CLMPCCGCADK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CF080)
#define CLMPCCGCADK_FFLANGKCGDG_OFFSET UNITYSDK_OFFSET(0x1E0CF070)
#define CLMPCCGCADK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CF2C0)
#define CLMPCCGCADK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0CEFA0)
#define CLMPCCGCADK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CF490)
#define CLMPCCGCADK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CF460)
#define CLMPCCGCADK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CEFD0)
#define CLMPCCGCADK_POMOOINMGEN_OFFSET UNITYSDK_OFFSET(0x1E0CF060)
#define CLMPCCGCADK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CF2F0)
#define CLMPCCGCADK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CF350)

inline static constexpr unsigned int CLMPCCGCADK_TypeDefinitionIndex = 33150;

	class CLMPCCGCADK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CKLKGJJGIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CLMPCCGCADK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLMPCCGCADK*>**)UnitySDK::FromName("", "CLMPCCGCADK")->GetStaticField(0x1B930);
		}

		// static const ::System::Object MOPCGKGCLOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLMPCCGCADK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLMPCCGCADK*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLMPCCGCADK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLMPCCGCADK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLMPCCGCADK*>*(*)())((::PBYTE)hIl2Cpp + CLMPCCGCADK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLMPCCGCADK* Clone()
		{
			return ((::CLMPCCGCADK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_CLONE_OFFSET))(this);
		}

		::System::UInt32 POMOOINMGEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_POMOOINMGEN_OFFSET))(this);
		}

		::System::Void FFLANGKCGDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLMPCCGCADK_FFLANGKCGDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLMPCCGCADK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLMPCCGCADK*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLMPCCGCADK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLMPCCGCADK*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLMPCCGCADK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
