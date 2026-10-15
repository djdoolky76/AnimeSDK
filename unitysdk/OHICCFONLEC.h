#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
class GFFFJCEHBEB;
class OHICCFONLEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHICCFONLEC_AHCLHJKLPAE_OFFSET UNITYSDK_OFFSET(0x1DE61580)
#define OHICCFONLEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE61A80)
#define OHICCFONLEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE61F00)
#define OHICCFONLEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE614F0)
#define OHICCFONLEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE61420)
#define OHICCFONLEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE613E0)
#define OHICCFONLEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE615C0)
#define OHICCFONLEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE61590)
#define OHICCFONLEC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE61530)
#define OHICCFONLEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE617B0)
#define OHICCFONLEC_ILEHHEHGOBB_OFFSET UNITYSDK_OFFSET(0x1DE61570)
#define OHICCFONLEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE613A0)
#define OHICCFONLEC_KLHPMBFNNNB_OFFSET UNITYSDK_OFFSET(0x1DE61550)
#define OHICCFONLEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE61D50)
#define OHICCFONLEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE61BD0)
#define OHICCFONLEC_MLOCALKDFEC_OFFSET UNITYSDK_OFFSET(0x1DE61560)
#define OHICCFONLEC_MMBPEDJHGOJ_OFFSET UNITYSDK_OFFSET(0x1DE61540)
#define OHICCFONLEC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE61520)
#define OHICCFONLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE613D0)
#define OHICCFONLEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE61830)
#define OHICCFONLEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE61890)

inline static constexpr unsigned int OHICCFONLEC_TypeDefinitionIndex = 34242;

	class OHICCFONLEC : public ::System::Object
	{
	public:
		::DBLILHCLPPL* GHGIMKOFONI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>* CLNILELCKHD; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Boolean DMICDKMEIOD; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_EOHFAOAINLC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OHICCFONLEC")->GetStaticField(0x1AAC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OHICCFONLEC")->GetStaticField(0x1AAC8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IDIANGJKMBA; // 0x0
		// static const ::System::Object ODFFMPHLHKB; // 0x0
		// static const ::System::Object NKAGKEMAHPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHICCFONLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHICCFONLEC*))((::PBYTE)hIl2Cpp + OHICCFONLEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHICCFONLEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OHICCFONLEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHICCFONLEC* Clone()
		{
			return ((::OHICCFONLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHICCFONLEC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::DBLILHCLPPL* MMBPEDJHGOJ()
		{
			return ((::DBLILHCLPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_MMBPEDJHGOJ_OFFSET))(this);
		}

		::System::Void KLHPMBFNNNB(::DBLILHCLPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLILHCLPPL*))((::PBYTE)hIl2Cpp + OHICCFONLEC_KLHPMBFNNNB_OFFSET))(this, a1);
		}

		::System::Boolean MLOCALKDFEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_MLOCALKDFEC_OFFSET))(this);
		}

		::System::Void ILEHHEHGOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHICCFONLEC_ILEHHEHGOBB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>* AHCLHJKLPAE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GFFFJCEHBEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_AHCLHJKLPAE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHICCFONLEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHICCFONLEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHICCFONLEC*))((::PBYTE)hIl2Cpp + OHICCFONLEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHICCFONLEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHICCFONLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHICCFONLEC*))((::PBYTE)hIl2Cpp + OHICCFONLEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHICCFONLEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
