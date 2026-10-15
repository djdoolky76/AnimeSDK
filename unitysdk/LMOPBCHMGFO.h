#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGAIEEIKOKK;
class LMOPBCHMGFO;
class OFGLEOIIJBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMOPBCHMGFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9AEF00)
#define LMOPBCHMGFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF390)
#define LMOPBCHMGFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9AEA20)
#define LMOPBCHMGFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9AE8F0)
#define LMOPBCHMGFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AE8A0)
#define LMOPBCHMGFO_EOJDFPONJMN_OFFSET UNITYSDK_OFFSET(0x1E9AEA70)
#define LMOPBCHMGFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9AEAD0)
#define LMOPBCHMGFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9AEAA0)
#define LMOPBCHMGFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9AEA90)
#define LMOPBCHMGFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9AECB0)
#define LMOPBCHMGFO_HDAEECIJCAN_OFFSET UNITYSDK_OFFSET(0x1E9AEA60)
#define LMOPBCHMGFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9AE860)
#define LMOPBCHMGFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AF170)
#define LMOPBCHMGFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AF070)
#define LMOPBCHMGFO_MNGKALNBKDF_OFFSET UNITYSDK_OFFSET(0x1E9AEA50)
#define LMOPBCHMGFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9AEA80)
#define LMOPBCHMGFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9AE890)
#define LMOPBCHMGFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9AED40)
#define LMOPBCHMGFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9AEDA0)

inline static constexpr unsigned int LMOPBCHMGFO_TypeDefinitionIndex = 27222;

	class LMOPBCHMGFO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BGAIEEIKOKK*>* JCILKFHPHDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OFGLEOIIJBD* PDFIMIAFIOK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::BGAIEEIKOKK*>** StaticGet_JMENKMHFCDJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::BGAIEEIKOKK*>**)UnitySDK::FromName("", "LMOPBCHMGFO")->GetStaticField(0x4E3C0);
		}

		static ::Google::Protobuf::MessageParser_1<::LMOPBCHMGFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMOPBCHMGFO*>**)UnitySDK::FromName("", "LMOPBCHMGFO")->GetStaticField(0x4E3C8);
		}

		// static const ::System::Object ODMJFIPKDAM; // 0x0
		// static const ::System::Object LMHMJFNDDMK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMOPBCHMGFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPBCHMGFO*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOPBCHMGFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMOPBCHMGFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMOPBCHMGFO*>*(*)())((::PBYTE)hIl2Cpp + LMOPBCHMGFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMOPBCHMGFO* Clone()
		{
			return ((::LMOPBCHMGFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_CLONE_OFFSET))(this);
		}

		::OFGLEOIIJBD* MNGKALNBKDF()
		{
			return ((::OFGLEOIIJBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_MNGKALNBKDF_OFFSET))(this);
		}

		::System::Void HDAEECIJCAN(::OFGLEOIIJBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGLEOIIJBD*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_HDAEECIJCAN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BGAIEEIKOKK*>* EOJDFPONJMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BGAIEEIKOKK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_EOJDFPONJMN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMOPBCHMGFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMOPBCHMGFO*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMOPBCHMGFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPBCHMGFO*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMOPBCHMGFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
