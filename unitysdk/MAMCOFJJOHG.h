#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
class CJDIAHDLCNJ;
class HNFFJNEKJHA;
class MAMCOFJJOHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAMCOFJJOHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DB140)
#define MAMCOFJJOHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DB590)
#define MAMCOFJJOHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DABB0)
#define MAMCOFJJOHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DAA60)
#define MAMCOFJJOHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA9F0)
#define MAMCOFJJOHG_EADPEGECCBB_OFFSET UNITYSDK_OFFSET(0x1E9DAC20)
#define MAMCOFJJOHG_EKIGKEODABO_OFFSET UNITYSDK_OFFSET(0x1E9DAC10)
#define MAMCOFJJOHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DAC70)
#define MAMCOFJJOHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DAC40)
#define MAMCOFJJOHG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9DABF0)
#define MAMCOFJJOHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DAE80)
#define MAMCOFJJOHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DA9B0)
#define MAMCOFJJOHG_KHAAEFIMKNF_OFFSET UNITYSDK_OFFSET(0x1E9DAC30)
#define MAMCOFJJOHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DB430)
#define MAMCOFJJOHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DB2D0)
#define MAMCOFJJOHG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9DABE0)
#define MAMCOFJJOHG_OKNNKACMIKC_OFFSET UNITYSDK_OFFSET(0x1E9DAC00)
#define MAMCOFJJOHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA9E0)
#define MAMCOFJJOHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DAF40)
#define MAMCOFJJOHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DAFA0)

inline static constexpr unsigned int MAMCOFJJOHG_TypeDefinitionIndex = 32314;

	class MAMCOFJJOHG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>* DEFHLMAFJLJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HNFFJNEKJHA*>* BHDPPFMEHLM; // 0x18
		::CDCCPHILOCC* ONBNJJEKAPL; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_JIBILEPHNLM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MAMCOFJJOHG")->GetStaticField(0x42BC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PAAJCHLEMGO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MAMCOFJJOHG")->GetStaticField(0x42BC8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MAMCOFJJOHG")->GetStaticField(0x42BD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DJKMJHHCDKL; // 0x0
		// static const ::System::Object HMOKDPHFBFM; // 0x0
		// static const ::System::Object NAPFJOPLMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAMCOFJJOHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAMCOFJJOHG*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAMCOFJJOHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MAMCOFJJOHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAMCOFJJOHG* Clone()
		{
			return ((::MAMCOFJJOHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNFFJNEKJHA*>* OKNNKACMIKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNFFJNEKJHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_OKNNKACMIKC_OFFSET))(this);
		}

		::CDCCPHILOCC* EKIGKEODABO()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_EKIGKEODABO_OFFSET))(this);
		}

		::System::Void EADPEGECCBB(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_EADPEGECCBB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>* KHAAEFIMKNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_KHAAEFIMKNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAMCOFJJOHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAMCOFJJOHG*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAMCOFJJOHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAMCOFJJOHG*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAMCOFJJOHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
