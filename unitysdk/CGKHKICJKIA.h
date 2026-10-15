#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKHKICJKIA;
class HOLOFJGPNGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGKHKICJKIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B00E0)
#define CGKHKICJKIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B0450)
#define CGKHKICJKIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0AFC20)
#define CGKHKICJKIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0AFB90)
#define CGKHKICJKIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AFB50)
#define CGKHKICJKIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0AFDD0)
#define CGKHKICJKIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0AFC80)
#define CGKHKICJKIA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0AFC60)
#define CGKHKICJKIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0AFF00)
#define CGKHKICJKIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0AFB10)
#define CGKHKICJKIA_JLLJKDOACOF_OFFSET UNITYSDK_OFFSET(0x1E0AFC70)
#define CGKHKICJKIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B0290)
#define CGKHKICJKIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B01F0)
#define CGKHKICJKIA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0AFC50)
#define CGKHKICJKIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0AFB40)
#define CGKHKICJKIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0AFF70)
#define CGKHKICJKIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AFFD0)

inline static constexpr unsigned int CGKHKICJKIA_TypeDefinitionIndex = 34125;

	class CGKHKICJKIA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>* NKFGHOCAIDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CGKHKICJKIA")->GetStaticField(0x14160);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OKLKNIFAEED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CGKHKICJKIA")->GetStaticField(0x14168);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CFEBFCMGDOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGKHKICJKIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKHKICJKIA*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKHKICJKIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CGKHKICJKIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGKHKICJKIA* Clone()
		{
			return ((::CGKHKICJKIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGKHKICJKIA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>* JLLJKDOACOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_JLLJKDOACOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGKHKICJKIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGKHKICJKIA*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGKHKICJKIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKHKICJKIA*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGKHKICJKIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
