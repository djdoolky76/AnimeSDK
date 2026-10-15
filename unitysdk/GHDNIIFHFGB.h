#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHDNIIFHFGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHDNIIFHFGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E486340)
#define GHDNIIFHFGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4863E0)
#define GHDNIIFHFGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E486030)
#define GHDNIIFHFGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E486000)
#define GHDNIIFHFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485FF0)
#define GHDNIIFHFGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E486140)
#define GHDNIIFHFGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E486070)
#define GHDNIIFHFGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4862A0)
#define GHDNIIFHFGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E485FB0)
#define GHDNIIFHFGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E486390)
#define GHDNIIFHFGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E486360)
#define GHDNIIFHFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E485FE0)
#define GHDNIIFHFGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4862D0)
#define GHDNIIFHFGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E486330)

inline static constexpr unsigned int GHDNIIFHFGB_TypeDefinitionIndex = 27663;

	class GHDNIIFHFGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GHDNIIFHFGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHDNIIFHFGB*>**)UnitySDK::FromName("", "GHDNIIFHFGB")->GetStaticField(0x16C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHDNIIFHFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHDNIIFHFGB*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHDNIIFHFGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHDNIIFHFGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHDNIIFHFGB*>*(*)())((::PBYTE)hIl2Cpp + GHDNIIFHFGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHDNIIFHFGB* Clone()
		{
			return ((::GHDNIIFHFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHDNIIFHFGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHDNIIFHFGB*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHDNIIFHFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHDNIIFHFGB*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHDNIIFHFGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
