#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGENMGNLDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCGENMGNLDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53D760)
#define HCGENMGNLDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53D800)
#define HCGENMGNLDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53D450)
#define HCGENMGNLDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53D420)
#define HCGENMGNLDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53D410)
#define HCGENMGNLDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53D560)
#define HCGENMGNLDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53D490)
#define HCGENMGNLDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53D6C0)
#define HCGENMGNLDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53D3D0)
#define HCGENMGNLDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53D7B0)
#define HCGENMGNLDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53D780)
#define HCGENMGNLDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53D400)
#define HCGENMGNLDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53D6F0)
#define HCGENMGNLDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53D750)

inline static constexpr unsigned int HCGENMGNLDJ_TypeDefinitionIndex = 27872;

	class HCGENMGNLDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCGENMGNLDJ")->GetStaticField(0x2FEF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCGENMGNLDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGENMGNLDJ*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGENMGNLDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCGENMGNLDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCGENMGNLDJ* Clone()
		{
			return ((::HCGENMGNLDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCGENMGNLDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCGENMGNLDJ*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCGENMGNLDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGENMGNLDJ*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCGENMGNLDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
