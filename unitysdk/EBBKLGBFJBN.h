#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBKLGBFJBN;
class LNHCHGFEJOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBBKLGBFJBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E204410)
#define EBBKLGBFJBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E204780)
#define EBBKLGBFJBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E203F60)
#define EBBKLGBFJBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E203ED0)
#define EBBKLGBFJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E203E90)
#define EBBKLGBFJBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E204110)
#define EBBKLGBFJBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E203FC0)
#define EBBKLGBFJBN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E203FA0)
#define EBBKLGBFJBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E204240)
#define EBBKLGBFJBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E203E50)
#define EBBKLGBFJBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2045C0)
#define EBBKLGBFJBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E204520)
#define EBBKLGBFJBN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E203F90)
#define EBBKLGBFJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E203E80)
#define EBBKLGBFJBN_PLNNDONHBKP_OFFSET UNITYSDK_OFFSET(0x1E203FB0)
#define EBBKLGBFJBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2042B0)
#define EBBKLGBFJBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E204310)

inline static constexpr unsigned int EBBKLGBFJBN_TypeDefinitionIndex = 30757;

	class EBBKLGBFJBN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>* HKNNOLGHDBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EBBKLGBFJBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBBKLGBFJBN*>**)UnitySDK::FromName("", "EBBKLGBFJBN")->GetStaticField(0x3F030);
		}

		static ::Google::Protobuf::FieldCodec_1<::LNHCHGFEJOI*>** StaticGet_MMNPIAPNKAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::LNHCHGFEJOI*>**)UnitySDK::FromName("", "EBBKLGBFJBN")->GetStaticField(0x3F038);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MFFLBOMHLAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBBKLGBFJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBKLGBFJBN*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBKLGBFJBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBBKLGBFJBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBBKLGBFJBN*>*(*)())((::PBYTE)hIl2Cpp + EBBKLGBFJBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBBKLGBFJBN* Clone()
		{
			return ((::EBBKLGBFJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>* PLNNDONHBKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_PLNNDONHBKP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBBKLGBFJBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBBKLGBFJBN*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBBKLGBFJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBKLGBFJBN*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBBKLGBFJBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
