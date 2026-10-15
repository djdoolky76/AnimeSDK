#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENPKNCKGGI.h"
#include "unitysdk/System/Object.h"
class DHLPEJFEGAN;
class EPFJLNKPEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHLPEJFEGAN_ANIGJLBJCOO_OFFSET UNITYSDK_OFFSET(0x1E1B7680)
#define DHLPEJFEGAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B7AF0)
#define DHLPEJFEGAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7EB0)
#define DHLPEJFEGAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B7640)
#define DHLPEJFEGAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B75B0)
#define DHLPEJFEGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7570)
#define DHLPEJFEGAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B77F0)
#define DHLPEJFEGAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B76A0)
#define DHLPEJFEGAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B7910)
#define DHLPEJFEGAN_GICDDALMJDO_OFFSET UNITYSDK_OFFSET(0x1E1B7670)
#define DHLPEJFEGAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B7530)
#define DHLPEJFEGAN_KMNOPJDAHGO_OFFSET UNITYSDK_OFFSET(0x1E1B7690)
#define DHLPEJFEGAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B7CF0)
#define DHLPEJFEGAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B7C50)
#define DHLPEJFEGAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7560)
#define DHLPEJFEGAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B7980)
#define DHLPEJFEGAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B79E0)

inline static constexpr unsigned int DHLPEJFEGAN_TypeDefinitionIndex = 31527;

	class DHLPEJFEGAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>* IHIMDHMDDGC; // 0x18
		::HENPKNCKGGI HFCBDBHMJAN; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LPJJCPOJOOD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DHLPEJFEGAN")->GetStaticField(0x35460);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DHLPEJFEGAN")->GetStaticField(0x35468);
		}

		// static const ::System::Object IOMCEPLLDFP; // 0x0
		// static const ::System::Object CDKGLMIKBDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHLPEJFEGAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLPEJFEGAN*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLPEJFEGAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DHLPEJFEGAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHLPEJFEGAN* Clone()
		{
			return ((::DHLPEJFEGAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>* GICDDALMJDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_GICDDALMJDO_OFFSET))(this);
		}

		::HENPKNCKGGI ANIGJLBJCOO()
		{
			return ((::HENPKNCKGGI(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_ANIGJLBJCOO_OFFSET))(this);
		}

		::System::Void KMNOPJDAHGO(::HENPKNCKGGI a1)
		{
			return ((::System::Void(*)(::PVOID, ::HENPKNCKGGI))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_KMNOPJDAHGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHLPEJFEGAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHLPEJFEGAN*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHLPEJFEGAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLPEJFEGAN*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHLPEJFEGAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
