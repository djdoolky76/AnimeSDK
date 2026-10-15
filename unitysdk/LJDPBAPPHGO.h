#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEGFFGKMFJJ;
class LJDPBAPPHGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJDPBAPPHGO_BDJGPFFPIFL_OFFSET UNITYSDK_OFFSET(0x1E978650)
#define LJDPBAPPHGO_BGBPDJCOGDC_OFFSET UNITYSDK_OFFSET(0x1E978610)
#define LJDPBAPPHGO_BPGNOOMHNPL_OFFSET UNITYSDK_OFFSET(0x1E978640)
#define LJDPBAPPHGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E978BE0)
#define LJDPBAPPHGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E979150)
#define LJDPBAPPHGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9785E0)
#define LJDPBAPPHGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9784D0)
#define LJDPBAPPHGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E978450)
#define LJDPBAPPHGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9786E0)
#define LJDPBAPPHGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9786B0)
#define LJDPBAPPHGO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E978670)
#define LJDPBAPPHGO_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E978680)
#define LJDPBAPPHGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9787C0)
#define LJDPBAPPHGO_HPBINICLCJA_OFFSET UNITYSDK_OFFSET(0x1E978630)
#define LJDPBAPPHGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E978410)
#define LJDPBAPPHGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E978FC0)
#define LJDPBAPPHGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E978ED0)
#define LJDPBAPPHGO_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E978690)
#define LJDPBAPPHGO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E978660)
#define LJDPBAPPHGO_OOILECLEOMP_OFFSET UNITYSDK_OFFSET(0x1E9786A0)
#define LJDPBAPPHGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E978440)
#define LJDPBAPPHGO_PHNLLAKMJJP_OFFSET UNITYSDK_OFFSET(0x1E978620)
#define LJDPBAPPHGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E978910)
#define LJDPBAPPHGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E978970)

inline static constexpr unsigned int LJDPBAPPHGO_TypeDefinitionIndex = 27699;

	class LJDPBAPPHGO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JILKILNLMAC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DEGFFGKMFJJ*>* AMBFMIEKJNK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 JMLEAOECANC; // 0x28
		::System::UInt32 NDFIDCNNGMJ; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 DEGDBJHFAME; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GKLPDEEPJJI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LJDPBAPPHGO")->GetStaticField(0x46840);
		}

		static ::Google::Protobuf::FieldCodec_1<::DEGFFGKMFJJ*>** StaticGet_HENAEGGNPFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::DEGFFGKMFJJ*>**)UnitySDK::FromName("", "LJDPBAPPHGO")->GetStaticField(0x46848);
		}

		static ::Google::Protobuf::MessageParser_1<::LJDPBAPPHGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJDPBAPPHGO*>**)UnitySDK::FromName("", "LJDPBAPPHGO")->GetStaticField(0x46850);
		}

		// static const ::System::Object NLNEGBCPCHL; // 0x0
		// static const ::System::Object FNPFIJPKBLH; // 0x0
		// static const ::System::Object ENGHHAJNMFD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object EHNIOLJAEBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJDPBAPPHGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDPBAPPHGO*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDPBAPPHGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJDPBAPPHGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJDPBAPPHGO*>*(*)())((::PBYTE)hIl2Cpp + LJDPBAPPHGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJDPBAPPHGO* Clone()
		{
			return ((::LJDPBAPPHGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BGBPDJCOGDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_BGBPDJCOGDC_OFFSET))(this);
		}

		::System::Void PHNLLAKMJJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_PHNLLAKMJJP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPBINICLCJA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_HPBINICLCJA_OFFSET))(this);
		}

		::System::UInt32 BPGNOOMHNPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_BPGNOOMHNPL_OFFSET))(this);
		}

		::System::Void BDJGPFFPIFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_BDJGPFFPIFL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DEGFFGKMFJJ*>* OOILECLEOMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DEGFFGKMFJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_OOILECLEOMP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJDPBAPPHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJDPBAPPHGO*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJDPBAPPHGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDPBAPPHGO*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJDPBAPPHGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
