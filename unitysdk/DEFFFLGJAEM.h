#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEFFFLGJAEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEFFFLGJAEM_AJINEBLMBNB_OFFSET UNITYSDK_OFFSET(0x1E1916F0)
#define DEFFFLGJAEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E191AC0)
#define DEFFFLGJAEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E191D20)
#define DEFFFLGJAEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E191670)
#define DEFFFLGJAEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E191630)
#define DEFFFLGJAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E191620)
#define DEFFFLGJAEM_EPKNBMOGDIF_OFFSET UNITYSDK_OFFSET(0x1E191720)
#define DEFFFLGJAEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E191840)
#define DEFFFLGJAEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E191730)
#define DEFFFLGJAEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E191920)
#define DEFFFLGJAEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1915B0)
#define DEFFFLGJAEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E191BA0)
#define DEFFFLGJAEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E191B60)
#define DEFFFLGJAEM_OAECBHKJCEF_OFFSET UNITYSDK_OFFSET(0x1E191700)
#define DEFFFLGJAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E191610)
#define DEFFFLGJAEM_PKFNPIHFAME_OFFSET UNITYSDK_OFFSET(0x1E191710)
#define DEFFFLGJAEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E191950)
#define DEFFFLGJAEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1919B0)

inline static constexpr unsigned int DEFFFLGJAEM_TypeDefinitionIndex = 34903;

	class DEFFFLGJAEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NKDIPABDIIO; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DLAENJMCANJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DEFFFLGJAEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEFFFLGJAEM*>**)UnitySDK::FromName("", "DEFFFLGJAEM")->GetStaticField(0x30AC0);
		}

		// static const ::System::Object CNLGPDPICBH; // 0x0
		// static const ::System::Object EKICJHILLNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEFFFLGJAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEFFFLGJAEM*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEFFFLGJAEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEFFFLGJAEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEFFFLGJAEM*>*(*)())((::PBYTE)hIl2Cpp + DEFFFLGJAEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEFFFLGJAEM* Clone()
		{
			return ((::DEFFFLGJAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJINEBLMBNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_AJINEBLMBNB_OFFSET))(this);
		}

		::System::Void OAECBHKJCEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_OAECBHKJCEF_OFFSET))(this, a1);
		}

		::System::Boolean PKFNPIHFAME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_PKFNPIHFAME_OFFSET))(this);
		}

		::System::Void EPKNBMOGDIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_EPKNBMOGDIF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEFFFLGJAEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEFFFLGJAEM*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEFFFLGJAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEFFFLGJAEM*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEFFFLGJAEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
