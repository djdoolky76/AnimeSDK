#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAJKNKDAOD;
class PAGLMEAGPPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAGLMEAGPPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC0120)
#define PAGLMEAGPPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC04A0)
#define PAGLMEAGPPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBFC70)
#define PAGLMEAGPPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBFBB0)
#define PAGLMEAGPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBFB60)
#define PAGLMEAGPPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBFE20)
#define PAGLMEAGPPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBFCD0)
#define PAGLMEAGPPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEBFCB0)
#define PAGLMEAGPPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBFF50)
#define PAGLMEAGPPC_HBABBFCLDKE_OFFSET UNITYSDK_OFFSET(0x1DEBFCC0)
#define PAGLMEAGPPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBFB20)
#define PAGLMEAGPPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC02D0)
#define PAGLMEAGPPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC0230)
#define PAGLMEAGPPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEBFCA0)
#define PAGLMEAGPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBFB50)
#define PAGLMEAGPPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBFFC0)
#define PAGLMEAGPPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC0020)

inline static constexpr unsigned int PAGLMEAGPPC_TypeDefinitionIndex = 26591;

	class PAGLMEAGPPC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EOAJKNKDAOD*>* KJMLEHKABDD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::EOAJKNKDAOD*>** StaticGet_MOKPPOEOKEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::EOAJKNKDAOD*>**)UnitySDK::FromName("", "PAGLMEAGPPC")->GetStaticField(0x2B680);
		}

		static ::Google::Protobuf::MessageParser_1<::PAGLMEAGPPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAGLMEAGPPC*>**)UnitySDK::FromName("", "PAGLMEAGPPC")->GetStaticField(0x2B688);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PCKHOBBGKHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAGLMEAGPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGLMEAGPPC*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGLMEAGPPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PAGLMEAGPPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PAGLMEAGPPC*>*(*)())((::PBYTE)hIl2Cpp + PAGLMEAGPPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAGLMEAGPPC* Clone()
		{
			return ((::PAGLMEAGPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EOAJKNKDAOD*>* HBABBFCLDKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EOAJKNKDAOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_HBABBFCLDKE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAGLMEAGPPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAGLMEAGPPC*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAGLMEAGPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGLMEAGPPC*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAGLMEAGPPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
