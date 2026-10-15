#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENPKNCKGGI.h"
#include "unitysdk/System/Object.h"
class DHLPEJFEGAN;
class EPFJLNKPEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHLPEJFEGAN_ANIGJLBJCOO_OFFSET UNITYSDK_OFFSET(0x1E18A0B0)
#define DHLPEJFEGAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18A520)
#define DHLPEJFEGAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18A8E0)
#define DHLPEJFEGAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18A070)
#define DHLPEJFEGAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E189FE0)
#define DHLPEJFEGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E189FA0)
#define DHLPEJFEGAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18A220)
#define DHLPEJFEGAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18A0D0)
#define DHLPEJFEGAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18A340)
#define DHLPEJFEGAN_GICDDALMJDO_OFFSET UNITYSDK_OFFSET(0x1E18A0A0)
#define DHLPEJFEGAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E189F60)
#define DHLPEJFEGAN_KMNOPJDAHGO_OFFSET UNITYSDK_OFFSET(0x1E18A0C0)
#define DHLPEJFEGAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18A720)
#define DHLPEJFEGAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18A680)
#define DHLPEJFEGAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E189F90)
#define DHLPEJFEGAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18A3B0)
#define DHLPEJFEGAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18A410)

inline static constexpr unsigned int DHLPEJFEGAN_TypeDefinitionIndex = 31527;

	class DHLPEJFEGAN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>* IHIMDHMDDGC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::HENPKNCKGGI HFCBDBHMJAN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DHLPEJFEGAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHLPEJFEGAN*>**)UnitySDK::FromName("", "DHLPEJFEGAN")->GetStaticField(0x30D00);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPFJLNKPEPK*>** StaticGet_LPJJCPOJOOD()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPFJLNKPEPK*>**)UnitySDK::FromName("", "DHLPEJFEGAN")->GetStaticField(0x30D08);
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

		static ::Google::Protobuf::MessageParser_1<::DHLPEJFEGAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHLPEJFEGAN*>*(*)())((::PBYTE)hIl2Cpp + DHLPEJFEGAN_JJGHOBBFNJD_OFFSET))();
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
