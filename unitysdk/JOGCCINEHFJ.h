#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGCCINEHFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOGCCINEHFJ_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E773B60)
#define JOGCCINEHFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7740F0)
#define JOGCCINEHFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E774430)
#define JOGCCINEHFJ_CGFKMJKGOLB_OFFSET UNITYSDK_OFFSET(0x1E773B40)
#define JOGCCINEHFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E773AE0)
#define JOGCCINEHFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E773A40)
#define JOGCCINEHFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7739F0)
#define JOGCCINEHFJ_EMLAPANCIIN_OFFSET UNITYSDK_OFFSET(0x1E773B80)
#define JOGCCINEHFJ_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E773B70)
#define JOGCCINEHFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E773C90)
#define JOGCCINEHFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E773BC0)
#define JOGCCINEHFJ_FBGGMMOPFLD_OFFSET UNITYSDK_OFFSET(0x1E773B90)
#define JOGCCINEHFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E773D20)
#define JOGCCINEHFJ_GKPNLAHPANG_OFFSET UNITYSDK_OFFSET(0x1E773BB0)
#define JOGCCINEHFJ_HANDMGBEFAC_OFFSET UNITYSDK_OFFSET(0x1E773B30)
#define JOGCCINEHFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E773980)
#define JOGCCINEHFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E774300)
#define JOGCCINEHFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E774290)
#define JOGCCINEHFJ_NEOCEJLIKMO_OFFSET UNITYSDK_OFFSET(0x1E773BA0)
#define JOGCCINEHFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7739E0)
#define JOGCCINEHFJ_PNDOLKGIOJG_OFFSET UNITYSDK_OFFSET(0x1E773B50)
#define JOGCCINEHFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E773E20)
#define JOGCCINEHFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E773E80)

inline static constexpr unsigned int JOGCCINEHFJ_TypeDefinitionIndex = 28263;

	class JOGCCINEHFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBAEPLPKCEE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean DNOCKOFLBGL; // 0x20
		::System::Boolean PKAIDPLAHPJ; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 NPFBAFODCBI; // 0x24
		::System::UInt32 CPCECHCLLOP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FGJLNNADMLL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JOGCCINEHFJ")->GetStaticField(0x1DEA0);
		}

		static ::Google::Protobuf::MessageParser_1<::JOGCCINEHFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOGCCINEHFJ*>**)UnitySDK::FromName("", "JOGCCINEHFJ")->GetStaticField(0x1DEA8);
		}

		// static const ::System::Object FABEMBPPBIC; // 0x0
		// static const ::System::Object CKEBDAILMIG; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object LEONMDAONEB; // 0x0
		// static const ::System::Object INAPHALIKEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOGCCINEHFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGCCINEHFJ*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOGCCINEHFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOGCCINEHFJ*>*(*)())((::PBYTE)hIl2Cpp + JOGCCINEHFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOGCCINEHFJ* Clone()
		{
			return ((::JOGCCINEHFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HANDMGBEFAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_HANDMGBEFAC_OFFSET))(this);
		}

		::System::Void CGFKMJKGOLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CGFKMJKGOLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNDOLKGIOJG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_PNDOLKGIOJG_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean EMLAPANCIIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_EMLAPANCIIN_OFFSET))(this);
		}

		::System::Void FBGGMMOPFLD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_FBGGMMOPFLD_OFFSET))(this, a1);
		}

		::System::Boolean NEOCEJLIKMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_NEOCEJLIKMO_OFFSET))(this);
		}

		::System::Void GKPNLAHPANG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_GKPNLAHPANG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOGCCINEHFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGCCINEHFJ*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOGCCINEHFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGCCINEHFJ*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOGCCINEHFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
