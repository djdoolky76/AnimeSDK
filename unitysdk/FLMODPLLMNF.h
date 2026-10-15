#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLMODPLLMNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLMODPLLMNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DA690)
#define FLMODPLLMNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA970)
#define FLMODPLLMNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DA1B0)
#define FLMODPLLMNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DA170)
#define FLMODPLLMNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA160)
#define FLMODPLLMNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DA390)
#define FLMODPLLMNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DA290)
#define FLMODPLLMNF_GAMOKDFCKDB_OFFSET UNITYSDK_OFFSET(0x1E3DA220)
#define FLMODPLLMNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DA490)
#define FLMODPLLMNF_GLDPFFLEBGK_OFFSET UNITYSDK_OFFSET(0x1E3DA240)
#define FLMODPLLMNF_HAAECAKOKKB_OFFSET UNITYSDK_OFFSET(0x1E3DA210)
#define FLMODPLLMNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DA120)
#define FLMODPLLMNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DA7C0)
#define FLMODPLLMNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DA770)
#define FLMODPLLMNF_NHPNOKFJCKL_OFFSET UNITYSDK_OFFSET(0x1E3DA230)
#define FLMODPLLMNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA150)
#define FLMODPLLMNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DA540)
#define FLMODPLLMNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DA5A0)

inline static constexpr unsigned int FLMODPLLMNF_TypeDefinitionIndex = 32104;

	class FLMODPLLMNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* LKKJAHOJCME; // 0x18
		::System::UInt32 NLBFDLOJBMJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FLMODPLLMNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLMODPLLMNF*>**)UnitySDK::FromName("", "FLMODPLLMNF")->GetStaticField(0x64820);
		}

		// static const ::System::Object DENKEPPLFEE; // 0x0
		// static const ::System::Object FNIIGHEHCFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLMODPLLMNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLMODPLLMNF*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMODPLLMNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLMODPLLMNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLMODPLLMNF*>*(*)())((::PBYTE)hIl2Cpp + FLMODPLLMNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLMODPLLMNF* Clone()
		{
			return ((::FLMODPLLMNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 HAAECAKOKKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_HAAECAKOKKB_OFFSET))(this);
		}

		::System::Void GAMOKDFCKDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLMODPLLMNF_GAMOKDFCKDB_OFFSET))(this, a1);
		}

		::System::String* NHPNOKFJCKL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_NHPNOKFJCKL_OFFSET))(this);
		}

		::System::Void GLDPFFLEBGK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_GLDPFFLEBGK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLMODPLLMNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLMODPLLMNF*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLMODPLLMNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLMODPLLMNF*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLMODPLLMNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
