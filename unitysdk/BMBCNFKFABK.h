#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBCNFKFABK;
class JECNOELJLKO;
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

#define BMBCNFKFABK_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1FC6C780)
#define BMBCNFKFABK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC6CC10)
#define BMBCNFKFABK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D160)
#define BMBCNFKFABK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC6C730)
#define BMBCNFKFABK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC6C600)
#define BMBCNFKFABK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C5B0)
#define BMBCNFKFABK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC6C7E0)
#define BMBCNFKFABK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC6C7B0)
#define BMBCNFKFABK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC6C770)
#define BMBCNFKFABK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC6C9C0)
#define BMBCNFKFABK_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1FC6C7A0)
#define BMBCNFKFABK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC6C570)
#define BMBCNFKFABK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC6CEC0)
#define BMBCNFKFABK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC6CD50)
#define BMBCNFKFABK_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1FC6C790)
#define BMBCNFKFABK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC6C760)
#define BMBCNFKFABK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C5A0)
#define BMBCNFKFABK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC6CA40)
#define BMBCNFKFABK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC6CAA0)

inline static constexpr unsigned int BMBCNFKFABK_TypeDefinitionIndex = 29336;

	class BMBCNFKFABK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* CMDGAIOLHKP; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "BMBCNFKFABK")->GetStaticField(0x58B40);
		}

		static ::Google::Protobuf::MessageParser_1<::BMBCNFKFABK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMBCNFKFABK*>**)UnitySDK::FromName("", "BMBCNFKFABK")->GetStaticField(0x58B48);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMBCNFKFABK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBCNFKFABK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMBCNFKFABK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMBCNFKFABK*>*(*)())((::PBYTE)hIl2Cpp + BMBCNFKFABK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMBCNFKFABK* Clone()
		{
			return ((::BMBCNFKFABK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBCNFKFABK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JECNOELJLKO* ANALOEDDDHD()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMBCNFKFABK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMBCNFKFABK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
