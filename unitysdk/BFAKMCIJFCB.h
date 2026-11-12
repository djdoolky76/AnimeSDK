#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOMHOLBACKF.h"
#include "unitysdk/System/Object.h"
class BFAKMCIJFCB;
class HJACHMJFEAH;
class IIONNFELFEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFAKMCIJFCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD28E90)
#define BFAKMCIJFCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD293A0)
#define BFAKMCIJFCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD28A50)
#define BFAKMCIJFCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD28990)
#define BFAKMCIJFCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD28930)
#define BFAKMCIJFCB_DLMPJKCAFJD_OFFSET UNITYSDK_OFFSET(0x1FD28AA0)
#define BFAKMCIJFCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD28AF0)
#define BFAKMCIJFCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD28AC0)
#define BFAKMCIJFCB_FEDGGIJKFFM_OFFSET UNITYSDK_OFFSET(0x1FD28A90)
#define BFAKMCIJFCB_FKILEIIDLDF_OFFSET UNITYSDK_OFFSET(0x1FD28A80)
#define BFAKMCIJFCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD28C40)
#define BFAKMCIJFCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD288F0)
#define BFAKMCIJFCB_KDHEEELJKHC_OFFSET UNITYSDK_OFFSET(0x1FD28AB0)
#define BFAKMCIJFCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD29130)
#define BFAKMCIJFCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD29020)
#define BFAKMCIJFCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD28920)
#define BFAKMCIJFCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD28CD0)
#define BFAKMCIJFCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD28D30)

inline static constexpr unsigned int BFAKMCIJFCB_TypeDefinitionIndex = 26375;

	class BFAKMCIJFCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IIONNFELFEF*>* OKOOFBPPLBK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::HJACHMJFEAH*>* LDKNOBGNCGC; // 0x20
		::BOMHOLBACKF JDJOIHPMLNM; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::IIONNFELFEF*>** StaticGet_DJPGACHNNGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::IIONNFELFEF*>**)UnitySDK::FromName("", "BFAKMCIJFCB")->GetStaticField(0x41530);
		}

		static ::Google::Protobuf::FieldCodec_1<::HJACHMJFEAH*>** StaticGet_MIPOIPIGOOB()
		{
			return (::Google::Protobuf::FieldCodec_1<::HJACHMJFEAH*>**)UnitySDK::FromName("", "BFAKMCIJFCB")->GetStaticField(0x41538);
		}

		static ::Google::Protobuf::MessageParser_1<::BFAKMCIJFCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BFAKMCIJFCB*>**)UnitySDK::FromName("", "BFAKMCIJFCB")->GetStaticField(0x41540);
		}

		// static const ::System::Object AKENAHLGHCJ; // 0x0
		// static const ::System::Object ILOLGKCJCIP; // 0x0
		// static const ::System::Object EIEHILCHDJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAKMCIJFCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BFAKMCIJFCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BFAKMCIJFCB*>*(*)())((::PBYTE)hIl2Cpp + BFAKMCIJFCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFAKMCIJFCB* Clone()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IIONNFELFEF*>* FKILEIIDLDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IIONNFELFEF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_FKILEIIDLDF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HJACHMJFEAH*>* FEDGGIJKFFM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HJACHMJFEAH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_FEDGGIJKFFM_OFFSET))(this);
		}

		::BOMHOLBACKF DLMPJKCAFJD()
		{
			return ((::BOMHOLBACKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_DLMPJKCAFJD_OFFSET))(this);
		}

		::System::Void KDHEEELJKHC(::BOMHOLBACKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMHOLBACKF))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_KDHEEELJKHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFAKMCIJFCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFAKMCIJFCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
