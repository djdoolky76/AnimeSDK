#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOPMIBKNBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBOPMIBKNBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E247190)
#define EBOPMIBKNBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E247490)
#define EBOPMIBKNBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E246D00)
#define EBOPMIBKNBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E246C70)
#define EBOPMIBKNBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E246C20)
#define EBOPMIBKNBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E246E60)
#define EBOPMIBKNBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E246D60)
#define EBOPMIBKNBE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E246D50)
#define EBOPMIBKNBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E246F50)
#define EBOPMIBKNBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E246BE0)
#define EBOPMIBKNBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2472D0)
#define EBOPMIBKNBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E247280)
#define EBOPMIBKNBE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E246D40)
#define EBOPMIBKNBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E246C10)
#define EBOPMIBKNBE_PPJCJGMMHMO_OFFSET UNITYSDK_OFFSET(0x1E246D30)
#define EBOPMIBKNBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E247050)
#define EBOPMIBKNBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2470B0)

inline static constexpr unsigned int EBOPMIBKNBE_TypeDefinitionIndex = 27025;

	class EBOPMIBKNBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JCKPGMPLFBC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBOPMIBKNBE")->GetStaticField(0x4CB90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MMANEFPMLBF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EBOPMIBKNBE")->GetStaticField(0x4CB98);
		}

		// static const ::System::Object DLKADMEGPIA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBOPMIBKNBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOPMIBKNBE*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPMIBKNBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBOPMIBKNBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBOPMIBKNBE* Clone()
		{
			return ((::EBOPMIBKNBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPJCJGMMHMO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_PPJCJGMMHMO_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBOPMIBKNBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBOPMIBKNBE*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBOPMIBKNBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOPMIBKNBE*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBOPMIBKNBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
