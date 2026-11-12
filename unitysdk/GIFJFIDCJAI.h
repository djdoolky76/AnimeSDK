#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFJFIDCJAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define GIFJFIDCJAI_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1F788450)
#define GIFJFIDCJAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7888D0)
#define GIFJFIDCJAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F788C60)
#define GIFJFIDCJAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F788420)
#define GIFJFIDCJAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F788390)
#define GIFJFIDCJAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F788350)
#define GIFJFIDCJAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7885D0)
#define GIFJFIDCJAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F788480)
#define GIFJFIDCJAI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F788470)
#define GIFJFIDCJAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7886F0)
#define GIFJFIDCJAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F788310)
#define GIFJFIDCJAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F788AA0)
#define GIFJFIDCJAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F788A00)
#define GIFJFIDCJAI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F788460)
#define GIFJFIDCJAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F788340)
#define GIFJFIDCJAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F788760)
#define GIFJFIDCJAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7887C0)

inline static constexpr unsigned int GIFJFIDCJAI_TypeDefinitionIndex = 31032;

	class GIFJFIDCJAI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "GIFJFIDCJAI")->GetStaticField(0x11640);
		}

		static ::Google::Protobuf::MessageParser_1<::GIFJFIDCJAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIFJFIDCJAI*>**)UnitySDK::FromName("", "GIFJFIDCJAI")->GetStaticField(0x11648);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::GIFJFIDCJAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIFJFIDCJAI*>*(*)())((::PBYTE)hIl2Cpp + GIFJFIDCJAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIFJFIDCJAI* Clone()
		{
			return ((::GIFJFIDCJAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_CACOAPFOAAM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIFJFIDCJAI_FAEKBILGPCO_OFFSET))(this, a1);
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
