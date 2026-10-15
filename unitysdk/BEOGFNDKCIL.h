#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEOGFNDKCIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BEOGFNDKCIL_AAPDNNOGAJF_OFFSET UNITYSDK_OFFSET(0x1EA37DE0)
#define BEOGFNDKCIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA38150)
#define BEOGFNDKCIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA38370)
#define BEOGFNDKCIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA37DA0)
#define BEOGFNDKCIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA37D70)
#define BEOGFNDKCIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA37D60)
#define BEOGFNDKCIL_EMJOCDGPDGE_OFFSET UNITYSDK_OFFSET(0x1EA37DF0)
#define BEOGFNDKCIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA37ED0)
#define BEOGFNDKCIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA37E00)
#define BEOGFNDKCIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA38040)
#define BEOGFNDKCIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA37D20)
#define BEOGFNDKCIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA38210)
#define BEOGFNDKCIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA381E0)
#define BEOGFNDKCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA37D50)
#define BEOGFNDKCIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA38070)
#define BEOGFNDKCIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA380D0)

inline static constexpr unsigned int BEOGFNDKCIL_TypeDefinitionIndex = 28760;

	class BEOGFNDKCIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NKFNGEMOKPF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BEOGFNDKCIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BEOGFNDKCIL*>**)UnitySDK::FromName("", "BEOGFNDKCIL")->GetStaticField(0x536B0);
		}

		// static const ::System::Object KCFPOKBCCDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEOGFNDKCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEOGFNDKCIL*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEOGFNDKCIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BEOGFNDKCIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BEOGFNDKCIL*>*(*)())((::PBYTE)hIl2Cpp + BEOGFNDKCIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEOGFNDKCIL* Clone()
		{
			return ((::BEOGFNDKCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 AAPDNNOGAJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_AAPDNNOGAJF_OFFSET))(this);
		}

		::System::Void EMJOCDGPDGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_EMJOCDGPDGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEOGFNDKCIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEOGFNDKCIL*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEOGFNDKCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEOGFNDKCIL*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEOGFNDKCIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
