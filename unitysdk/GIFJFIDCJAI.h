#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFJFIDCJAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define GIFJFIDCJAI_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E496310)
#define GIFJFIDCJAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E496780)
#define GIFJFIDCJAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E496AF0)
#define GIFJFIDCJAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4962C0)
#define GIFJFIDCJAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E496230)
#define GIFJFIDCJAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4961F0)
#define GIFJFIDCJAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E496470)
#define GIFJFIDCJAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E496320)
#define GIFJFIDCJAI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E496300)
#define GIFJFIDCJAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4965A0)
#define GIFJFIDCJAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4961B0)
#define GIFJFIDCJAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E496930)
#define GIFJFIDCJAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E496890)
#define GIFJFIDCJAI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4962F0)
#define GIFJFIDCJAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4961E0)
#define GIFJFIDCJAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E496610)
#define GIFJFIDCJAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E496670)

	class GIFJFIDCJAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIFJFIDCJAI")->GetStaticField(0x19260);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GIFJFIDCJAI")->GetStaticField(0x19268);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DFABHHAPAEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIFJFIDCJAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFJFIDCJAI*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIFJFIDCJAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIFJFIDCJAI* Clone()
		{
			return ((::GIFJFIDCJAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIFJFIDCJAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIFJFIDCJAI*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIFJFIDCJAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFJFIDCJAI*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
