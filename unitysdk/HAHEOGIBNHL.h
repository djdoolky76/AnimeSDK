#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAHEOGIBNHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAHEOGIBNHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5045C0)
#define HAHEOGIBNHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5048E0)
#define HAHEOGIBNHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E504200)
#define HAHEOGIBNHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5041C0)
#define HAHEOGIBNHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5041B0)
#define HAHEOGIBNHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E504370)
#define HAHEOGIBNHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E504290)
#define HAHEOGIBNHL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E504280)
#define HAHEOGIBNHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E504440)
#define HAHEOGIBNHL_HBMDDNLCOPK_OFFSET UNITYSDK_OFFSET(0x1E504250)
#define HAHEOGIBNHL_IGEIPOHDFIH_OFFSET UNITYSDK_OFFSET(0x1E504260)
#define HAHEOGIBNHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E504170)
#define HAHEOGIBNHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E504760)
#define HAHEOGIBNHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E504720)
#define HAHEOGIBNHL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E504270)
#define HAHEOGIBNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5041A0)
#define HAHEOGIBNHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E504480)
#define HAHEOGIBNHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5044E0)

	class HAHEOGIBNHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 ICJLCENOPKP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HAHEOGIBNHL")->GetStaticField(0x2CA30);
		}

		// static const ::System::Object KIPBCONBHCJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAHEOGIBNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAHEOGIBNHL*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAHEOGIBNHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HAHEOGIBNHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAHEOGIBNHL* Clone()
		{
			return ((::HAHEOGIBNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_CLONE_OFFSET))(this);
		}

		::System::UInt64 HBMDDNLCOPK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_HBMDDNLCOPK_OFFSET))(this);
		}

		::System::Void IGEIPOHDFIH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_IGEIPOHDFIH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAHEOGIBNHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAHEOGIBNHL*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAHEOGIBNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAHEOGIBNHL*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAHEOGIBNHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
