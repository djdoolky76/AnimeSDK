#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICNPODONHGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICNPODONHGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F9120)
#define ICNPODONHGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F93F0)
#define ICNPODONHGN_CJLMJHCHKHN_OFFSET UNITYSDK_OFFSET(0x1E5F8DD0)
#define ICNPODONHGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F8D70)
#define ICNPODONHGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F8D40)
#define ICNPODONHGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8D30)
#define ICNPODONHGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F8EE0)
#define ICNPODONHGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F8E00)
#define ICNPODONHGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F8FB0)
#define ICNPODONHGN_IAJKFOOGAIG_OFFSET UNITYSDK_OFFSET(0x1E5F8DF0)
#define ICNPODONHGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F8CF0)
#define ICNPODONHGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F9270)
#define ICNPODONHGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F9230)
#define ICNPODONHGN_MPAPGAGAOGK_OFFSET UNITYSDK_OFFSET(0x1E5F8DE0)
#define ICNPODONHGN_PBIJKOCGLEO_OFFSET UNITYSDK_OFFSET(0x1E5F8DC0)
#define ICNPODONHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8D20)
#define ICNPODONHGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F8FE0)
#define ICNPODONHGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F9040)

inline static constexpr unsigned int ICNPODONHGN_TypeDefinitionIndex = 33511;

	class ICNPODONHGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJELDLFFFOM; // 0x18
		::System::UInt32 CACDFJOCAHL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ICNPODONHGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICNPODONHGN*>**)UnitySDK::FromName("", "ICNPODONHGN")->GetStaticField(0x45720);
		}

		// static const ::System::Object JLMDACLBIAF; // 0x0
		// static const ::System::Object NEJHACHDJLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICNPODONHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICNPODONHGN*))((::PBYTE)hIl2Cpp + ICNPODONHGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICNPODONHGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICNPODONHGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICNPODONHGN*>*(*)())((::PBYTE)hIl2Cpp + ICNPODONHGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICNPODONHGN* Clone()
		{
			return ((::ICNPODONHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBIJKOCGLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_PBIJKOCGLEO_OFFSET))(this);
		}

		::System::Void CJLMJHCHKHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNPODONHGN_CJLMJHCHKHN_OFFSET))(this, a1);
		}

		::System::UInt32 MPAPGAGAOGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_MPAPGAGAOGK_OFFSET))(this);
		}

		::System::Void IAJKFOOGAIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNPODONHGN_IAJKFOOGAIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICNPODONHGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICNPODONHGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICNPODONHGN*))((::PBYTE)hIl2Cpp + ICNPODONHGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICNPODONHGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICNPODONHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICNPODONHGN*))((::PBYTE)hIl2Cpp + ICNPODONHGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICNPODONHGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
