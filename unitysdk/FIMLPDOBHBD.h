#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMLPDOBHBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIMLPDOBHBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6A2170)
#define FIMLPDOBHBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A24F0)
#define FIMLPDOBHBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6A1BF0)
#define FIMLPDOBHBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A1BA0)
#define FIMLPDOBHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A1B90)
#define FIMLPDOBHBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6A1E00)
#define FIMLPDOBHBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6A1CF0)
#define FIMLPDOBHBD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F6A1C60)
#define FIMLPDOBHBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6A1F10)
#define FIMLPDOBHBD_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1F6A1CA0)
#define FIMLPDOBHBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6A1B50)
#define FIMLPDOBHBD_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1F6A1C80)
#define FIMLPDOBHBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6A2320)
#define FIMLPDOBHBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6A22C0)
#define FIMLPDOBHBD_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1F6A1C90)
#define FIMLPDOBHBD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F6A1C50)
#define FIMLPDOBHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6A1B80)
#define FIMLPDOBHBD_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1F6A1C70)
#define FIMLPDOBHBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6A1FC0)
#define FIMLPDOBHBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6A2020)

inline static constexpr unsigned int FIMLPDOBHBD_TypeDefinitionIndex = 31300;

	class FIMLPDOBHBD : public ::System::Object
	{
	public:
		::System::String* IOGCODPGEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 KCIKBKIBOPB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FIMLPDOBHBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIMLPDOBHBD*>**)UnitySDK::FromName("", "FIMLPDOBHBD")->GetStaticField(0x458D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object OLMIFJKILJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIMLPDOBHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMLPDOBHBD*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMLPDOBHBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIMLPDOBHBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIMLPDOBHBD*>*(*)())((::PBYTE)hIl2Cpp + FIMLPDOBHBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIMLPDOBHBD* Clone()
		{
			return ((::FIMLPDOBHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIMLPDOBHBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIMLPDOBHBD*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIMLPDOBHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMLPDOBHBD*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIMLPDOBHBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
