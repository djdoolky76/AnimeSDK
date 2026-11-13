#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCFOLGANFC;
class CABKLLAKHKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CABKLLAKHKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20348180)
#define CABKLLAKHKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x20348460)
#define CABKLLAKHKO_CLONE_OFFSET UNITYSDK_OFFSET(0x20347B60)
#define CABKLLAKHKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20347AF0)
#define CABKLLAKHKO_CTOR_OFFSET UNITYSDK_OFFSET(0x20347AE0)
#define CABKLLAKHKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20347D70)
#define CABKLLAKHKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20347C00)
#define CABKLLAKHKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20348040)
#define CABKLLAKHKO_ILJKBBALEGD_OFFSET UNITYSDK_OFFSET(0x20347BF0)
#define CABKLLAKHKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20347AA0)
#define CABKLLAKHKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20348290)
#define CABKLLAKHKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203481E0)
#define CABKLLAKHKO_NLBFHBPPACD_OFFSET UNITYSDK_OFFSET(0x20347BE0)
#define CABKLLAKHKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20347AD0)
#define CABKLLAKHKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20348090)
#define CABKLLAKHKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x203480F0)

inline static constexpr unsigned int CABKLLAKHKO_TypeDefinitionIndex = 34585;

	class CABKLLAKHKO : public ::System::Object
	{
	public:
		::AJCFOLGANFC* DCGOFIPPKNP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CABKLLAKHKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CABKLLAKHKO*>**)UnitySDK::FromName("", "CABKLLAKHKO")->GetStaticField(0x5F580);
		}

		// static const ::System::Object HHIGGAFBJFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CABKLLAKHKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABKLLAKHKO*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABKLLAKHKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CABKLLAKHKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CABKLLAKHKO*>*(*)())((::PBYTE)hIl2Cpp + CABKLLAKHKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CABKLLAKHKO* Clone()
		{
			return ((::CABKLLAKHKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_CLONE_OFFSET))(this);
		}

		::AJCFOLGANFC* NLBFHBPPACD()
		{
			return ((::AJCFOLGANFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_NLBFHBPPACD_OFFSET))(this);
		}

		::System::Void ILJKBBALEGD(::AJCFOLGANFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJCFOLGANFC*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_ILJKBBALEGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CABKLLAKHKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CABKLLAKHKO*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CABKLLAKHKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABKLLAKHKO*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CABKLLAKHKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
