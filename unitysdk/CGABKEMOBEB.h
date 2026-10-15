#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGABKEMOBEB;
class OCDBIMIBNCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGABKEMOBEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0AA0A0)
#define CGABKEMOBEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA490)
#define CGABKEMOBEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A9A60)
#define CGABKEMOBEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A99D0)
#define CGABKEMOBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A99C0)
#define CGABKEMOBEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A9C90)
#define CGABKEMOBEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A9B20)
#define CGABKEMOBEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A9F60)
#define CGABKEMOBEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A9980)
#define CGABKEMOBEB_KNJEAKADGHO_OFFSET UNITYSDK_OFFSET(0x1E0A9B10)
#define CGABKEMOBEB_MCDGPMDABFE_OFFSET UNITYSDK_OFFSET(0x1E0A9B00)
#define CGABKEMOBEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0AA270)
#define CGABKEMOBEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0AA100)
#define CGABKEMOBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A99B0)
#define CGABKEMOBEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A9FB0)
#define CGABKEMOBEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AA010)

inline static constexpr unsigned int CGABKEMOBEB_TypeDefinitionIndex = 31016;

	class CGABKEMOBEB : public ::System::Object
	{
	public:
		::OCDBIMIBNCD* MOPOGJGJICC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CGABKEMOBEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGABKEMOBEB*>**)UnitySDK::FromName("", "CGABKEMOBEB")->GetStaticField(0x13850);
		}

		// static const ::System::Object EDKMCLPFFOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGABKEMOBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGABKEMOBEB*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGABKEMOBEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGABKEMOBEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGABKEMOBEB*>*(*)())((::PBYTE)hIl2Cpp + CGABKEMOBEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGABKEMOBEB* Clone()
		{
			return ((::CGABKEMOBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_CLONE_OFFSET))(this);
		}

		::OCDBIMIBNCD* MCDGPMDABFE()
		{
			return ((::OCDBIMIBNCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_MCDGPMDABFE_OFFSET))(this);
		}

		::System::Void KNJEAKADGHO(::OCDBIMIBNCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCDBIMIBNCD*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_KNJEAKADGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGABKEMOBEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGABKEMOBEB*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGABKEMOBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGABKEMOBEB*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGABKEMOBEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
