#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOFCAOFIHCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOFCAOFIHCD_AICACFHKEBD_OFFSET UNITYSDK_OFFSET(0x1E79F100)
#define JOFCAOFIHCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E79F490)
#define JOFCAOFIHCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79F760)
#define JOFCAOFIHCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E79F090)
#define JOFCAOFIHCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E79F060)
#define JOFCAOFIHCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79F050)
#define JOFCAOFIHCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E79F250)
#define JOFCAOFIHCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E79F140)
#define JOFCAOFIHCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E79F320)
#define JOFCAOFIHCD_HIMOAFNOGOP_OFFSET UNITYSDK_OFFSET(0x1E79F110)
#define JOFCAOFIHCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E79EFE0)
#define JOFCAOFIHCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E79F5E0)
#define JOFCAOFIHCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E79F5A0)
#define JOFCAOFIHCD_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x1E79F130)
#define JOFCAOFIHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E79F040)
#define JOFCAOFIHCD_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x1E79F120)
#define JOFCAOFIHCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E79F350)
#define JOFCAOFIHCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E79F3B0)

	class JOFCAOFIHCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKMBEBBLHEL; // 0x18
		::System::UInt32 ALPNIIHPIIK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOFCAOFIHCD")->GetStaticField(0x4D400);
		}

		// static const ::System::Object HKJGFLJOJLL; // 0x0
		// static const ::System::Object AHHJCDPEOPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOFCAOFIHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFCAOFIHCD*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFCAOFIHCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOFCAOFIHCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOFCAOFIHCD* Clone()
		{
			return ((::JOFCAOFIHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_CLONE_OFFSET))(this);
		}

		::System::UInt32 AICACFHKEBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_AICACFHKEBD_OFFSET))(this);
		}

		::System::Void HIMOAFNOGOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_HIMOAFNOGOP_OFFSET))(this, a1);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOFCAOFIHCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOFCAOFIHCD*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOFCAOFIHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFCAOFIHCD*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOFCAOFIHCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
