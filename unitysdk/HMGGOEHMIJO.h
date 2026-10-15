#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMGGOEHMIJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMGGOEHMIJO_ABPDOOEPHEN_OFFSET UNITYSDK_OFFSET(0x1E5A0B20)
#define HMGGOEHMIJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A0E70)
#define HMGGOEHMIJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A1140)
#define HMGGOEHMIJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A0AC0)
#define HMGGOEHMIJO_CMACNDCLPBF_OFFSET UNITYSDK_OFFSET(0x1E5A0B30)
#define HMGGOEHMIJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A0A90)
#define HMGGOEHMIJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0A80)
#define HMGGOEHMIJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A0C30)
#define HMGGOEHMIJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A0B50)
#define HMGGOEHMIJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A0D00)
#define HMGGOEHMIJO_IBJMOIDHGGH_OFFSET UNITYSDK_OFFSET(0x1E5A0B10)
#define HMGGOEHMIJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A0A40)
#define HMGGOEHMIJO_LBFFHCPJDDG_OFFSET UNITYSDK_OFFSET(0x1E5A0B40)
#define HMGGOEHMIJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A0FC0)
#define HMGGOEHMIJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A0F80)
#define HMGGOEHMIJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0A70)
#define HMGGOEHMIJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A0D30)
#define HMGGOEHMIJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A0D90)

inline static constexpr unsigned int HMGGOEHMIJO_TypeDefinitionIndex = 33718;

	class HMGGOEHMIJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPLEPKBGGFO; // 0x18
		::System::UInt32 AHFOBLNJJJP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HMGGOEHMIJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMGGOEHMIJO*>**)UnitySDK::FromName("", "HMGGOEHMIJO")->GetStaticField(0x39960);
		}

		// static const ::System::Object MCFEDEABAIF; // 0x0
		// static const ::System::Object MBOJMOAJLLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMGGOEHMIJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMGGOEHMIJO*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMGGOEHMIJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMGGOEHMIJO*>*(*)())((::PBYTE)hIl2Cpp + HMGGOEHMIJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMGGOEHMIJO* Clone()
		{
			return ((::HMGGOEHMIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 IBJMOIDHGGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_IBJMOIDHGGH_OFFSET))(this);
		}

		::System::Void ABPDOOEPHEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_ABPDOOEPHEN_OFFSET))(this, a1);
		}

		::System::UInt32 CMACNDCLPBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CMACNDCLPBF_OFFSET))(this);
		}

		::System::Void LBFFHCPJDDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_LBFFHCPJDDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMGGOEHMIJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMGGOEHMIJO*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMGGOEHMIJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMGGOEHMIJO*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMGGOEHMIJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
