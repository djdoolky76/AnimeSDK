#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class DMHDLBHJKOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMHDLBHJKOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201DE960)
#define DMHDLBHJKOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x201DEBB0)
#define DMHDLBHJKOG_CLONE_OFFSET UNITYSDK_OFFSET(0x201DE340)
#define DMHDLBHJKOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201DE2D0)
#define DMHDLBHJKOG_CTOR_OFFSET UNITYSDK_OFFSET(0x201DE2C0)
#define DMHDLBHJKOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201DE550)
#define DMHDLBHJKOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x201DE3E0)
#define DMHDLBHJKOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201DE820)
#define DMHDLBHJKOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201DE280)
#define DMHDLBHJKOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201DEA30)
#define DMHDLBHJKOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201DE9C0)
#define DMHDLBHJKOG_MFCKCOPELOH_OFFSET UNITYSDK_OFFSET(0x201DE3C0)
#define DMHDLBHJKOG_OPBOKNDHHME_OFFSET UNITYSDK_OFFSET(0x201DE3D0)
#define DMHDLBHJKOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201DE2B0)
#define DMHDLBHJKOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201DE870)
#define DMHDLBHJKOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x201DE8D0)

inline static constexpr unsigned int DMHDLBHJKOG_TypeDefinitionIndex = 34530;

	class DMHDLBHJKOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BMCNDLNONMO* JIBOHFJHOBA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DMHDLBHJKOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMHDLBHJKOG*>**)UnitySDK::FromName("", "DMHDLBHJKOG")->GetStaticField(0x34630);
		}

		// static const ::System::Object GFCDKOGDHAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMHDLBHJKOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHDLBHJKOG*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHDLBHJKOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMHDLBHJKOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMHDLBHJKOG*>*(*)())((::PBYTE)hIl2Cpp + DMHDLBHJKOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMHDLBHJKOG* Clone()
		{
			return ((::DMHDLBHJKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_CLONE_OFFSET))(this);
		}

		::BMCNDLNONMO* MFCKCOPELOH()
		{
			return ((::BMCNDLNONMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_MFCKCOPELOH_OFFSET))(this);
		}

		::System::Void OPBOKNDHHME(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_OPBOKNDHHME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMHDLBHJKOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMHDLBHJKOG*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMHDLBHJKOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHDLBHJKOG*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMHDLBHJKOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
