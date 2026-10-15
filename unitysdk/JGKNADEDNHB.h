#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGKNADEDNHB;
class NNDKLIBALLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGKNADEDNHB_ABGIIPCBPNH_OFFSET UNITYSDK_OFFSET(0x1E70E3E0)
#define JGKNADEDNHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70E960)
#define JGKNADEDNHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70EEB0)
#define JGKNADEDNHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70E310)
#define JGKNADEDNHB_CPJOADGCCBL_OFFSET UNITYSDK_OFFSET(0x1E70E3B0)
#define JGKNADEDNHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70E1E0)
#define JGKNADEDNHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70E150)
#define JGKNADEDNHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70E460)
#define JGKNADEDNHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70E400)
#define JGKNADEDNHB_FKAOMFAFPGL_OFFSET UNITYSDK_OFFSET(0x1E70E3F0)
#define JGKNADEDNHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70E530)
#define JGKNADEDNHB_GNKDGCKMCIM_OFFSET UNITYSDK_OFFSET(0x1E70E380)
#define JGKNADEDNHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70E0E0)
#define JGKNADEDNHB_LBABGOHGKKK_OFFSET UNITYSDK_OFFSET(0x1E70E3A0)
#define JGKNADEDNHB_LMOENEMGBOC_OFFSET UNITYSDK_OFFSET(0x1E70E3D0)
#define JGKNADEDNHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70ED10)
#define JGKNADEDNHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70EC20)
#define JGKNADEDNHB_NLPOCKDPPLE_OFFSET UNITYSDK_OFFSET(0x1E70E3C0)
#define JGKNADEDNHB_OBLIAHICNFI_OFFSET UNITYSDK_OFFSET(0x1E70E370)
#define JGKNADEDNHB_OGEJENKCCCC_OFFSET UNITYSDK_OFFSET(0x1E70E360)
#define JGKNADEDNHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70E140)
#define JGKNADEDNHB_PEMFMJGHPLL_OFFSET UNITYSDK_OFFSET(0x1E70E390)
#define JGKNADEDNHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70E690)
#define JGKNADEDNHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70E6F0)

inline static constexpr unsigned int JGKNADEDNHB_TypeDefinitionIndex = 31143;

	class JGKNADEDNHB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAFDIPIIECF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* NJLIDDBENAE; // 0x20
		::System::UInt32 DDJMNFDCGBE; // 0x28
		::System::UInt32 HOFILLIDEJG; // 0x2C
		::System::UInt32 MMMECBKJGBA; // 0x30
		::System::UInt32 ACDLLCLBIND; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OCNALEJMLFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x5E7B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NNDKLIBALLC*>** StaticGet_NFOGMGFHFCM()
		{
			return (::Google::Protobuf::FieldCodec_1<::NNDKLIBALLC*>**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x5E7B8);
		}

		static ::Google::Protobuf::MessageParser_1<::JGKNADEDNHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGKNADEDNHB*>**)UnitySDK::FromName("", "JGKNADEDNHB")->GetStaticField(0x5E7C0);
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

		static ::Google::Protobuf::MessageParser_1<::JGKNADEDNHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGKNADEDNHB*>*(*)())((::PBYTE)hIl2Cpp + JGKNADEDNHB_JJGHOBBFNJD_OFFSET))();
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
