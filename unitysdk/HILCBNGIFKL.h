#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILCBNGIFKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HILCBNGIFKL_ADNJGNLHNPF_OFFSET UNITYSDK_OFFSET(0x1E56C7E0)
#define HILCBNGIFKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56CB90)
#define HILCBNGIFKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56CF40)
#define HILCBNGIFKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56C740)
#define HILCBNGIFKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56C700)
#define HILCBNGIFKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56C6F0)
#define HILCBNGIFKL_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1E56C7C0)
#define HILCBNGIFKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56C860)
#define HILCBNGIFKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56C810)
#define HILCBNGIFKL_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1E56C7B0)
#define HILCBNGIFKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56C940)
#define HILCBNGIFKL_HBCHMEMOGGE_OFFSET UNITYSDK_OFFSET(0x1E56C7F0)
#define HILCBNGIFKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56C6B0)
#define HILCBNGIFKL_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1E56C790)
#define HILCBNGIFKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56CEA0)
#define HILCBNGIFKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56CE40)
#define HILCBNGIFKL_MIDPNAPKHEE_OFFSET UNITYSDK_OFFSET(0x1E56C7D0)
#define HILCBNGIFKL_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1E56C7A0)
#define HILCBNGIFKL_OCKFGGDNIOB_OFFSET UNITYSDK_OFFSET(0x1E56C800)
#define HILCBNGIFKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56C6E0)
#define HILCBNGIFKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56C9A0)
#define HILCBNGIFKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56CA00)

inline static constexpr unsigned int HILCBNGIFKL_TypeDefinitionIndex = 25305;

	class HILCBNGIFKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 MFHNPAODGGN; // 0x18
		::System::Int64 GFNEFHEHFOC; // 0x20
		::System::UInt32 JPGEGCNOJJC; // 0x28
		::System::UInt32 APBOGHGFGLC; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::HILCBNGIFKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HILCBNGIFKL*>**)UnitySDK::FromName("", "HILCBNGIFKL")->GetStaticField(0x34500);
		}

		// static const ::System::Object INPMBLCHNGN; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object EGOMBEJDAMI; // 0x0
		// static const ::System::Object OKCNBHOLMKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HILCBNGIFKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILCBNGIFKL*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILCBNGIFKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HILCBNGIFKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HILCBNGIFKL*>*(*)())((::PBYTE)hIl2Cpp + HILCBNGIFKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HILCBNGIFKL* Clone()
		{
			return ((::HILCBNGIFKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_CLONE_OFFSET))(this);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HILCBNGIFKL_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HILCBNGIFKL_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 MIDPNAPKHEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_MIDPNAPKHEE_OFFSET))(this);
		}

		::System::Void ADNJGNLHNPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HILCBNGIFKL_ADNJGNLHNPF_OFFSET))(this, a1);
		}

		::System::UInt32 HBCHMEMOGGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_HBCHMEMOGGE_OFFSET))(this);
		}

		::System::Void OCKFGGDNIOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HILCBNGIFKL_OCKFGGDNIOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HILCBNGIFKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HILCBNGIFKL*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCBNGIFKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HILCBNGIFKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILCBNGIFKL*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HILCBNGIFKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
