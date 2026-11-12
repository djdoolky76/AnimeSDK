#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class LGCJFPABLJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGCJFPABLJL_AMGPCCBIJHG_OFFSET UNITYSDK_OFFSET(0x1FC69D20)
#define LGCJFPABLJL_BGLNKBIJNCF_OFFSET UNITYSDK_OFFSET(0x1FC69D10)
#define LGCJFPABLJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC6A220)
#define LGCJFPABLJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6A630)
#define LGCJFPABLJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC69CE0)
#define LGCJFPABLJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC69C40)
#define LGCJFPABLJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC69C00)
#define LGCJFPABLJL_DLIOAIOKHMC_OFFSET UNITYSDK_OFFSET(0x1FC69D50)
#define LGCJFPABLJL_EIDJCBPCIDF_OFFSET UNITYSDK_OFFSET(0x1FC69D40)
#define LGCJFPABLJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC69EC0)
#define LGCJFPABLJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC69D60)
#define LGCJFPABLJL_FDBIMIKEHJF_OFFSET UNITYSDK_OFFSET(0x1FC69D30)
#define LGCJFPABLJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC69FF0)
#define LGCJFPABLJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC69BC0)
#define LGCJFPABLJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC6A450)
#define LGCJFPABLJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC6A3A0)
#define LGCJFPABLJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC69BF0)
#define LGCJFPABLJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC6A060)
#define LGCJFPABLJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC6A0C0)

inline static constexpr unsigned int LGCJFPABLJL_TypeDefinitionIndex = 31138;

	class LGCJFPABLJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* FIAOFIKIHOP; // 0x18
		::System::UInt32 FMHHDMCPCJE; // 0x20
		::System::UInt32 BNFAJJPCBEI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LGCJFPABLJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGCJFPABLJL*>**)UnitySDK::FromName("", "LGCJFPABLJL")->GetStaticField(0x31A70);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_KGCLKOMGLFC()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "LGCJFPABLJL")->GetStaticField(0x31A78);
		}

		// static const ::System::Object KCBJIPMJBNC; // 0x0
		// static const ::System::Object PEGMPHBKJOK; // 0x0
		// static const ::System::Object AMODKJJPNLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGCJFPABLJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGCJFPABLJL*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCJFPABLJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGCJFPABLJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGCJFPABLJL*>*(*)())((::PBYTE)hIl2Cpp + LGCJFPABLJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGCJFPABLJL* Clone()
		{
			return ((::LGCJFPABLJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 BGLNKBIJNCF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_BGLNKBIJNCF_OFFSET))(this);
		}

		::System::Void AMGPCCBIJHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGCJFPABLJL_AMGPCCBIJHG_OFFSET))(this, a1);
		}

		::System::UInt32 FDBIMIKEHJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_FDBIMIKEHJF_OFFSET))(this);
		}

		::System::Void EIDJCBPCIDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGCJFPABLJL_EIDJCBPCIDF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DLIOAIOKHMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_DLIOAIOKHMC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGCJFPABLJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGCJFPABLJL*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCJFPABLJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGCJFPABLJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGCJFPABLJL*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGCJFPABLJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
