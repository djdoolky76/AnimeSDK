#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGOEIFAHPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODGOEIFAHPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1C0C0)
#define ODGOEIFAHPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1C3B0)
#define ODGOEIFAHPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1BC30)
#define ODGOEIFAHPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1BBA0)
#define ODGOEIFAHPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1BB50)
#define ODGOEIFAHPH_ECPOJEKLOOF_OFFSET UNITYSDK_OFFSET(0x1DE1BC60)
#define ODGOEIFAHPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1BD90)
#define ODGOEIFAHPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1BC90)
#define ODGOEIFAHPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE1BC80)
#define ODGOEIFAHPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1BE80)
#define ODGOEIFAHPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1BB10)
#define ODGOEIFAHPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1C200)
#define ODGOEIFAHPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1C1B0)
#define ODGOEIFAHPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE1BC70)
#define ODGOEIFAHPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1BB40)
#define ODGOEIFAHPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1BF80)
#define ODGOEIFAHPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1BFE0)

inline static constexpr unsigned int ODGOEIFAHPH_TypeDefinitionIndex = 30562;

	class ODGOEIFAHPH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FELDHIDGGJH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LHJCNNOMNIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ODGOEIFAHPH")->GetStaticField(0x136C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ODGOEIFAHPH")->GetStaticField(0x136C8);
		}

		// static const ::System::Object NDFABIFPHPG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODGOEIFAHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODGOEIFAHPH*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODGOEIFAHPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ODGOEIFAHPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODGOEIFAHPH* Clone()
		{
			return ((::ODGOEIFAHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ECPOJEKLOOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_ECPOJEKLOOF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODGOEIFAHPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODGOEIFAHPH*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODGOEIFAHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODGOEIFAHPH*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODGOEIFAHPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
