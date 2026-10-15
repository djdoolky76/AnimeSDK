#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INHMDFDBGCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INHMDFDBGCL_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E6C28F0)
#define INHMDFDBGCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C2E20)
#define INHMDFDBGCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3220)
#define INHMDFDBGCL_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1E6C2940)
#define INHMDFDBGCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C2860)
#define INHMDFDBGCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C2810)
#define INHMDFDBGCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C2800)
#define INHMDFDBGCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C2A60)
#define INHMDFDBGCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C29C0)
#define INHMDFDBGCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C2AF0)
#define INHMDFDBGCL_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E6C2910)
#define INHMDFDBGCL_IDKMBNILDOE_OFFSET UNITYSDK_OFFSET(0x1E6C2960)
#define INHMDFDBGCL_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E6C28E0)
#define INHMDFDBGCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C2790)
#define INHMDFDBGCL_KPPEBLNNKGL_OFFSET UNITYSDK_OFFSET(0x1E6C2930)
#define INHMDFDBGCL_LMHIIJPBFPJ_OFFSET UNITYSDK_OFFSET(0x1E6C2920)
#define INHMDFDBGCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C3130)
#define INHMDFDBGCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C30C0)
#define INHMDFDBGCL_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E6C2900)
#define INHMDFDBGCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C27F0)
#define INHMDFDBGCL_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1E6C2950)
#define INHMDFDBGCL_POKOHAJAPGC_OFFSET UNITYSDK_OFFSET(0x1E6C2970)
#define INHMDFDBGCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C2BC0)
#define INHMDFDBGCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C2C20)

inline static constexpr unsigned int INHMDFDBGCL_TypeDefinitionIndex = 25108;

	class INHMDFDBGCL : public ::System::Object
	{
	public:
		::System::String* FBGGEONJLHK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 ABGGFEAJHAH; // 0x20
		::System::UInt32 CGCDBPPFNIC; // 0x24
		::System::UInt32 GOHOKFAPDCI; // 0x28
		::System::Byte _padding0[0x4];
		::System::UInt64 DEJFOEHNFJA; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INHMDFDBGCL")->GetStaticField(0x58590);
		}

		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object PDFOJNFGMJF; // 0x0
		// static const ::System::Object HNCINKBJDIN; // 0x0
		// static const ::System::Object DKHFLGIGPCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INHMDFDBGCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHMDFDBGCL*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHMDFDBGCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INHMDFDBGCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INHMDFDBGCL* Clone()
		{
			return ((::INHMDFDBGCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_CLONE_OFFSET))(this);
		}

		::System::UInt64 IDNFENJBNPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INHMDFDBGCL_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INHMDFDBGCL_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 LMHIIJPBFPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_LMHIIJPBFPJ_OFFSET))(this);
		}

		::System::Void KPPEBLNNKGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INHMDFDBGCL_KPPEBLNNKGL_OFFSET))(this, a1);
		}

		::System::UInt32 CHGHEAPFJNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_CHGHEAPFJNJ_OFFSET))(this);
		}

		::System::Void PLEKFEEAHOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INHMDFDBGCL_PLEKFEEAHOD_OFFSET))(this, a1);
		}

		::System::String* IDKMBNILDOE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_IDKMBNILDOE_OFFSET))(this);
		}

		::System::Void POKOHAJAPGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_POKOHAJAPGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INHMDFDBGCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INHMDFDBGCL*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INHMDFDBGCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHMDFDBGCL*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INHMDFDBGCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
