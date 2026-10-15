#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFKHDIKCNI;
class PEMCOFDFCAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEMCOFDFCAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1D310)
#define PEMCOFDFCAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D640)
#define PEMCOFDFCAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1CB80)
#define PEMCOFDFCAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1CAF0)
#define PEMCOFDFCAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1CAE0)
#define PEMCOFDFCAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1CE10)
#define PEMCOFDFCAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1CC70)
#define PEMCOFDFCAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1D0E0)
#define PEMCOFDFCAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1CA70)
#define PEMCOFDFCAC_MEKGFPFIKOG_OFFSET UNITYSDK_OFFSET(0x1DF1CC60)
#define PEMCOFDFCAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1D470)
#define PEMCOFDFCAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1D370)
#define PEMCOFDFCAC_NPFOKEKJFKA_OFFSET UNITYSDK_OFFSET(0x1DF1CC50)
#define PEMCOFDFCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1CAD0)
#define PEMCOFDFCAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1D220)
#define PEMCOFDFCAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1D280)

inline static constexpr unsigned int PEMCOFDFCAC_TypeDefinitionIndex = 31806;

	class PEMCOFDFCAC : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* MKGGEAGDOHE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PEMCOFDFCAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEMCOFDFCAC*>**)UnitySDK::FromName("", "PEMCOFDFCAC")->GetStaticField(0x3A250);
		}

		// static const ::System::Object NBGJNADFDOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEMCOFDFCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMCOFDFCAC*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMCOFDFCAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEMCOFDFCAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEMCOFDFCAC*>*(*)())((::PBYTE)hIl2Cpp + PEMCOFDFCAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEMCOFDFCAC* Clone()
		{
			return ((::PEMCOFDFCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_CLONE_OFFSET))(this);
		}

		::NCFKHDIKCNI* NPFOKEKJFKA()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_NPFOKEKJFKA_OFFSET))(this);
		}

		::System::Void MEKGFPFIKOG(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_MEKGFPFIKOG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEMCOFDFCAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEMCOFDFCAC*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEMCOFDFCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMCOFDFCAC*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEMCOFDFCAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
