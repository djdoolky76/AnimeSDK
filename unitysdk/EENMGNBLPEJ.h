#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EENMGNBLPEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EENMGNBLPEJ_AENLHLGIANN_OFFSET UNITYSDK_OFFSET(0x1E288AF0)
#define EENMGNBLPEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E288FC0)
#define EENMGNBLPEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E289280)
#define EENMGNBLPEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E288A60)
#define EENMGNBLPEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2889C0)
#define EENMGNBLPEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E288970)
#define EENMGNBLPEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E288B90)
#define EENMGNBLPEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E288B00)
#define EENMGNBLPEJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E288AC0)
#define EENMGNBLPEJ_GDBLOLIHIJO_OFFSET UNITYSDK_OFFSET(0x1E288A90)
#define EENMGNBLPEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E288CA0)
#define EENMGNBLPEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E288930)
#define EENMGNBLPEJ_MAFLJFGPKHK_OFFSET UNITYSDK_OFFSET(0x1E288AA0)
#define EENMGNBLPEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E289190)
#define EENMGNBLPEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E289130)
#define EENMGNBLPEJ_MMKLJCAEGNM_OFFSET UNITYSDK_OFFSET(0x1E288AE0)
#define EENMGNBLPEJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E288AB0)
#define EENMGNBLPEJ_OJBBCIJBOCA_OFFSET UNITYSDK_OFFSET(0x1E288AD0)
#define EENMGNBLPEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E288960)
#define EENMGNBLPEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E288DA0)
#define EENMGNBLPEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E288E00)

	class EENMGNBLPEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAODACBIGDL; // 0x18
		::System::Boolean BDCACOOKMFC; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NNGOIPFCJHH; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_KCHGGOENHIM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EENMGNBLPEJ")->GetStaticField(0x44200);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EENMGNBLPEJ")->GetStaticField(0x44208);
		}

		// static const ::System::Object PGABPKNPFIA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LLAOIHACDNL; // 0x0
		// static const ::System::Object PIBNEIEPDNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EENMGNBLPEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EENMGNBLPEJ*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENMGNBLPEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EENMGNBLPEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EENMGNBLPEJ* Clone()
		{
			return ((::EENMGNBLPEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 GDBLOLIHIJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_GDBLOLIHIJO_OFFSET))(this);
		}

		::System::Void MAFLJFGPKHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_MAFLJFGPKHK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OJBBCIJBOCA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_OJBBCIJBOCA_OFFSET))(this);
		}

		::System::Boolean MMKLJCAEGNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_MMKLJCAEGNM_OFFSET))(this);
		}

		::System::Void AENLHLGIANN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_AENLHLGIANN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EENMGNBLPEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EENMGNBLPEJ*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EENMGNBLPEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EENMGNBLPEJ*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EENMGNBLPEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
