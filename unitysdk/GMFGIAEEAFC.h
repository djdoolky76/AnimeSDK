#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMFGIAEEAFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMFGIAEEAFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D1410)
#define GMFGIAEEAFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D14B0)
#define GMFGIAEEAFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D1100)
#define GMFGIAEEAFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D10D0)
#define GMFGIAEEAFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D10C0)
#define GMFGIAEEAFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D1210)
#define GMFGIAEEAFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D1140)
#define GMFGIAEEAFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D1370)
#define GMFGIAEEAFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D1080)
#define GMFGIAEEAFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D1460)
#define GMFGIAEEAFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D1430)
#define GMFGIAEEAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D10B0)
#define GMFGIAEEAFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D13A0)
#define GMFGIAEEAFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D1400)

inline static constexpr unsigned int GMFGIAEEAFC_TypeDefinitionIndex = 32696;

	class GMFGIAEEAFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GMFGIAEEAFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMFGIAEEAFC*>**)UnitySDK::FromName("", "GMFGIAEEAFC")->GetStaticField(0x218C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMFGIAEEAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFGIAEEAFC*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFGIAEEAFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMFGIAEEAFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMFGIAEEAFC*>*(*)())((::PBYTE)hIl2Cpp + GMFGIAEEAFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMFGIAEEAFC* Clone()
		{
			return ((::GMFGIAEEAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMFGIAEEAFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMFGIAEEAFC*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMFGIAEEAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFGIAEEAFC*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMFGIAEEAFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
