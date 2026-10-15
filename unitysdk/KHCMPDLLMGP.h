#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
class KHCMPDLLMGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHCMPDLLMGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E840AD0)
#define KHCMPDLLMGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E840E00)
#define KHCMPDLLMGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E840630)
#define KHCMPDLLMGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E840590)
#define KHCMPDLLMGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E840550)
#define KHCMPDLLMGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8406E0)
#define KHCMPDLLMGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8406B0)
#define KHCMPDLLMGP_FEBAOCMDGFM_OFFSET UNITYSDK_OFFSET(0x1E840690)
#define KHCMPDLLMGP_FMFLMCKMOMD_OFFSET UNITYSDK_OFFSET(0x1E8406A0)
#define KHCMPDLLMGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E840820)
#define KHCMPDLLMGP_ILEHHEHGOBB_OFFSET UNITYSDK_OFFSET(0x1E840670)
#define KHCMPDLLMGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E840510)
#define KHCMPDLLMGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E840C20)
#define KHCMPDLLMGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E840B70)
#define KHCMPDLLMGP_MLOCALKDFEC_OFFSET UNITYSDK_OFFSET(0x1E840660)
#define KHCMPDLLMGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E840540)
#define KHCMPDLLMGP_PNOIKPDCGPG_OFFSET UNITYSDK_OFFSET(0x1E840680)
#define KHCMPDLLMGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8408A0)
#define KHCMPDLLMGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E840900)

	class KHCMPDLLMGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DBLILHCLPPL*>* EDDBOMHAAHL; // 0x18
		::System::Boolean DMICDKMEIOD; // 0x20
		::System::Boolean KDGPPMMFOJI; // 0x21
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHCMPDLLMGP")->GetStaticField(0x170A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FMCALLPGEOL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KHCMPDLLMGP")->GetStaticField(0x170A8);
		}

		// static const ::System::Object ODFFMPHLHKB; // 0x0
		// static const ::System::Object BDOOMCGOGOM; // 0x0
		// static const ::System::Object HPHPJAFDBHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHCMPDLLMGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHCMPDLLMGP*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCMPDLLMGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHCMPDLLMGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHCMPDLLMGP* Clone()
		{
			return ((::KHCMPDLLMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_CLONE_OFFSET))(this);
		}

		::System::Boolean MLOCALKDFEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_MLOCALKDFEC_OFFSET))(this);
		}

		::System::Void ILEHHEHGOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_ILEHHEHGOBB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DBLILHCLPPL*>* PNOIKPDCGPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DBLILHCLPPL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_PNOIKPDCGPG_OFFSET))(this);
		}

		::System::Boolean FEBAOCMDGFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_FEBAOCMDGFM_OFFSET))(this);
		}

		::System::Void FMFLMCKMOMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_FMFLMCKMOMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHCMPDLLMGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHCMPDLLMGP*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHCMPDLLMGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHCMPDLLMGP*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHCMPDLLMGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
