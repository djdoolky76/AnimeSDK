#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKILAALMFIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKILAALMFIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73F5D0)
#define JKILAALMFIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73F7F0)
#define JKILAALMFIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73F220)
#define JKILAALMFIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73F1F0)
#define JKILAALMFIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73F1E0)
#define JKILAALMFIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73F350)
#define JKILAALMFIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73F280)
#define JKILAALMFIB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E73F270)
#define JKILAALMFIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73F4C0)
#define JKILAALMFIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73F1A0)
#define JKILAALMFIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73F690)
#define JKILAALMFIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73F660)
#define JKILAALMFIB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E73F260)
#define JKILAALMFIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73F1D0)
#define JKILAALMFIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73F4F0)
#define JKILAALMFIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73F550)

inline static constexpr unsigned int JKILAALMFIB_TypeDefinitionIndex = 34192;

	class JKILAALMFIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JKILAALMFIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKILAALMFIB*>**)UnitySDK::FromName("", "JKILAALMFIB")->GetStaticField(0x63590);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKILAALMFIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKILAALMFIB*))((::PBYTE)hIl2Cpp + JKILAALMFIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKILAALMFIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKILAALMFIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKILAALMFIB*>*(*)())((::PBYTE)hIl2Cpp + JKILAALMFIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKILAALMFIB* Clone()
		{
			return ((::JKILAALMFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKILAALMFIB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKILAALMFIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKILAALMFIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKILAALMFIB*))((::PBYTE)hIl2Cpp + JKILAALMFIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKILAALMFIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILAALMFIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKILAALMFIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKILAALMFIB*))((::PBYTE)hIl2Cpp + JKILAALMFIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKILAALMFIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
