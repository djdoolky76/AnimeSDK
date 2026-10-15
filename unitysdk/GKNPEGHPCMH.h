#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNPEGHPCMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKNPEGHPCMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BD1D0)
#define GKNPEGHPCMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BD3F0)
#define GKNPEGHPCMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BCE20)
#define GKNPEGHPCMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BCDF0)
#define GKNPEGHPCMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BCDE0)
#define GKNPEGHPCMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BCF50)
#define GKNPEGHPCMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BCE80)
#define GKNPEGHPCMH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4BCE70)
#define GKNPEGHPCMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BD0C0)
#define GKNPEGHPCMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BCDA0)
#define GKNPEGHPCMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BD290)
#define GKNPEGHPCMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BD260)
#define GKNPEGHPCMH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4BCE60)
#define GKNPEGHPCMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BCDD0)
#define GKNPEGHPCMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BD0F0)
#define GKNPEGHPCMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BD150)

inline static constexpr unsigned int GKNPEGHPCMH_TypeDefinitionIndex = 32998;

	class GKNPEGHPCMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GKNPEGHPCMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKNPEGHPCMH*>**)UnitySDK::FromName("", "GKNPEGHPCMH")->GetStaticField(0x1E850);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKNPEGHPCMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNPEGHPCMH*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNPEGHPCMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKNPEGHPCMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKNPEGHPCMH*>*(*)())((::PBYTE)hIl2Cpp + GKNPEGHPCMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKNPEGHPCMH* Clone()
		{
			return ((::GKNPEGHPCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKNPEGHPCMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKNPEGHPCMH*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKNPEGHPCMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNPEGHPCMH*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKNPEGHPCMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
