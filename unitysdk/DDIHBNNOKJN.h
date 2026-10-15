#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDIHBNNOKJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDIHBNNOKJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E152310)
#define DDIHBNNOKJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1524D0)
#define DDIHBNNOKJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E151EF0)
#define DDIHBNNOKJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E151EC0)
#define DDIHBNNOKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E151EB0)
#define DDIHBNNOKJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E152040)
#define DDIHBNNOKJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E151F60)
#define DDIHBNNOKJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1521C0)
#define DDIHBNNOKJN_HDEMEHOMOHE_OFFSET UNITYSDK_OFFSET(0x1E151F40)
#define DDIHBNNOKJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E151E70)
#define DDIHBNNOKJN_LGPCEGLOOAM_OFFSET UNITYSDK_OFFSET(0x1E151F50)
#define DDIHBNNOKJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E152370)
#define DDIHBNNOKJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E152340)
#define DDIHBNNOKJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E151EA0)
#define DDIHBNNOKJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1521F0)
#define DDIHBNNOKJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E152250)

inline static constexpr unsigned int DDIHBNNOKJN_TypeDefinitionIndex = 32736;

	class DDIHBNNOKJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean CFKKJPKDOLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DDIHBNNOKJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDIHBNNOKJN*>**)UnitySDK::FromName("", "DDIHBNNOKJN")->GetStaticField(0x25CC0);
		}

		// static const ::System::Object AMGJIBBICIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDIHBNNOKJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDIHBNNOKJN*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDIHBNNOKJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDIHBNNOKJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDIHBNNOKJN*>*(*)())((::PBYTE)hIl2Cpp + DDIHBNNOKJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDIHBNNOKJN* Clone()
		{
			return ((::DDIHBNNOKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_CLONE_OFFSET))(this);
		}

		::System::Boolean HDEMEHOMOHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_HDEMEHOMOHE_OFFSET))(this);
		}

		::System::Void LGPCEGLOOAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_LGPCEGLOOAM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDIHBNNOKJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDIHBNNOKJN*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDIHBNNOKJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDIHBNNOKJN*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDIHBNNOKJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
