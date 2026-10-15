#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNGEOHAHGM;
class DKFJLHHDFKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFNGEOHAHGM_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E1A7B80)
#define DFNGEOHAHGM_AOCIBPJHNOB_OFFSET UNITYSDK_OFFSET(0x1E1A7BB0)
#define DFNGEOHAHGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A8020)
#define DFNGEOHAHGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A8310)
#define DFNGEOHAHGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A7B40)
#define DFNGEOHAHGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A7AA0)
#define DFNGEOHAHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A7A60)
#define DFNGEOHAHGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A7C10)
#define DFNGEOHAHGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A7BE0)
#define DFNGEOHAHGM_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E1A7B70)
#define DFNGEOHAHGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A7D50)
#define DFNGEOHAHGM_HMJAPOGJMHJ_OFFSET UNITYSDK_OFFSET(0x1E1A7BD0)
#define DFNGEOHAHGM_IIMCKDDGIPM_OFFSET UNITYSDK_OFFSET(0x1E1A7BC0)
#define DFNGEOHAHGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A7A20)
#define DFNGEOHAHGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A8200)
#define DFNGEOHAHGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A8140)
#define DFNGEOHAHGM_MHFAPIOMEGL_OFFSET UNITYSDK_OFFSET(0x1E1A7BA0)
#define DFNGEOHAHGM_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E1A7B90)
#define DFNGEOHAHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A7A50)
#define DFNGEOHAHGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A7DD0)
#define DFNGEOHAHGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A7E30)

	class DFNGEOHAHGM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		::System::Boolean NOEPPCANOPJ; // 0x24
		::System::Boolean IFDNBEELGLO; // 0x25
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DFNGEOHAHGM")->GetStaticField(0x33150);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFNGEOHAHGM")->GetStaticField(0x33158);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object FIGNCNKIGFF; // 0x0
		// static const ::System::Object PNHELIMKPOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFNGEOHAHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNGEOHAHGM*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNGEOHAHGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFNGEOHAHGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFNGEOHAHGM* Clone()
		{
			return ((::DFNGEOHAHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean MHFAPIOMEGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_MHFAPIOMEGL_OFFSET))(this);
		}

		::System::Void AOCIBPJHNOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_AOCIBPJHNOB_OFFSET))(this, a1);
		}

		::System::Boolean IIMCKDDGIPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_IIMCKDDGIPM_OFFSET))(this);
		}

		::System::Void HMJAPOGJMHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_HMJAPOGJMHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFNGEOHAHGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFNGEOHAHGM*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFNGEOHAHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNGEOHAHGM*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFNGEOHAHGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
