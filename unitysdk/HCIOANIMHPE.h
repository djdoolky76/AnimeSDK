#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCIOANIMHPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCIOANIMHPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E513DB0)
#define HCIOANIMHPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E513E50)
#define HCIOANIMHPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E513AA0)
#define HCIOANIMHPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E513A70)
#define HCIOANIMHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E513A60)
#define HCIOANIMHPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E513BB0)
#define HCIOANIMHPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E513AE0)
#define HCIOANIMHPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E513D10)
#define HCIOANIMHPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E513A20)
#define HCIOANIMHPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E513E00)
#define HCIOANIMHPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E513DD0)
#define HCIOANIMHPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E513A50)
#define HCIOANIMHPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E513D40)
#define HCIOANIMHPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E513DA0)

inline static constexpr unsigned int HCIOANIMHPE_TypeDefinitionIndex = 34477;

	class HCIOANIMHPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HCIOANIMHPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCIOANIMHPE*>**)UnitySDK::FromName("", "HCIOANIMHPE")->GetStaticField(0x2AF00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCIOANIMHPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCIOANIMHPE*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIOANIMHPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCIOANIMHPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCIOANIMHPE*>*(*)())((::PBYTE)hIl2Cpp + HCIOANIMHPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCIOANIMHPE* Clone()
		{
			return ((::HCIOANIMHPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCIOANIMHPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCIOANIMHPE*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCIOANIMHPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCIOANIMHPE*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCIOANIMHPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
