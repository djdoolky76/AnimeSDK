#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLPMAKIHAPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLPMAKIHAPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A0290)
#define LLPMAKIHAPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A04B0)
#define LLPMAKIHAPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99FEE0)
#define LLPMAKIHAPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99FEB0)
#define LLPMAKIHAPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99FEA0)
#define LLPMAKIHAPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A0010)
#define LLPMAKIHAPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99FF40)
#define LLPMAKIHAPL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E99FF30)
#define LLPMAKIHAPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A0180)
#define LLPMAKIHAPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99FE60)
#define LLPMAKIHAPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A0350)
#define LLPMAKIHAPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A0320)
#define LLPMAKIHAPL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E99FF20)
#define LLPMAKIHAPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99FE90)
#define LLPMAKIHAPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A01B0)
#define LLPMAKIHAPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A0210)

inline static constexpr unsigned int LLPMAKIHAPL_TypeDefinitionIndex = 29607;

	class LLPMAKIHAPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLPMAKIHAPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLPMAKIHAPL*>**)UnitySDK::FromName("", "LLPMAKIHAPL")->GetStaticField(0x4C6B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLPMAKIHAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLPMAKIHAPL*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPMAKIHAPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLPMAKIHAPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLPMAKIHAPL*>*(*)())((::PBYTE)hIl2Cpp + LLPMAKIHAPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLPMAKIHAPL* Clone()
		{
			return ((::LLPMAKIHAPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLPMAKIHAPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLPMAKIHAPL*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLPMAKIHAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLPMAKIHAPL*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLPMAKIHAPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
