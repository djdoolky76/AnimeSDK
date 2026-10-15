#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPDCKMBJMOO;
class NKEGPAOCGCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPDCKMBJMOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E308760)
#define EPDCKMBJMOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E308B00)
#define EPDCKMBJMOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3082C0)
#define EPDCKMBJMOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E308200)
#define EPDCKMBJMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3081B0)
#define EPDCKMBJMOO_DBKGCBOLKMN_OFFSET UNITYSDK_OFFSET(0x1E3082F0)
#define EPDCKMBJMOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E308470)
#define EPDCKMBJMOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E308320)
#define EPDCKMBJMOO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E308310)
#define EPDCKMBJMOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E308590)
#define EPDCKMBJMOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E308170)
#define EPDCKMBJMOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E308930)
#define EPDCKMBJMOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E308890)
#define EPDCKMBJMOO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E308300)
#define EPDCKMBJMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3081A0)
#define EPDCKMBJMOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E308600)
#define EPDCKMBJMOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E308660)

inline static constexpr unsigned int EPDCKMBJMOO_TypeDefinitionIndex = 28040;

	class EPDCKMBJMOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NKEGPAOCGCJ*>* EINGAMIKIED; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NAGMPJKFOBP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EPDCKMBJMOO")->GetStaticField(0x559C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPDCKMBJMOO")->GetStaticField(0x559C8);
		}

		// static const ::System::Object OGHPIOPLBEC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPDCKMBJMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPDCKMBJMOO*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDCKMBJMOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPDCKMBJMOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPDCKMBJMOO* Clone()
		{
			return ((::EPDCKMBJMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NKEGPAOCGCJ*>* DBKGCBOLKMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NKEGPAOCGCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_DBKGCBOLKMN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPDCKMBJMOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPDCKMBJMOO*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPDCKMBJMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPDCKMBJMOO*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPDCKMBJMOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
