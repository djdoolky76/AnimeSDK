#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDODFHMDAJI;
class KNMNEJCMHGE;
class MAEEIBPEOFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDODFHMDAJI_ABLJICHDECC_OFFSET UNITYSDK_OFFSET(0x1E806AB0)
#define KDODFHMDAJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E807040)
#define KDODFHMDAJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E807490)
#define KDODFHMDAJI_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E806A80)
#define KDODFHMDAJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8069E0)
#define KDODFHMDAJI_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E806A30)
#define KDODFHMDAJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8068E0)
#define KDODFHMDAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8068A0)
#define KDODFHMDAJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E806AF0)
#define KDODFHMDAJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E806AC0)
#define KDODFHMDAJI_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E806A40)
#define KDODFHMDAJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E806C70)
#define KDODFHMDAJI_HDBPBNHDOPH_OFFSET UNITYSDK_OFFSET(0x1E806A20)
#define KDODFHMDAJI_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x1E806A90)
#define KDODFHMDAJI_IIOCFJBOAIK_OFFSET UNITYSDK_OFFSET(0x1E806A10)
#define KDODFHMDAJI_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E806A70)
#define KDODFHMDAJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E806860)
#define KDODFHMDAJI_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1E806A50)
#define KDODFHMDAJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E807350)
#define KDODFHMDAJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E807210)
#define KDODFHMDAJI_MOAKACHAAMM_OFFSET UNITYSDK_OFFSET(0x1E806A60)
#define KDODFHMDAJI_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x1E806AA0)
#define KDODFHMDAJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E806890)
#define KDODFHMDAJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E806D00)
#define KDODFHMDAJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E806D60)

inline static constexpr unsigned int KDODFHMDAJI_TypeDefinitionIndex = 33276;

	class KDODFHMDAJI : public ::System::Object
	{
	public:
		::KNMNEJCMHGE* NMABHKCOLCM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MAEEIBPEOFN*>* IBKGDBEBHBB; // 0x20
		::System::UInt32 OGCMNCBOEJG; // 0x28
		::System::Boolean OMNLDFMILAK; // 0x2C
		::System::Boolean PFLGHHDHBDB; // 0x2D
		::System::Byte _padding0[0x2];
		::System::UInt32 FCFAAGHOMDN; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_IOAHGHLKHIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KDODFHMDAJI")->GetStaticField(0x115F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDODFHMDAJI")->GetStaticField(0x115F8);
		}

		// static const ::System::Object EAJEBFGCOMK; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object LDBJJPBGLNG; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object JOIMLOCMAMK; // 0x0
		// static const ::System::Object JOBJPGCNNCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDODFHMDAJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDODFHMDAJI*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDODFHMDAJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDODFHMDAJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDODFHMDAJI* Clone()
		{
			return ((::KDODFHMDAJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIOCFJBOAIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_IIOCFJBOAIK_OFFSET))(this);
		}

		::System::Void HDBPBNHDOPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDODFHMDAJI_HDBPBNHDOPH_OFFSET))(this, a1);
		}

		::KNMNEJCMHGE* CPEEIHDCIFD()
		{
			return ((::KNMNEJCMHGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::KNMNEJCMHGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNMNEJCMHGE*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void MOAKACHAAMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDODFHMDAJI_MOAKACHAAMM_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDODFHMDAJI_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MAEEIBPEOFN*>* ABLJICHDECC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MAEEIBPEOFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_ABLJICHDECC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDODFHMDAJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDODFHMDAJI*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDODFHMDAJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDODFHMDAJI*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDODFHMDAJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
