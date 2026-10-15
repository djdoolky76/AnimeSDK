#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJMPHAAOEFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJMPHAAOEFL_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1DF4A0C0)
#define BJMPHAAOEFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF4A450)
#define BJMPHAAOEFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A730)
#define BJMPHAAOEFL_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1DF4A0D0)
#define BJMPHAAOEFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF4A030)
#define BJMPHAAOEFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF4A000)
#define BJMPHAAOEFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF49FF0)
#define BJMPHAAOEFL_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1DF4A0B0)
#define BJMPHAAOEFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF4A1F0)
#define BJMPHAAOEFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF4A0E0)
#define BJMPHAAOEFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF4A2C0)
#define BJMPHAAOEFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF49F80)
#define BJMPHAAOEFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF4A5B0)
#define BJMPHAAOEFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF4A570)
#define BJMPHAAOEFL_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1DF4A0A0)
#define BJMPHAAOEFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF49FE0)
#define BJMPHAAOEFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4A2F0)
#define BJMPHAAOEFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF4A350)

inline static constexpr unsigned int BJMPHAAOEFL_TypeDefinitionIndex = 27829;

	class BJMPHAAOEFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDKNJCIEBHA; // 0x18
		::System::Int32 DFKHBNCHKBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BJMPHAAOEFL")->GetStaticField(0x3DE80);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJMPHAAOEFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJMPHAAOEFL*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BJMPHAAOEFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJMPHAAOEFL* Clone()
		{
			return ((::BJMPHAAOEFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CLONE_OFFSET))(this);
		}

		::System::Int32 MNLDMBGAJIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJMPHAAOEFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJMPHAAOEFL*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJMPHAAOEFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJMPHAAOEFL*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJMPHAAOEFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
