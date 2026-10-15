#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLMJALJBPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPLMJALJBPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E143DF0)
#define CPLMJALJBPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E143E90)
#define CPLMJALJBPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E143A90)
#define CPLMJALJBPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E143A60)
#define CPLMJALJBPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E143A50)
#define CPLMJALJBPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E143BF0)
#define CPLMJALJBPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E143B00)
#define CPLMJALJBPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E143D50)
#define CPLMJALJBPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1439E0)
#define CPLMJALJBPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E143E40)
#define CPLMJALJBPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E143E10)
#define CPLMJALJBPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E143A40)
#define CPLMJALJBPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E143D80)
#define CPLMJALJBPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E143DE0)

inline static constexpr unsigned int CPLMJALJBPN_TypeDefinitionIndex = 34151;

	class CPLMJALJBPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPLMJALJBPN")->GetStaticField(0x22E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPLMJALJBPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLMJALJBPN*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLMJALJBPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPLMJALJBPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPLMJALJBPN* Clone()
		{
			return ((::CPLMJALJBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPLMJALJBPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPLMJALJBPN*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPLMJALJBPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLMJALJBPN*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPLMJALJBPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
