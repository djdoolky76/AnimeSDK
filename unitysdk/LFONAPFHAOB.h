#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFONAPFHAOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFONAPFHAOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E947280)
#define LFONAPFHAOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9474A0)
#define LFONAPFHAOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E946E70)
#define LFONAPFHAOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E946E40)
#define LFONAPFHAOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946E30)
#define LFONAPFHAOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E947000)
#define LFONAPFHAOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E946F00)
#define LFONAPFHAOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E947170)
#define LFONAPFHAOB_JGGAAODHDCF_OFFSET UNITYSDK_OFFSET(0x1E946EF0)
#define LFONAPFHAOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E946DC0)
#define LFONAPFHAOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E947340)
#define LFONAPFHAOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E947310)
#define LFONAPFHAOB_NLFHLOKALPG_OFFSET UNITYSDK_OFFSET(0x1E946EE0)
#define LFONAPFHAOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E946E20)
#define LFONAPFHAOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9471A0)
#define LFONAPFHAOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E947200)

	class LFONAPFHAOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LICILOLFFAB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LFONAPFHAOB")->GetStaticField(0x3D010);
		}

		// static const ::System::Object COMMLNIDMCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFONAPFHAOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFONAPFHAOB*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFONAPFHAOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LFONAPFHAOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFONAPFHAOB* Clone()
		{
			return ((::LFONAPFHAOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 NLFHLOKALPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_NLFHLOKALPG_OFFSET))(this);
		}

		::System::Void JGGAAODHDCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFONAPFHAOB_JGGAAODHDCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFONAPFHAOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFONAPFHAOB*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFONAPFHAOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFONAPFHAOB*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFONAPFHAOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
