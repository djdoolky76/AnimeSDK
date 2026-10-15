#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBGIINJFCCD;
class LEJFIEPMMGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBGIINJFCCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E308510)
#define FBGIINJFCCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3087B0)
#define FBGIINJFCCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E307EA0)
#define FBGIINJFCCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E307E30)
#define FBGIINJFCCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E307E20)
#define FBGIINJFCCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3080B0)
#define FBGIINJFCCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E307F40)
#define FBGIINJFCCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E308380)
#define FBGIINJFCCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E307DE0)
#define FBGIINJFCCD_KECIECOKPEE_OFFSET UNITYSDK_OFFSET(0x1E307F30)
#define FBGIINJFCCD_LOPBOHCNNDN_OFFSET UNITYSDK_OFFSET(0x1E307F20)
#define FBGIINJFCCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E308600)
#define FBGIINJFCCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E308570)
#define FBGIINJFCCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E307E10)
#define FBGIINJFCCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E308420)
#define FBGIINJFCCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E308480)

inline static constexpr unsigned int FBGIINJFCCD_TypeDefinitionIndex = 33022;

	class FBGIINJFCCD : public ::System::Object
	{
	public:
		::LEJFIEPMMGG* GPBPLBBDMKA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBGIINJFCCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBGIINJFCCD*>**)UnitySDK::FromName("", "FBGIINJFCCD")->GetStaticField(0x4EA40);
		}

		// static const ::System::Object FAOPLNDAAOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBGIINJFCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBGIINJFCCD*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBGIINJFCCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBGIINJFCCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBGIINJFCCD*>*(*)())((::PBYTE)hIl2Cpp + FBGIINJFCCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBGIINJFCCD* Clone()
		{
			return ((::FBGIINJFCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_CLONE_OFFSET))(this);
		}

		::LEJFIEPMMGG* LOPBOHCNNDN()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_LOPBOHCNNDN_OFFSET))(this);
		}

		::System::Void KECIECOKPEE(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_KECIECOKPEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBGIINJFCCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBGIINJFCCD*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBGIINJFCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBGIINJFCCD*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBGIINJFCCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
