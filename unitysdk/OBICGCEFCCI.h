#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBICGCEFCCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBICGCEFCCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBAF350)
#define OBICGCEFCCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAF570)
#define OBICGCEFCCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBAEFA0)
#define OBICGCEFCCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBAEF70)
#define OBICGCEFCCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAEF60)
#define OBICGCEFCCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBAF0D0)
#define OBICGCEFCCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBAF000)
#define OBICGCEFCCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EBAEFF0)
#define OBICGCEFCCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBAF240)
#define OBICGCEFCCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBAEF20)
#define OBICGCEFCCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBAF410)
#define OBICGCEFCCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBAF3E0)
#define OBICGCEFCCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EBAEFE0)
#define OBICGCEFCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBAEF50)
#define OBICGCEFCCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBAF270)
#define OBICGCEFCCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBAF2D0)

	class OBICGCEFCCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OBICGCEFCCI")->GetStaticField(0x10550);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBICGCEFCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBICGCEFCCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OBICGCEFCCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBICGCEFCCI* Clone()
		{
			return ((::OBICGCEFCCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBICGCEFCCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBICGCEFCCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBICGCEFCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
