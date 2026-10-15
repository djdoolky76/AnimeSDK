#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
class IACEIJKMLLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IACEIJKMLLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E603140)
#define IACEIJKMLLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6033E0)
#define IACEIJKMLLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E602AD0)
#define IACEIJKMLLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E602A60)
#define IACEIJKMLLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E602A50)
#define IACEIJKMLLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E602CE0)
#define IACEIJKMLLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E602B70)
#define IACEIJKMLLN_FJPMMKNEEOA_OFFSET UNITYSDK_OFFSET(0x1E602B50)
#define IACEIJKMLLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E602FB0)
#define IACEIJKMLLN_IINPGEOKMKC_OFFSET UNITYSDK_OFFSET(0x1E602B60)
#define IACEIJKMLLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E602A10)
#define IACEIJKMLLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E603230)
#define IACEIJKMLLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6031A0)
#define IACEIJKMLLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E602A40)
#define IACEIJKMLLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E603050)
#define IACEIJKMLLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6030B0)

inline static constexpr unsigned int IACEIJKMLLN_TypeDefinitionIndex = 27477;

	class IACEIJKMLLN : public ::System::Object
	{
	public:
		::HGCIAPKELAF* PNFPNJLFGPC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IACEIJKMLLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IACEIJKMLLN*>**)UnitySDK::FromName("", "IACEIJKMLLN")->GetStaticField(0x52AF0);
		}

		// static const ::System::Object JPJPDLBENDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IACEIJKMLLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IACEIJKMLLN*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IACEIJKMLLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IACEIJKMLLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IACEIJKMLLN*>*(*)())((::PBYTE)hIl2Cpp + IACEIJKMLLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IACEIJKMLLN* Clone()
		{
			return ((::IACEIJKMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_CLONE_OFFSET))(this);
		}

		::HGCIAPKELAF* FJPMMKNEEOA()
		{
			return ((::HGCIAPKELAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_FJPMMKNEEOA_OFFSET))(this);
		}

		::System::Void IINPGEOKMKC(::HGCIAPKELAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIAPKELAF*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_IINPGEOKMKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IACEIJKMLLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IACEIJKMLLN*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IACEIJKMLLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IACEIJKMLLN*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IACEIJKMLLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
