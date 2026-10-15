#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGKNADEDNHB;
class NNDKLIBALLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGKNADEDNHB_ABGIIPCBPNH_OFFSET UNITYSDK_OFFSET(0x1E73BA00)
#define JGKNADEDNHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73BF80)
#define JGKNADEDNHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73C4D0)
#define JGKNADEDNHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73B930)
#define JGKNADEDNHB_CPJOADGCCBL_OFFSET UNITYSDK_OFFSET(0x1E73B9D0)
#define JGKNADEDNHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73B800)
#define JGKNADEDNHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73B770)
#define JGKNADEDNHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73BA80)
#define JGKNADEDNHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73BA20)
#define JGKNADEDNHB_FKAOMFAFPGL_OFFSET UNITYSDK_OFFSET(0x1E73BA10)
#define JGKNADEDNHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73BB50)
#define JGKNADEDNHB_GNKDGCKMCIM_OFFSET UNITYSDK_OFFSET(0x1E73B9A0)
#define JGKNADEDNHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73B700)
#define JGKNADEDNHB_LBABGOHGKKK_OFFSET UNITYSDK_OFFSET(0x1E73B9C0)
#define JGKNADEDNHB_LMOENEMGBOC_OFFSET UNITYSDK_OFFSET(0x1E73B9F0)
#define JGKNADEDNHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73C330)
#define JGKNADEDNHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73C240)
#define JGKNADEDNHB_NLPOCKDPPLE_OFFSET UNITYSDK_OFFSET(0x1E73B9E0)
#define JGKNADEDNHB_OBLIAHICNFI_OFFSET UNITYSDK_OFFSET(0x1E73B990)
#define JGKNADEDNHB_OGEJENKCCCC_OFFSET UNITYSDK_OFFSET(0x1E73B980)
#define JGKNADEDNHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73B760)
#define JGKNADEDNHB_PEMFMJGHPLL_OFFSET UNITYSDK_OFFSET(0x1E73B9B0)
#define JGKNADEDNHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73BCB0)
#define JGKNADEDNHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73BD10)

inline static constexpr unsigned int JGKNADEDNHB_TypeDefinitionIndex = 31143;

	class JGKNADEDNHB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* NJLIDDBENAE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAFDIPIIECF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 DDJMNFDCGBE; // 0x28
		::System::UInt32 MMMECBKJGBA; // 0x2C
		::System::UInt32 HOFILLIDEJG; // 0x30
		::System::UInt32 ACDLLCLBIND; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x60AA0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OCNALEJMLFG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x60AA8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NFOGMGFHFCM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x60AB0);
		}

		// static const ::System::Object DHHDFBEEHKA; // 0x0
		// static const ::System::Object FFJOMEFEOLP; // 0x0
		// static const ::System::Object JMEKEJMJFPK; // 0x0
		// static const ::System::Object FHELLDEDAFF; // 0x0
		// static const ::System::Object MBFNJHBFNLH; // 0x0
		// static const ::System::Object KKFFDIOAPCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGKNADEDNHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGKNADEDNHB*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGKNADEDNHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGKNADEDNHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGKNADEDNHB* Clone()
		{
			return ((::JGKNADEDNHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* OGEJENKCCCC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_OGEJENKCCCC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBLIAHICNFI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_OBLIAHICNFI_OFFSET))(this);
		}

		::System::UInt32 GNKDGCKMCIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_GNKDGCKMCIM_OFFSET))(this);
		}

		::System::Void PEMFMJGHPLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGKNADEDNHB_PEMFMJGHPLL_OFFSET))(this, a1);
		}

		::System::UInt32 LBABGOHGKKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_LBABGOHGKKK_OFFSET))(this);
		}

		::System::Void CPJOADGCCBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGKNADEDNHB_CPJOADGCCBL_OFFSET))(this, a1);
		}

		::System::UInt32 NLPOCKDPPLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_NLPOCKDPPLE_OFFSET))(this);
		}

		::System::Void LMOENEMGBOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGKNADEDNHB_LMOENEMGBOC_OFFSET))(this, a1);
		}

		::System::UInt32 ABGIIPCBPNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_ABGIIPCBPNH_OFFSET))(this);
		}

		::System::Void FKAOMFAFPGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGKNADEDNHB_FKAOMFAFPGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGKNADEDNHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGKNADEDNHB*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGKNADEDNHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGKNADEDNHB*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGKNADEDNHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
