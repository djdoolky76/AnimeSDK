#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIGNBOLGIGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIGNBOLGIGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27BAE0)
#define AIGNBOLGIGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27BDB0)
#define AIGNBOLGIGI_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E27B7A0)
#define AIGNBOLGIGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27B730)
#define AIGNBOLGIGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27B700)
#define AIGNBOLGIGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27B6F0)
#define AIGNBOLGIGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27B8A0)
#define AIGNBOLGIGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27B7C0)
#define AIGNBOLGIGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E27B790)
#define AIGNBOLGIGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27B970)
#define AIGNBOLGIGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27B6B0)
#define AIGNBOLGIGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27BC30)
#define AIGNBOLGIGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27BBF0)
#define AIGNBOLGIGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E27B780)
#define AIGNBOLGIGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27B6E0)
#define AIGNBOLGIGI_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E27B7B0)
#define AIGNBOLGIGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27B9A0)
#define AIGNBOLGIGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27BA00)

inline static constexpr unsigned int AIGNBOLGIGI_TypeDefinitionIndex = 29752;

	class AIGNBOLGIGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DNIPIFDDAAE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AIGNBOLGIGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIGNBOLGIGI*>**)UnitySDK::FromName("", "AIGNBOLGIGI")->GetStaticField(0x32D30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIGNBOLGIGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIGNBOLGIGI*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIGNBOLGIGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIGNBOLGIGI*>*(*)())((::PBYTE)hIl2Cpp + AIGNBOLGIGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIGNBOLGIGI* Clone()
		{
			return ((::AIGNBOLGIGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIGNBOLGIGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIGNBOLGIGI*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIGNBOLGIGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIGNBOLGIGI*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIGNBOLGIGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
