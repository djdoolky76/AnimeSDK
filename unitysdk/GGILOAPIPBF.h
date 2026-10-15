#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILBJDAJPAA.h"
#include "unitysdk/System/Object.h"
class GGILOAPIPBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGILOAPIPBF_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E47E050)
#define GGILOAPIPBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47E3C0)
#define GGILOAPIPBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47E6D0)
#define GGILOAPIPBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47E000)
#define GGILOAPIPBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47DFD0)
#define GGILOAPIPBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47DFC0)
#define GGILOAPIPBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47E170)
#define GGILOAPIPBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47E090)
#define GGILOAPIPBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47E240)
#define GGILOAPIPBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47DF80)
#define GGILOAPIPBF_LMKEDKMBKIC_OFFSET UNITYSDK_OFFSET(0x1E47E080)
#define GGILOAPIPBF_MCCMOFCCMHI_OFFSET UNITYSDK_OFFSET(0x1E47E070)
#define GGILOAPIPBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47E550)
#define GGILOAPIPBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47E510)
#define GGILOAPIPBF_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E47E060)
#define GGILOAPIPBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47DFB0)
#define GGILOAPIPBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47E270)
#define GGILOAPIPBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47E2D0)

	class GGILOAPIPBF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGDIKGKCCFN; // 0x18
		::FILBJDAJPAA PACOOECNLEA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GGILOAPIPBF")->GetStaticField(0x16230);
		}

		// static const ::System::Object CLJJLLDPMBN; // 0x0
		// static const ::System::Object HOFOCEKHOJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGILOAPIPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGILOAPIPBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GGILOAPIPBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGILOAPIPBF* Clone()
		{
			return ((::GGILOAPIPBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGILOAPIPBF_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::FILBJDAJPAA MCCMOFCCMHI()
		{
			return ((::FILBJDAJPAA(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MCCMOFCCMHI_OFFSET))(this);
		}

		::System::Void LMKEDKMBKIC(::FILBJDAJPAA a1)
		{
			return ((::System::Void(*)(::PVOID, ::FILBJDAJPAA))((::PBYTE)hIl2Cpp + GGILOAPIPBF_LMKEDKMBKIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGILOAPIPBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGILOAPIPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
