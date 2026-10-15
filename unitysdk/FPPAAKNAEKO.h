#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPPAAKNAEKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPPAAKNAEKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4106A0)
#define FPPAAKNAEKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E410740)
#define FPPAAKNAEKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E410390)
#define FPPAAKNAEKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E410360)
#define FPPAAKNAEKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E410350)
#define FPPAAKNAEKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4104A0)
#define FPPAAKNAEKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4103D0)
#define FPPAAKNAEKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E410600)
#define FPPAAKNAEKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E410310)
#define FPPAAKNAEKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4106F0)
#define FPPAAKNAEKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4106C0)
#define FPPAAKNAEKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E410340)
#define FPPAAKNAEKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E410630)
#define FPPAAKNAEKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E410690)

inline static constexpr unsigned int FPPAAKNAEKO_TypeDefinitionIndex = 31225;

	class FPPAAKNAEKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPPAAKNAEKO")->GetStaticField(0x6BAC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPPAAKNAEKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPAAKNAEKO*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPAAKNAEKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPPAAKNAEKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPPAAKNAEKO* Clone()
		{
			return ((::FPPAAKNAEKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPPAAKNAEKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPPAAKNAEKO*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPPAAKNAEKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPAAKNAEKO*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPPAAKNAEKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
