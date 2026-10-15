#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMOIPALHBJN;
class NJHFBDDHCEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMOIPALHBJN_AJKEBMAIMID_OFFSET UNITYSDK_OFFSET(0x1E02DEA0)
#define BMOIPALHBJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E02E300)
#define BMOIPALHBJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02E6D0)
#define BMOIPALHBJN_CDPLBMNKLDC_OFFSET UNITYSDK_OFFSET(0x1E02DE40)
#define BMOIPALHBJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E02DDF0)
#define BMOIPALHBJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E02DD30)
#define BMOIPALHBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02DCE0)
#define BMOIPALHBJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E02DF10)
#define BMOIPALHBJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E02DEB0)
#define BMOIPALHBJN_FEGJHDJDICC_OFFSET UNITYSDK_OFFSET(0x1E02DE50)
#define BMOIPALHBJN_FNHACMDCDLJ_OFFSET UNITYSDK_OFFSET(0x1E02DE90)
#define BMOIPALHBJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E02E050)
#define BMOIPALHBJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E02DC70)
#define BMOIPALHBJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E02E5D0)
#define BMOIPALHBJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E02E510)
#define BMOIPALHBJN_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1E02DE80)
#define BMOIPALHBJN_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1E02DE70)
#define BMOIPALHBJN_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1E02DE60)
#define BMOIPALHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E02DCD0)
#define BMOIPALHBJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E02E0D0)
#define BMOIPALHBJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E02E130)

	class BMOIPALHBJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>* FDFBNBLNHLK; // 0x18
		::System::UInt32 HPEJOGGPEDN; // 0x20
		::System::UInt32 MLDIHMFALEB; // 0x24
		::System::UInt32 JENHMINODOE; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BMOIPALHBJN")->GetStaticField(0x51970);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMOIPALHBJN")->GetStaticField(0x51978);
		}

		// static const ::System::Object MFMGKGEOAFC; // 0x0
		// static const ::System::Object PMFNLNMINAP; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		// static const ::System::Object GNKPEGMOLPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMOIPALHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMOIPALHBJN*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOIPALHBJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMOIPALHBJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMOIPALHBJN* Clone()
		{
			return ((::BMOIPALHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CDPLBMNKLDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_CDPLBMNKLDC_OFFSET))(this);
		}

		::System::Void FEGJHDJDICC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOIPALHBJN_FEGJHDJDICC_OFFSET))(this, a1);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOIPALHBJN_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::UInt32 FNHACMDCDLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_FNHACMDCDLJ_OFFSET))(this);
		}

		::System::Void AJKEBMAIMID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOIPALHBJN_AJKEBMAIMID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMOIPALHBJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMOIPALHBJN*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMOIPALHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMOIPALHBJN*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMOIPALHBJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
