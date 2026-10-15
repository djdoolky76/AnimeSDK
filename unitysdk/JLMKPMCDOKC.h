#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLMKPMCDOKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLMKPMCDOKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E753DA0)
#define JLMKPMCDOKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E753FC0)
#define JLMKPMCDOKC_CEMNAHPOFBN_OFFSET UNITYSDK_OFFSET(0x1E753A30)
#define JLMKPMCDOKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7539F0)
#define JLMKPMCDOKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7539C0)
#define JLMKPMCDOKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7539B0)
#define JLMKPMCDOKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E753B20)
#define JLMKPMCDOKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E753A50)
#define JLMKPMCDOKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E753C90)
#define JLMKPMCDOKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E753970)
#define JLMKPMCDOKC_JKLLOHHOLBJ_OFFSET UNITYSDK_OFFSET(0x1E753A40)
#define JLMKPMCDOKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E753E60)
#define JLMKPMCDOKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E753E30)
#define JLMKPMCDOKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7539A0)
#define JLMKPMCDOKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E753CC0)
#define JLMKPMCDOKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E753D20)

inline static constexpr unsigned int JLMKPMCDOKC_TypeDefinitionIndex = 26023;

	class JLMKPMCDOKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPCHKEAOKHK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JLMKPMCDOKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLMKPMCDOKC*>**)UnitySDK::FromName("", "JLMKPMCDOKC")->GetStaticField(0x64C00);
		}

		// static const ::System::Object IDGOEIMCIEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLMKPMCDOKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLMKPMCDOKC*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLMKPMCDOKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLMKPMCDOKC*>*(*)())((::PBYTE)hIl2Cpp + JLMKPMCDOKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLMKPMCDOKC* Clone()
		{
			return ((::JLMKPMCDOKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CEMNAHPOFBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CEMNAHPOFBN_OFFSET))(this);
		}

		::System::Void JKLLOHHOLBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_JKLLOHHOLBJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLMKPMCDOKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLMKPMCDOKC*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLMKPMCDOKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLMKPMCDOKC*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLMKPMCDOKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
