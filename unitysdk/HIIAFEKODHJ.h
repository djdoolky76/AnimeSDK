#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIAFEKODHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIIAFEKODHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E595F80)
#define HIIAFEKODHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5961A0)
#define HIIAFEKODHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E595BD0)
#define HIIAFEKODHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E595BA0)
#define HIIAFEKODHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E595B90)
#define HIIAFEKODHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E595D00)
#define HIIAFEKODHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E595C30)
#define HIIAFEKODHJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E595C20)
#define HIIAFEKODHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E595E70)
#define HIIAFEKODHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E595B50)
#define HIIAFEKODHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E596040)
#define HIIAFEKODHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E596010)
#define HIIAFEKODHJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E595C10)
#define HIIAFEKODHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E595B80)
#define HIIAFEKODHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E595EA0)
#define HIIAFEKODHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E595F00)

inline static constexpr unsigned int HIIAFEKODHJ_TypeDefinitionIndex = 26402;

	class HIIAFEKODHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIIAFEKODHJ")->GetStaticField(0x3CFA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIIAFEKODHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIAFEKODHJ*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIAFEKODHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIIAFEKODHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIIAFEKODHJ* Clone()
		{
			return ((::HIIAFEKODHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIIAFEKODHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIIAFEKODHJ*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIIAFEKODHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIAFEKODHJ*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIIAFEKODHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
