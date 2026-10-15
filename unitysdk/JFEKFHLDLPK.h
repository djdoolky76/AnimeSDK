#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBNGCJJDLHL;
class JFEKFHLDLPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFEKFHLDLPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E728080)
#define JFEKFHLDLPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7283F0)
#define JFEKFHLDLPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E727BC0)
#define JFEKFHLDLPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E727B30)
#define JFEKFHLDLPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E727AF0)
#define JFEKFHLDLPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E727D70)
#define JFEKFHLDLPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E727C20)
#define JFEKFHLDLPK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E727C00)
#define JFEKFHLDLPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E727EA0)
#define JFEKFHLDLPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E727AB0)
#define JFEKFHLDLPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E728230)
#define JFEKFHLDLPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E728190)
#define JFEKFHLDLPK_MGNPOGOPCEA_OFFSET UNITYSDK_OFFSET(0x1E727C10)
#define JFEKFHLDLPK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E727BF0)
#define JFEKFHLDLPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E727AE0)
#define JFEKFHLDLPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E727F10)
#define JFEKFHLDLPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E727F70)

inline static constexpr unsigned int JFEKFHLDLPK_TypeDefinitionIndex = 32440;

	class JFEKFHLDLPK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>* KONALKBONBL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KMDKPLGOCHA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JFEKFHLDLPK")->GetStaticField(0x5F820);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFEKFHLDLPK")->GetStaticField(0x5F828);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PNDKLBEDBLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFEKFHLDLPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFEKFHLDLPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFEKFHLDLPK* Clone()
		{
			return ((::JFEKFHLDLPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>* MGNPOGOPCEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MGNPOGOPCEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFEKFHLDLPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFEKFHLDLPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
