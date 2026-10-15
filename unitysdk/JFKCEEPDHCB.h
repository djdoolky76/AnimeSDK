#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKCEEPDHCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFKCEEPDHCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72E720)
#define JFKCEEPDHCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E940)
#define JFKCEEPDHCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72E370)
#define JFKCEEPDHCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72E340)
#define JFKCEEPDHCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E330)
#define JFKCEEPDHCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72E4A0)
#define JFKCEEPDHCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72E3D0)
#define JFKCEEPDHCB_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E72E3B0)
#define JFKCEEPDHCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72E610)
#define JFKCEEPDHCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72E2F0)
#define JFKCEEPDHCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72E7E0)
#define JFKCEEPDHCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72E7B0)
#define JFKCEEPDHCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72E320)
#define JFKCEEPDHCB_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E72E3C0)
#define JFKCEEPDHCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72E640)
#define JFKCEEPDHCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72E6A0)

inline static constexpr unsigned int JFKCEEPDHCB_TypeDefinitionIndex = 29809;

	class JFKCEEPDHCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JFKCEEPDHCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFKCEEPDHCB*>**)UnitySDK::FromName("", "JFKCEEPDHCB")->GetStaticField(0x5FE30);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFKCEEPDHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKCEEPDHCB*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKCEEPDHCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFKCEEPDHCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFKCEEPDHCB*>*(*)())((::PBYTE)hIl2Cpp + JFKCEEPDHCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFKCEEPDHCB* Clone()
		{
			return ((::JFKCEEPDHCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFKCEEPDHCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFKCEEPDHCB*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFKCEEPDHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKCEEPDHCB*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFKCEEPDHCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
