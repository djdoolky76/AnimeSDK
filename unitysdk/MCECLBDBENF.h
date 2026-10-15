#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBNBAEKGCJ;
class MCECLBDBENF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCECLBDBENF_BIOMPOFDGGC_OFFSET UNITYSDK_OFFSET(0x1E9F3DB0)
#define MCECLBDBENF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F4290)
#define MCECLBDBENF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F45A0)
#define MCECLBDBENF_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1E9F3DC0)
#define MCECLBDBENF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F3CE0)
#define MCECLBDBENF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F3C60)
#define MCECLBDBENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3C50)
#define MCECLBDBENF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F3F90)
#define MCECLBDBENF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F3DE0)
#define MCECLBDBENF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F4110)
#define MCECLBDBENF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F3BE0)
#define MCECLBDBENF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F43F0)
#define MCECLBDBENF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F4360)
#define MCECLBDBENF_OPGPALIJGJD_OFFSET UNITYSDK_OFFSET(0x1E9F3DA0)
#define MCECLBDBENF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3C40)
#define MCECLBDBENF_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1E9F3DD0)
#define MCECLBDBENF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F4150)
#define MCECLBDBENF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F41B0)

inline static constexpr unsigned int MCECLBDBENF_TypeDefinitionIndex = 34421;

	class MCECLBDBENF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LBBNBAEKGCJ* ABGGFEAJHAH; // 0x18
		::System::UInt32 IFEMNAFAHJP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MCECLBDBENF")->GetStaticField(0x471A0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MCECLBDBENF_JJGHOBBFNJD_OFFSET))();
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
