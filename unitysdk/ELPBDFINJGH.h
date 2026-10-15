#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class ELPBDFINJGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELPBDFINJGH_BHNLIGCELMI_OFFSET UNITYSDK_OFFSET(0x1E2DB1A0)
#define ELPBDFINJGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DB6A0)
#define ELPBDFINJGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBAD0)
#define ELPBDFINJGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DB150)
#define ELPBDFINJGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DB0B0)
#define ELPBDFINJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DB070)
#define ELPBDFINJGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DB330)
#define ELPBDFINJGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DB1D0)
#define ELPBDFINJGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2DB1C0)
#define ELPBDFINJGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DB460)
#define ELPBDFINJGH_HCLHAFDEFLG_OFFSET UNITYSDK_OFFSET(0x1E2DB180)
#define ELPBDFINJGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DB030)
#define ELPBDFINJGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DB8F0)
#define ELPBDFINJGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DB840)
#define ELPBDFINJGH_NONDJMLNJAO_OFFSET UNITYSDK_OFFSET(0x1E2DB190)
#define ELPBDFINJGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2DB1B0)
#define ELPBDFINJGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DB060)
#define ELPBDFINJGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DB4D0)
#define ELPBDFINJGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DB530)

inline static constexpr unsigned int ELPBDFINJGH_TypeDefinitionIndex = 29968;

	class ELPBDFINJGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AKIPNODIFLD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 HFPIMHCJFJH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_LEKLGKDDFMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ELPBDFINJGH")->GetStaticField(0x51F30);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELPBDFINJGH")->GetStaticField(0x51F38);
		}

		// static const ::System::Object OHCPOGIAMMG; // 0x0
		// static const ::System::Object HPLMLMEBFMP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELPBDFINJGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPBDFINJGH*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPBDFINJGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELPBDFINJGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELPBDFINJGH* Clone()
		{
			return ((::ELPBDFINJGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HCLHAFDEFLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_HCLHAFDEFLG_OFFSET))(this);
		}

		::System::UInt32 NONDJMLNJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_NONDJMLNJAO_OFFSET))(this);
		}

		::System::Void BHNLIGCELMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELPBDFINJGH_BHNLIGCELMI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELPBDFINJGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELPBDFINJGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELPBDFINJGH*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELPBDFINJGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPBDFINJGH*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELPBDFINJGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
