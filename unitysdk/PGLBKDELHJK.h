#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGADDFICJF;
class PGLBKDELHJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGLBKDELHJK_ALHNMNOOHJO_OFFSET UNITYSDK_OFFSET(0x1DF33600)
#define PGLBKDELHJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF33A80)
#define PGLBKDELHJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF33E50)
#define PGLBKDELHJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF33580)
#define PGLBKDELHJK_CPPDBEGDKIC_OFFSET UNITYSDK_OFFSET(0x1DF335F0)
#define PGLBKDELHJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF334C0)
#define PGLBKDELHJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF33470)
#define PGLBKDELHJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF336A0)
#define PGLBKDELHJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF33640)
#define PGLBKDELHJK_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1DF33630)
#define PGLBKDELHJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF337E0)
#define PGLBKDELHJK_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1DF33620)
#define PGLBKDELHJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF33400)
#define PGLBKDELHJK_KDGOJNCOIHI_OFFSET UNITYSDK_OFFSET(0x1DF335D0)
#define PGLBKDELHJK_LACKJBJPJMP_OFFSET UNITYSDK_OFFSET(0x1DF33610)
#define PGLBKDELHJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF33D50)
#define PGLBKDELHJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF33C90)
#define PGLBKDELHJK_MNLNOFNJPLH_OFFSET UNITYSDK_OFFSET(0x1DF335E0)
#define PGLBKDELHJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF33460)
#define PGLBKDELHJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF33860)
#define PGLBKDELHJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF338C0)

	class PGLBKDELHJK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* DFGJDPPMADG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KAIJDAAEEFJ; // 0x20
		::System::UInt32 LPNGIMCHLJP; // 0x24
		::System::UInt32 AFHHMCKLLAJ; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGLBKDELHJK")->GetStaticField(0x3E480);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CAGCLDPEILE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PGLBKDELHJK")->GetStaticField(0x3E488);
		}

		// static const ::System::Object DNBIAMLIJNA; // 0x0
		// static const ::System::Object PAPFLAJDAMI; // 0x0
		// static const ::System::Object LDKBDGAGILL; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGLBKDELHJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGLBKDELHJK*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLBKDELHJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGLBKDELHJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGLBKDELHJK* Clone()
		{
			return ((::PGLBKDELHJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDGOJNCOIHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_KDGOJNCOIHI_OFFSET))(this);
		}

		::System::Void MNLNOFNJPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGLBKDELHJK_MNLNOFNJPLH_OFFSET))(this, a1);
		}

		::System::UInt32 CPPDBEGDKIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_CPPDBEGDKIC_OFFSET))(this);
		}

		::System::Void ALHNMNOOHJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGLBKDELHJK_ALHNMNOOHJO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* LACKJBJPJMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_LACKJBJPJMP_OFFSET))(this);
		}

		::System::UInt32 JBENBABCOGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGLBKDELHJK_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGLBKDELHJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGLBKDELHJK*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGLBKDELHJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGLBKDELHJK*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGLBKDELHJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
