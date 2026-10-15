#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCDIAAFICJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKCDIAAFICJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E87C0)
#define CKCDIAAFICJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8A70)
#define CKCDIAAFICJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E8160)
#define CKCDIAAFICJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E8120)
#define CKCDIAAFICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8110)
#define CKCDIAAFICJ_EJKADJBKBMH_OFFSET UNITYSDK_OFFSET(0x1E0E8210)
#define CKCDIAAFICJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E8270)
#define CKCDIAAFICJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E8240)
#define CKCDIAAFICJ_FMLMHCOIDEF_OFFSET UNITYSDK_OFFSET(0x1E0E8200)
#define CKCDIAAFICJ_FPIEMNBECEJ_OFFSET UNITYSDK_OFFSET(0x1E0E81F0)
#define CKCDIAAFICJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E8470)
#define CKCDIAAFICJ_GLMICFLDJGN_OFFSET UNITYSDK_OFFSET(0x1E0E8230)
#define CKCDIAAFICJ_JGDJGILDNJF_OFFSET UNITYSDK_OFFSET(0x1E0E81D0)
#define CKCDIAAFICJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E80D0)
#define CKCDIAAFICJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E89D0)
#define CKCDIAAFICJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E8960)
#define CKCDIAAFICJ_MKKBBCNLPLB_OFFSET UNITYSDK_OFFSET(0x1E0E8220)
#define CKCDIAAFICJ_NHLEHENDOFG_OFFSET UNITYSDK_OFFSET(0x1E0E81E0)
#define CKCDIAAFICJ_NNBAOEHFDJM_OFFSET UNITYSDK_OFFSET(0x1E0E81C0)
#define CKCDIAAFICJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8100)
#define CKCDIAAFICJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E85A0)
#define CKCDIAAFICJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E8600)

inline static constexpr unsigned int CKCDIAAFICJ_TypeDefinitionIndex = 25465;

	class CKCDIAAFICJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGJDACPDMJC; // 0x18
		::System::UInt32 MEPOEBNNJMI; // 0x1C
		::System::UInt32 BIJMCFAJICN; // 0x20
		::System::Byte _padding0[0x4];
		::System::Double IEAPEKCHGDN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CKCDIAAFICJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKCDIAAFICJ*>**)UnitySDK::FromName("", "CKCDIAAFICJ")->GetStaticField(0x1ABD0);
		}

		// static const ::System::Object AGGOGPLGGOE; // 0x0
		// static const ::System::Object JHBCBDIFNAD; // 0x0
		// static const ::System::Object EEBGACPLGOP; // 0x0
		// static const ::System::Object GGKIDFNALMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKCDIAAFICJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCDIAAFICJ*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCDIAAFICJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKCDIAAFICJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKCDIAAFICJ*>*(*)())((::PBYTE)hIl2Cpp + CKCDIAAFICJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKCDIAAFICJ* Clone()
		{
			return ((::CKCDIAAFICJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBAOEHFDJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_NNBAOEHFDJM_OFFSET))(this);
		}

		::System::Void JGDJGILDNJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_JGDJGILDNJF_OFFSET))(this, a1);
		}

		::System::Double NHLEHENDOFG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_NHLEHENDOFG_OFFSET))(this);
		}

		::System::Void FPIEMNBECEJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_FPIEMNBECEJ_OFFSET))(this, a1);
		}

		::System::UInt32 FMLMHCOIDEF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_FMLMHCOIDEF_OFFSET))(this);
		}

		::System::Void EJKADJBKBMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_EJKADJBKBMH_OFFSET))(this, a1);
		}

		::System::UInt32 MKKBBCNLPLB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_MKKBBCNLPLB_OFFSET))(this);
		}

		::System::Void GLMICFLDJGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_GLMICFLDJGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKCDIAAFICJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKCDIAAFICJ*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKCDIAAFICJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCDIAAFICJ*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKCDIAAFICJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
