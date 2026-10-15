#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBNBAEKGCJ;
class MCECLBDBENF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCECLBDBENF_BIOMPOFDGGC_OFFSET UNITYSDK_OFFSET(0x1E9C66F0)
#define MCECLBDBENF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C6BD0)
#define MCECLBDBENF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6EE0)
#define MCECLBDBENF_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1E9C6700)
#define MCECLBDBENF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C6620)
#define MCECLBDBENF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C65A0)
#define MCECLBDBENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6590)
#define MCECLBDBENF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C68D0)
#define MCECLBDBENF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C6720)
#define MCECLBDBENF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C6A50)
#define MCECLBDBENF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C6520)
#define MCECLBDBENF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C6D30)
#define MCECLBDBENF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C6CA0)
#define MCECLBDBENF_OPGPALIJGJD_OFFSET UNITYSDK_OFFSET(0x1E9C66E0)
#define MCECLBDBENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6580)
#define MCECLBDBENF_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1E9C6710)
#define MCECLBDBENF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C6A90)
#define MCECLBDBENF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C6AF0)

inline static constexpr unsigned int MCECLBDBENF_TypeDefinitionIndex = 34421;

	class MCECLBDBENF : public ::System::Object
	{
	public:
		::LBBNBAEKGCJ* ABGGFEAJHAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IFEMNAFAHJP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MCECLBDBENF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCECLBDBENF*>**)UnitySDK::FromName("", "MCECLBDBENF")->GetStaticField(0x498D0);
		}

		// static const ::System::Object CCJMPCEINLN; // 0x0
		// static const ::System::Object HNCINKBJDIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCECLBDBENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCECLBDBENF*))((::PBYTE)hIl2Cpp + MCECLBDBENF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCECLBDBENF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCECLBDBENF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCECLBDBENF*>*(*)())((::PBYTE)hIl2Cpp + MCECLBDBENF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCECLBDBENF* Clone()
		{
			return ((::MCECLBDBENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPGPALIJGJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_OPGPALIJGJD_OFFSET))(this);
		}

		::System::Void BIOMPOFDGGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCECLBDBENF_BIOMPOFDGGC_OFFSET))(this, a1);
		}

		::LBBNBAEKGCJ* CHGHEAPFJNJ()
		{
			return ((::LBBNBAEKGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_CHGHEAPFJNJ_OFFSET))(this);
		}

		::System::Void PLEKFEEAHOD(::LBBNBAEKGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBNBAEKGCJ*))((::PBYTE)hIl2Cpp + MCECLBDBENF_PLEKFEEAHOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCECLBDBENF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCECLBDBENF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCECLBDBENF*))((::PBYTE)hIl2Cpp + MCECLBDBENF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCECLBDBENF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCECLBDBENF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCECLBDBENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCECLBDBENF*))((::PBYTE)hIl2Cpp + MCECLBDBENF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCECLBDBENF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
