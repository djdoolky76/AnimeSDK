#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJICCPDKOHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJICCPDKOHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B1990)
#define CJICCPDKOHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1BB0)
#define CJICCPDKOHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B15E0)
#define CJICCPDKOHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B15B0)
#define CJICCPDKOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B15A0)
#define CJICCPDKOHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B1710)
#define CJICCPDKOHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B1640)
#define CJICCPDKOHF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0B1630)
#define CJICCPDKOHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B1880)
#define CJICCPDKOHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B1560)
#define CJICCPDKOHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B1A50)
#define CJICCPDKOHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B1A20)
#define CJICCPDKOHF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0B1620)
#define CJICCPDKOHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1590)
#define CJICCPDKOHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B18B0)
#define CJICCPDKOHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B1910)

inline static constexpr unsigned int CJICCPDKOHF_TypeDefinitionIndex = 26370;

	class CJICCPDKOHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJICCPDKOHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJICCPDKOHF*>**)UnitySDK::FromName("", "CJICCPDKOHF")->GetStaticField(0x183E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJICCPDKOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJICCPDKOHF*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJICCPDKOHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJICCPDKOHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJICCPDKOHF*>*(*)())((::PBYTE)hIl2Cpp + CJICCPDKOHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJICCPDKOHF* Clone()
		{
			return ((::CJICCPDKOHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJICCPDKOHF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJICCPDKOHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJICCPDKOHF*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJICCPDKOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJICCPDKOHF*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJICCPDKOHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
