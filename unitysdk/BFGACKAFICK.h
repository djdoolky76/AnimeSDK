#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFGACKAFICK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFGACKAFICK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6C680)
#define BFGACKAFICK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C950)
#define BFGACKAFICK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6C2D0)
#define BFGACKAFICK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6C2A0)
#define BFGACKAFICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C290)
#define BFGACKAFICK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6C440)
#define BFGACKAFICK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6C360)
#define BFGACKAFICK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6C510)
#define BFGACKAFICK_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1EA6C350)
#define BFGACKAFICK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6C250)
#define BFGACKAFICK_KOOPFFONGNN_OFFSET UNITYSDK_OFFSET(0x1EA6C330)
#define BFGACKAFICK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6C7D0)
#define BFGACKAFICK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6C790)
#define BFGACKAFICK_NBCNLIAFPAF_OFFSET UNITYSDK_OFFSET(0x1EA6C320)
#define BFGACKAFICK_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1EA6C340)
#define BFGACKAFICK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C280)
#define BFGACKAFICK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6C540)
#define BFGACKAFICK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6C5A0)

	class BFGACKAFICK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKDIHKPOLGA; // 0x18
		::System::UInt32 CHMFPHPJAIA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFGACKAFICK")->GetStaticField(0x42160);
		}

		// static const ::System::Object LIEBAJGBBPA; // 0x0
		// static const ::System::Object NKLILADIPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFGACKAFICK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGACKAFICK*))((::PBYTE)hIl2Cpp + BFGACKAFICK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGACKAFICK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFGACKAFICK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFGACKAFICK* Clone()
		{
			return ((::BFGACKAFICK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_CLONE_OFFSET))(this);
		}

		::System::UInt32 NBCNLIAFPAF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_NBCNLIAFPAF_OFFSET))(this);
		}

		::System::Void KOOPFFONGNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFGACKAFICK_KOOPFFONGNN_OFFSET))(this, a1);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFGACKAFICK_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFGACKAFICK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFGACKAFICK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFGACKAFICK*))((::PBYTE)hIl2Cpp + BFGACKAFICK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFGACKAFICK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGACKAFICK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFGACKAFICK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGACKAFICK*))((::PBYTE)hIl2Cpp + BFGACKAFICK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFGACKAFICK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
