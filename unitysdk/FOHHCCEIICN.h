#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOHHCCEIICN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOHHCCEIICN_BMEENJGEHKP_OFFSET UNITYSDK_OFFSET(0x1E3FB000)
#define FOHHCCEIICN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FB370)
#define FOHHCCEIICN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FB5D0)
#define FOHHCCEIICN_CGFNEDCOOMD_OFFSET UNITYSDK_OFFSET(0x1E3FAFF0)
#define FOHHCCEIICN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FAF80)
#define FOHHCCEIICN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FAF40)
#define FOHHCCEIICN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FAF30)
#define FOHHCCEIICN_EBJHNOFJBCH_OFFSET UNITYSDK_OFFSET(0x1E3FAFD0)
#define FOHHCCEIICN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FB0F0)
#define FOHHCCEIICN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FB010)
#define FOHHCCEIICN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FB1D0)
#define FOHHCCEIICN_IPONDLGEAMG_OFFSET UNITYSDK_OFFSET(0x1E3FAFE0)
#define FOHHCCEIICN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FAEF0)
#define FOHHCCEIICN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FB450)
#define FOHHCCEIICN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FB410)
#define FOHHCCEIICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FAF20)
#define FOHHCCEIICN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FB200)
#define FOHHCCEIICN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FB260)

	class FOHHCCEIICN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NLNIOMNACDB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KJHFIADNIFI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FOHHCCEIICN")->GetStaticField(0x65F60);
		}

		// static const ::System::Object JKJHNGACNOA; // 0x0
		// static const ::System::Object IGFDBNNGBBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOHHCCEIICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOHHCCEIICN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FOHHCCEIICN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOHHCCEIICN* Clone()
		{
			return ((::FOHHCCEIICN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EBJHNOFJBCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EBJHNOFJBCH_OFFSET))(this);
		}

		::System::Void IPONDLGEAMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHHCCEIICN_IPONDLGEAMG_OFFSET))(this, a1);
		}

		::System::Boolean CGFNEDCOOMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CGFNEDCOOMD_OFFSET))(this);
		}

		::System::Void BMEENJGEHKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOHHCCEIICN_BMEENJGEHKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOHHCCEIICN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHCCEIICN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOHHCCEIICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHHCCEIICN*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOHHCCEIICN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
