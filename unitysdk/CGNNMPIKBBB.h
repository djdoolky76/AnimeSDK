#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNNMPIKBBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGNNMPIKBBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E089C80)
#define CGNNMPIKBBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08A0A0)
#define CGNNMPIKBBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E089810)
#define CGNNMPIKBBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0897D0)
#define CGNNMPIKBBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0897C0)
#define CGNNMPIKBBB_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1E089870)
#define CGNNMPIKBBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0899A0)
#define CGNNMPIKBBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0898C0)
#define CGNNMPIKBBB_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1E089860)
#define CGNNMPIKBBB_GACICMLAJKF_OFFSET UNITYSDK_OFFSET(0x1E0898A0)
#define CGNNMPIKBBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E089A80)
#define CGNNMPIKBBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E089780)
#define CGNNMPIKBBB_LBDMOIIHMCN_OFFSET UNITYSDK_OFFSET(0x1E0898B0)
#define CGNNMPIKBBB_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1E089880)
#define CGNNMPIKBBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E089F00)
#define CGNNMPIKBBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E089EB0)
#define CGNNMPIKBBB_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1E089890)
#define CGNNMPIKBBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0897B0)
#define CGNNMPIKBBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E089AE0)
#define CGNNMPIKBBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E089B40)

inline static constexpr unsigned int CGNNMPIKBBB_TypeDefinitionIndex = 32662;

	class CGNNMPIKBBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 MFHNPAODGGN; // 0x18
		::System::UInt32 GHPODDOILHM; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 GFNEFHEHFOC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CGNNMPIKBBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGNNMPIKBBB*>**)UnitySDK::FromName("", "CGNNMPIKBBB")->GetStaticField(0x140B0);
		}

		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		// static const ::System::Object NNCIDOOJFBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGNNMPIKBBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNNMPIKBBB*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNNMPIKBBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGNNMPIKBBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGNNMPIKBBB*>*(*)())((::PBYTE)hIl2Cpp + CGNNMPIKBBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGNNMPIKBBB* Clone()
		{
			return ((::CGNNMPIKBBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_CLONE_OFFSET))(this);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::UInt32 GACICMLAJKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_GACICMLAJKF_OFFSET))(this);
		}

		::System::Void LBDMOIIHMCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_LBDMOIIHMCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGNNMPIKBBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGNNMPIKBBB*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGNNMPIKBBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNNMPIKBBB*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGNNMPIKBBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
