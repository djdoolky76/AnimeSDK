#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJNDALFMFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDJNDALFMFL_BCLBLIKNPAP_OFFSET UNITYSDK_OFFSET(0x1E62E6B0)
#define IDJNDALFMFL_BFAAODDPJLJ_OFFSET UNITYSDK_OFFSET(0x1E62E6F0)
#define IDJNDALFMFL_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E62E690)
#define IDJNDALFMFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E62EBA0)
#define IDJNDALFMFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62F010)
#define IDJNDALFMFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E62E640)
#define IDJNDALFMFL_CNCBLMFJMPG_OFFSET UNITYSDK_OFFSET(0x1E62E6C0)
#define IDJNDALFMFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62E5A0)
#define IDJNDALFMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62E550)
#define IDJNDALFMFL_DMNLHLPOKHJ_OFFSET UNITYSDK_OFFSET(0x1E62E6D0)
#define IDJNDALFMFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E62E790)
#define IDJNDALFMFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E62E700)
#define IDJNDALFMFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E62E680)
#define IDJNDALFMFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E62E810)
#define IDJNDALFMFL_JEHKOODGCDO_OFFSET UNITYSDK_OFFSET(0x1E62E6E0)
#define IDJNDALFMFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62E510)
#define IDJNDALFMFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E62EF00)
#define IDJNDALFMFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E62EE90)
#define IDJNDALFMFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E62E670)
#define IDJNDALFMFL_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E62E6A0)
#define IDJNDALFMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62E540)
#define IDJNDALFMFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E62E950)
#define IDJNDALFMFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E62E9B0)

	class IDJNDALFMFL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGLBIHIJMNF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 CODDHMMBPND; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 BGMLGHECGBM; // 0x2C
		::System::Int64 IOEHIGLBBJM; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_FELDAIBHJIH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDJNDALFMFL")->GetStaticField(0x46920);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDJNDALFMFL")->GetStaticField(0x46928);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LANLJAPHOCL; // 0x0
		// static const ::System::Object EAKLHMMJAJC; // 0x0
		// static const ::System::Object OLKKDAJCHOM; // 0x0
		// static const ::System::Object IPJLIBPNKHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDJNDALFMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJNDALFMFL*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJNDALFMFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDJNDALFMFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDJNDALFMFL* Clone()
		{
			return ((::IDJNDALFMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDJNDALFMFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDJNDALFMFL_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::UInt64 BCLBLIKNPAP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_BCLBLIKNPAP_OFFSET))(this);
		}

		::System::Void CNCBLMFJMPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IDJNDALFMFL_CNCBLMFJMPG_OFFSET))(this, a1);
		}

		::System::Int64 DMNLHLPOKHJ()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_DMNLHLPOKHJ_OFFSET))(this);
		}

		::System::Void JEHKOODGCDO(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IDJNDALFMFL_JEHKOODGCDO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFAAODDPJLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_BFAAODDPJLJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDJNDALFMFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDJNDALFMFL*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDJNDALFMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJNDALFMFL*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDJNDALFMFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
