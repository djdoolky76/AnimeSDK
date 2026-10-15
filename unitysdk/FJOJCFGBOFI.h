#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJOJCFGBOFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJOJCFGBOFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A8800)
#define FJOJCFGBOFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8A20)
#define FJOJCFGBOFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A8450)
#define FJOJCFGBOFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A8420)
#define FJOJCFGBOFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8410)
#define FJOJCFGBOFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A8580)
#define FJOJCFGBOFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A84B0)
#define FJOJCFGBOFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A86F0)
#define FJOJCFGBOFI_GPOEBIHHIPN_OFFSET UNITYSDK_OFFSET(0x1E3A8490)
#define FJOJCFGBOFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A83D0)
#define FJOJCFGBOFI_JNELGGIGBLG_OFFSET UNITYSDK_OFFSET(0x1E3A84A0)
#define FJOJCFGBOFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A88C0)
#define FJOJCFGBOFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A8890)
#define FJOJCFGBOFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8400)
#define FJOJCFGBOFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A8720)
#define FJOJCFGBOFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A8780)

inline static constexpr unsigned int FJOJCFGBOFI_TypeDefinitionIndex = 26460;

	class FJOJCFGBOFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEENOCHDPGG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FJOJCFGBOFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJOJCFGBOFI*>**)UnitySDK::FromName("", "FJOJCFGBOFI")->GetStaticField(0x60EF0);
		}

		// static const ::System::Object BNDGEJDEDCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJOJCFGBOFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJOJCFGBOFI*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJOJCFGBOFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJOJCFGBOFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJOJCFGBOFI*>*(*)())((::PBYTE)hIl2Cpp + FJOJCFGBOFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJOJCFGBOFI* Clone()
		{
			return ((::FJOJCFGBOFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_CLONE_OFFSET))(this);
		}

		::System::UInt32 GPOEBIHHIPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_GPOEBIHHIPN_OFFSET))(this);
		}

		::System::Void JNELGGIGBLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_JNELGGIGBLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJOJCFGBOFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJOJCFGBOFI*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJOJCFGBOFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJOJCFGBOFI*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJOJCFGBOFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
