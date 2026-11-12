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

#define LLFIKHHPJEB_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1FCBD360)
#define LLFIKHHPJEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCBD7E0)
#define LLFIKHHPJEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCBDCA0)
#define LLFIKHHPJEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCBD310)
#define LLFIKHHPJEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCBD1E0)
#define LLFIKHHPJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCBD190)
#define LLFIKHHPJEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCBD3C0)
#define LLFIKHHPJEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCBD390)
#define LLFIKHHPJEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FCBD350)
#define LLFIKHHPJEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCBD5A0)
#define LLFIKHHPJEB_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1FCBD380)
#define LLFIKHHPJEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCBD150)
#define LLFIKHHPJEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCBDA50)
#define LLFIKHHPJEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCBD920)
#define LLFIKHHPJEB_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1FCBD370)
#define LLFIKHHPJEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FCBD340)
#define LLFIKHHPJEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCBD180)
#define LLFIKHHPJEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCBD620)
#define LLFIKHHPJEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCBD680)

inline static constexpr unsigned int LLFIKHHPJEB_TypeDefinitionIndex = 29374;

	class LLFIKHHPJEB : public ::System::Object
	{
	public:
		::BHMEPBAGOFF* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "LLFIKHHPJEB")->GetStaticField(0x3EA50);
		}

		static ::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLFIKHHPJEB*>**)UnitySDK::FromName("", "LLFIKHHPJEB")->GetStaticField(0x3EA58);
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
