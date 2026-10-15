#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLLLNDHJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKLLLNDHJHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E76FC10)
#define JKLLLNDHJHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76FE30)
#define JKLLLNDHJHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E76F860)
#define JKLLLNDHJHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E76F830)
#define JKLLLNDHJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76F820)
#define JKLLLNDHJHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E76F990)
#define JKLLLNDHJHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E76F8C0)
#define JKLLLNDHJHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76FB00)
#define JKLLLNDHJHI_HPIPNPMJFJB_OFFSET UNITYSDK_OFFSET(0x1E76F8B0)
#define JKLLLNDHJHI_IGFCKMCMELL_OFFSET UNITYSDK_OFFSET(0x1E76F8A0)
#define JKLLLNDHJHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E76F7E0)
#define JKLLLNDHJHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E76FCD0)
#define JKLLLNDHJHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E76FCA0)
#define JKLLLNDHJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E76F810)
#define JKLLLNDHJHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76FB30)
#define JKLLLNDHJHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E76FB90)

inline static constexpr unsigned int JKLLLNDHJHI_TypeDefinitionIndex = 33158;

	class JKLLLNDHJHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OFBOGCJHJAD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JKLLLNDHJHI")->GetStaticField(0x66100);
		}

		// static const ::System::Object PKFDAIIMMEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKLLLNDHJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLLLNDHJHI*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLLLNDHJHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JKLLLNDHJHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKLLLNDHJHI* Clone()
		{
			return ((::JKLLLNDHJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGFCKMCMELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_IGFCKMCMELL_OFFSET))(this);
		}

		::System::Void HPIPNPMJFJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_HPIPNPMJFJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKLLLNDHJHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKLLLNDHJHI*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKLLLNDHJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLLLNDHJHI*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKLLLNDHJHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
