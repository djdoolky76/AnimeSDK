#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJGPJGJFIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCJGPJGJFIF_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E1721F0)
#define DCJGPJGJFIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E172560)
#define DCJGPJGJFIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E172780)
#define DCJGPJGJFIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1721B0)
#define DCJGPJGJFIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E172180)
#define DCJGPJGJFIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E172170)
#define DCJGPJGJFIF_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E172200)
#define DCJGPJGJFIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1722E0)
#define DCJGPJGJFIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E172210)
#define DCJGPJGJFIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E172450)
#define DCJGPJGJFIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E172130)
#define DCJGPJGJFIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E172620)
#define DCJGPJGJFIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1725F0)
#define DCJGPJGJFIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E172160)
#define DCJGPJGJFIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E172480)
#define DCJGPJGJFIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1724E0)

inline static constexpr unsigned int DCJGPJGJFIF_TypeDefinitionIndex = 32561;

	class DCJGPJGJFIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DCJGPJGJFIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCJGPJGJFIF*>**)UnitySDK::FromName("", "DCJGPJGJFIF")->GetStaticField(0x2C540);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCJGPJGJFIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJGPJGJFIF*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJGPJGJFIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCJGPJGJFIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCJGPJGJFIF*>*(*)())((::PBYTE)hIl2Cpp + DCJGPJGJFIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCJGPJGJFIF* Clone()
		{
			return ((::DCJGPJGJFIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCJGPJGJFIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCJGPJGJFIF*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCJGPJGJFIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJGPJGJFIF*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCJGPJGJFIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
