#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMEPBAGOFF;
class LLFIKHHPJEB;
class LMLNNHKJEIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLFIKHHPJEB_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E96D100)
#define LLFIKHHPJEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96D590)
#define LLFIKHHPJEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96DA60)
#define LLFIKHHPJEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96D0B0)
#define LLFIKHHPJEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96CF80)
#define LLFIKHHPJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96CF30)
#define LLFIKHHPJEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96D160)
#define LLFIKHHPJEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96D130)
#define LLFIKHHPJEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E96D0F0)
#define LLFIKHHPJEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96D340)
#define LLFIKHHPJEB_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1E96D120)
#define LLFIKHHPJEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96CEF0)
#define LLFIKHHPJEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96D800)
#define LLFIKHHPJEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96D6D0)
#define LLFIKHHPJEB_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E96D110)
#define LLFIKHHPJEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E96D0E0)
#define LLFIKHHPJEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96CF20)
#define LLFIKHHPJEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96D3C0)
#define LLFIKHHPJEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96D420)

inline static constexpr unsigned int LLFIKHHPJEB_TypeDefinitionIndex = 28784;

	class LLFIKHHPJEB : public ::System::Object
	{
	public:
		::BHMEPBAGOFF* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "LLFIKHHPJEB")->GetStaticField(0x3C370);
		}

		static ::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>**)UnitySDK::FromName("", "LLFIKHHPJEB")->GetStaticField(0x3C378);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLFIKHHPJEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLFIKHHPJEB*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLFIKHHPJEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>*(*)())((::PBYTE)hIl2Cpp + LLFIKHHPJEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLFIKHHPJEB* Clone()
		{
			return ((::LLFIKHHPJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BHMEPBAGOFF* ANALOEDDDHD()
		{
			return ((::BHMEPBAGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLFIKHHPJEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLFIKHHPJEB*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLFIKHHPJEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLFIKHHPJEB*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLFIKHHPJEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
