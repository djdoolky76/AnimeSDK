#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGKJHBJCCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJGKJHBJCCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E374ED0)
#define FJGKJHBJCCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3750F0)
#define FJGKJHBJCCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E374B20)
#define FJGKJHBJCCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E374AF0)
#define FJGKJHBJCCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E374AE0)
#define FJGKJHBJCCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E374C50)
#define FJGKJHBJCCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E374B80)
#define FJGKJHBJCCG_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E374B60)
#define FJGKJHBJCCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E374DC0)
#define FJGKJHBJCCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E374AA0)
#define FJGKJHBJCCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E374F90)
#define FJGKJHBJCCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E374F60)
#define FJGKJHBJCCG_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E374B70)
#define FJGKJHBJCCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E374AD0)
#define FJGKJHBJCCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E374DF0)
#define FJGKJHBJCCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E374E50)

inline static constexpr unsigned int FJGKJHBJCCG_TypeDefinitionIndex = 28157;

	class FJGKJHBJCCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FJGKJHBJCCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJGKJHBJCCG*>**)UnitySDK::FromName("", "FJGKJHBJCCG")->GetStaticField(0x59C30);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJGKJHBJCCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJGKJHBJCCG*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGKJHBJCCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJGKJHBJCCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJGKJHBJCCG*>*(*)())((::PBYTE)hIl2Cpp + FJGKJHBJCCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJGKJHBJCCG* Clone()
		{
			return ((::FJGKJHBJCCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJGKJHBJCCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJGKJHBJCCG*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJGKJHBJCCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJGKJHBJCCG*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJGKJHBJCCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
