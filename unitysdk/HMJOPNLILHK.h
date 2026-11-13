#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
class HMJOPNLILHK;
class LMLNNHKJEIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMJOPNLILHK_BGDEODOEPCK_OFFSET UNITYSDK_OFFSET(0x1FE1DDF0)
#define HMJOPNLILHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE1E3F0)
#define HMJOPNLILHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE1E7D0)
#define HMJOPNLILHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE1DDB0)
#define HMJOPNLILHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE1DC80)
#define HMJOPNLILHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1DC30)
#define HMJOPNLILHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE1E000)
#define HMJOPNLILHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE1DE10)
#define HMJOPNLILHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE1E1D0)
#define HMJOPNLILHK_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1FE1DDE0)
#define HMJOPNLILHK_IENELEDBGDH_OFFSET UNITYSDK_OFFSET(0x1FE1DE00)
#define HMJOPNLILHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE1DBF0)
#define HMJOPNLILHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE1E5F0)
#define HMJOPNLILHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE1E4D0)
#define HMJOPNLILHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE1DC20)
#define HMJOPNLILHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE1E270)
#define HMJOPNLILHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE1E2D0)

inline static constexpr unsigned int HMJOPNLILHK_TypeDefinitionIndex = 32179;

	class HMJOPNLILHK : public ::System::Object
	{
	public:
		::BFBHKJLJJBJ* JPDGFFGLNIM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HMJOPNLILHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMJOPNLILHK*>**)UnitySDK::FromName("", "HMJOPNLILHK")->GetStaticField(0x394A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "HMJOPNLILHK")->GetStaticField(0x394A8);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		// static const ::System::Object LDCMAAOCEGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMJOPNLILHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMJOPNLILHK*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMJOPNLILHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMJOPNLILHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMJOPNLILHK*>*(*)())((::PBYTE)hIl2Cpp + HMJOPNLILHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMJOPNLILHK* Clone()
		{
			return ((::HMJOPNLILHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_GOAHOGGOLOJ_OFFSET))(this);
		}

		::BFBHKJLJJBJ* BGDEODOEPCK()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_BGDEODOEPCK_OFFSET))(this);
		}

		::System::Void IENELEDBGDH(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_IENELEDBGDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMJOPNLILHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMJOPNLILHK*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMJOPNLILHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMJOPNLILHK*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMJOPNLILHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
