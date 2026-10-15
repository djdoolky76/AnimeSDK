#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEDDGELBMJ;
class MKBBBFIDNNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKBBBFIDNNE_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1EA22C30)
#define MKBBBFIDNNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA23100)
#define MKBBBFIDNNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA234A0)
#define MKBBBFIDNNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA22BB0)
#define MKBBBFIDNNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA22B40)
#define MKBBBFIDNNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA22B30)
#define MKBBBFIDNNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA22DF0)
#define MKBBBFIDNNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA22C70)
#define MKBBBFIDNNE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA22C60)
#define MKBBBFIDNNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA22F70)
#define MKBBBFIDNNE_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1EA22C40)
#define MKBBBFIDNNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA22AF0)
#define MKBBBFIDNNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA232A0)
#define MKBBBFIDNNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA231D0)
#define MKBBBFIDNNE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA22C50)
#define MKBBBFIDNNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA22B20)
#define MKBBBFIDNNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA22FC0)
#define MKBBBFIDNNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA23020)

inline static constexpr unsigned int MKBBBFIDNNE_TypeDefinitionIndex = 27600;

	class MKBBBFIDNNE : public ::System::Object
	{
	public:
		::LCEDDGELBMJ* JIHIDBNIKAG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MKBBBFIDNNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKBBBFIDNNE*>**)UnitySDK::FromName("", "MKBBBFIDNNE")->GetStaticField(0x53DD0);
		}

		// static const ::System::Object MCEJJGELGPI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKBBBFIDNNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKBBBFIDNNE*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBBBFIDNNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKBBBFIDNNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKBBBFIDNNE*>*(*)())((::PBYTE)hIl2Cpp + MKBBBFIDNNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKBBBFIDNNE* Clone()
		{
			return ((::MKBBBFIDNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_CLONE_OFFSET))(this);
		}

		::LCEDDGELBMJ* BGHKDLONBOD()
		{
			return ((::LCEDDGELBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::LCEDDGELBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDDGELBMJ*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKBBBFIDNNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKBBBFIDNNE*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKBBBFIDNNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKBBBFIDNNE*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKBBBFIDNNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
