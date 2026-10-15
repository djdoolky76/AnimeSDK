#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICENHFMLNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NICENHFMLNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF8D00)
#define NICENHFMLNE_CCCMLFMHHGI_OFFSET UNITYSDK_OFFSET(0x1EAF88B0)
#define NICENHFMLNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF8FC0)
#define NICENHFMLNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF8870)
#define NICENHFMLNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF87E0)
#define NICENHFMLNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF8790)
#define NICENHFMLNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF8970)
#define NICENHFMLNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF88F0)
#define NICENHFMLNE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAF88E0)
#define NICENHFMLNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF8A70)
#define NICENHFMLNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF8750)
#define NICENHFMLNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF8ED0)
#define NICENHFMLNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF8E70)
#define NICENHFMLNE_MLDJFAEOJBM_OFFSET UNITYSDK_OFFSET(0x1EAF88C0)
#define NICENHFMLNE_MNGENFBNPEB_OFFSET UNITYSDK_OFFSET(0x1EAF88A0)
#define NICENHFMLNE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAF88D0)
#define NICENHFMLNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF8780)
#define NICENHFMLNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF8B70)
#define NICENHFMLNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF8BD0)

inline static constexpr unsigned int NICENHFMLNE_TypeDefinitionIndex = 34515;

	class NICENHFMLNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NCBGLCGAHEA; // 0x18
		::System::UInt32 HJOAMKICMLG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KDAJABMLKKO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NICENHFMLNE")->GetStaticField(0x65070);
		}

		static ::Google::Protobuf::MessageParser_1<::NICENHFMLNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NICENHFMLNE*>**)UnitySDK::FromName("", "NICENHFMLNE")->GetStaticField(0x65078);
		}

		// static const ::System::Object KIBHIAGCIFO; // 0x0
		// static const ::System::Object FDGNFAPFFEI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NICENHFMLNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NICENHFMLNE*))((::PBYTE)hIl2Cpp + NICENHFMLNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICENHFMLNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NICENHFMLNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NICENHFMLNE*>*(*)())((::PBYTE)hIl2Cpp + NICENHFMLNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NICENHFMLNE* Clone()
		{
			return ((::NICENHFMLNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNGENFBNPEB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_MNGENFBNPEB_OFFSET))(this);
		}

		::System::UInt32 CCCMLFMHHGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_CCCMLFMHHGI_OFFSET))(this);
		}

		::System::Void MLDJFAEOJBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NICENHFMLNE_MLDJFAEOJBM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NICENHFMLNE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NICENHFMLNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NICENHFMLNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NICENHFMLNE*))((::PBYTE)hIl2Cpp + NICENHFMLNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NICENHFMLNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NICENHFMLNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NICENHFMLNE*))((::PBYTE)hIl2Cpp + NICENHFMLNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NICENHFMLNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
