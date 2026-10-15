#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGMKGOIIFFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGMKGOIIFFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E382D30)
#define FGMKGOIIFFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E382F50)
#define FGMKGOIIFFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E382980)
#define FGMKGOIIFFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E382950)
#define FGMKGOIIFFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E382940)
#define FGMKGOIIFFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E382AB0)
#define FGMKGOIIFFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3829E0)
#define FGMKGOIIFFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3829D0)
#define FGMKGOIIFFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E382C20)
#define FGMKGOIIFFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E382900)
#define FGMKGOIIFFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E382DF0)
#define FGMKGOIIFFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E382DC0)
#define FGMKGOIIFFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3829C0)
#define FGMKGOIIFFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E382930)
#define FGMKGOIIFFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E382C50)
#define FGMKGOIIFFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E382CB0)

inline static constexpr unsigned int FGMKGOIIFFL_TypeDefinitionIndex = 29560;

	class FGMKGOIIFFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGMKGOIIFFL")->GetStaticField(0x5EAD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGMKGOIIFFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMKGOIIFFL*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGMKGOIIFFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGMKGOIIFFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGMKGOIIFFL* Clone()
		{
			return ((::FGMKGOIIFFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGMKGOIIFFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGMKGOIIFFL*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGMKGOIIFFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMKGOIIFFL*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGMKGOIIFFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
