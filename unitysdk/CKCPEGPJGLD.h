#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCPEGPJGLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKCPEGPJGLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E9000)
#define CKCPEGPJGLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E9220)
#define CKCPEGPJGLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E8C50)
#define CKCPEGPJGLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E8C20)
#define CKCPEGPJGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8C10)
#define CKCPEGPJGLD_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E0E8C90)
#define CKCPEGPJGLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E8D80)
#define CKCPEGPJGLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E8CB0)
#define CKCPEGPJGLD_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E0E8CA0)
#define CKCPEGPJGLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E8EF0)
#define CKCPEGPJGLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E8BD0)
#define CKCPEGPJGLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E90C0)
#define CKCPEGPJGLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E9090)
#define CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8C00)
#define CKCPEGPJGLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E8F20)
#define CKCPEGPJGLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E8F80)

inline static constexpr unsigned int CKCPEGPJGLD_TypeDefinitionIndex = 32454;

	class CKCPEGPJGLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CKCPEGPJGLD")->GetStaticField(0x1AD00);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKCPEGPJGLD* Clone()
		{
			return ((::CKCPEGPJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
