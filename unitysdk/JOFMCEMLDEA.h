#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
class GFFFJCEHBEB;
class JOFMCEMLDEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOFMCEMLDEA_AHCLHJKLPAE_OFFSET UNITYSDK_OFFSET(0x20009440)
#define JOFMCEMLDEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20009960)
#define JOFMCEMLDEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x20009DE0)
#define JOFMCEMLDEA_CLONE_OFFSET UNITYSDK_OFFSET(0x200093B0)
#define JOFMCEMLDEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200092E0)
#define JOFMCEMLDEA_CTOR_OFFSET UNITYSDK_OFFSET(0x200092A0)
#define JOFMCEMLDEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20009480)
#define JOFMCEMLDEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x20009450)
#define JOFMCEMLDEA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20009410)
#define JOFMCEMLDEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20009670)
#define JOFMCEMLDEA_ILEHHEHGOBB_OFFSET UNITYSDK_OFFSET(0x20009430)
#define JOFMCEMLDEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20009260)
#define JOFMCEMLDEA_KNONJPHFEEA_OFFSET UNITYSDK_OFFSET(0x200093F0)
#define JOFMCEMLDEA_LHENBLPOCID_OFFSET UNITYSDK_OFFSET(0x200093E0)
#define JOFMCEMLDEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20009C30)
#define JOFMCEMLDEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20009AB0)
#define JOFMCEMLDEA_MLOCALKDFEC_OFFSET UNITYSDK_OFFSET(0x20009420)
#define JOFMCEMLDEA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20009400)
#define JOFMCEMLDEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20009290)
#define JOFMCEMLDEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20009710)
#define JOFMCEMLDEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x20009770)

inline static constexpr unsigned int JOFMCEMLDEA_TypeDefinitionIndex = 35174;

	class JOFMCEMLDEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DBLILHCLPPL* IKKJILHOEKD; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>* CLNILELCKHD; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Boolean DMICDKMEIOD; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::GFFFJCEHBEB*>** StaticGet_EOHFAOAINLC()
		{
			return (::Google::Protobuf::FieldCodec_1<::GFFFJCEHBEB*>**)UnitySDK::FromName("", "JOFMCEMLDEA")->GetStaticField(0x67BE0);
		}

		static ::Google::Protobuf::MessageParser_1<::JOFMCEMLDEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOFMCEMLDEA*>**)UnitySDK::FromName("", "JOFMCEMLDEA")->GetStaticField(0x67BE8);
		}

		// static const ::System::Object KBFDEHFBMIA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ODFFMPHLHKB; // 0x0
		// static const ::System::Object NKAGKEMAHPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOFMCEMLDEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFMCEMLDEA*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFMCEMLDEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOFMCEMLDEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOFMCEMLDEA*>*(*)())((::PBYTE)hIl2Cpp + JOFMCEMLDEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOFMCEMLDEA* Clone()
		{
			return ((::JOFMCEMLDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_CLONE_OFFSET))(this);
		}

		::DBLILHCLPPL* LHENBLPOCID()
		{
			return ((::DBLILHCLPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_LHENBLPOCID_OFFSET))(this);
		}

		::System::Void KNONJPHFEEA(::DBLILHCLPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLILHCLPPL*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_KNONJPHFEEA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean MLOCALKDFEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_MLOCALKDFEC_OFFSET))(this);
		}

		::System::Void ILEHHEHGOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_ILEHHEHGOBB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>* AHCLHJKLPAE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_AHCLHJKLPAE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOFMCEMLDEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOFMCEMLDEA*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOFMCEMLDEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFMCEMLDEA*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOFMCEMLDEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
