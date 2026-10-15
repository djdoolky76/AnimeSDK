#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBKLGBFJBN;
class LNHCHGFEJOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBBKLGBFJBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E231A60)
#define EBBKLGBFJBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E231DD0)
#define EBBKLGBFJBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2315B0)
#define EBBKLGBFJBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E231520)
#define EBBKLGBFJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2314E0)
#define EBBKLGBFJBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E231760)
#define EBBKLGBFJBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E231610)
#define EBBKLGBFJBN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2315F0)
#define EBBKLGBFJBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E231890)
#define EBBKLGBFJBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2314A0)
#define EBBKLGBFJBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E231C10)
#define EBBKLGBFJBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E231B70)
#define EBBKLGBFJBN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2315E0)
#define EBBKLGBFJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2314D0)
#define EBBKLGBFJBN_PLNNDONHBKP_OFFSET UNITYSDK_OFFSET(0x1E231600)
#define EBBKLGBFJBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E231900)
#define EBBKLGBFJBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E231960)

inline static constexpr unsigned int EBBKLGBFJBN_TypeDefinitionIndex = 30757;

	class EBBKLGBFJBN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LNHCHGFEJOI*>* HKNNOLGHDBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBBKLGBFJBN")->GetStaticField(0x49E50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MMNPIAPNKAC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EBBKLGBFJBN")->GetStaticField(0x49E58);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBBKLGBFJBN_JJGHOBBFNJD_OFFSET))();
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
