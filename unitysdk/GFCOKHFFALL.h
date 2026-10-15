#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCOKHFFALL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFCOKHFFALL_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E461F50)
#define GFCOKHFFALL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4622A0)
#define GFCOKHFFALL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E462570)
#define GFCOKHFFALL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E461EF0)
#define GFCOKHFFALL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E461EC0)
#define GFCOKHFFALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E461EB0)
#define GFCOKHFFALL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E462060)
#define GFCOKHFFALL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E461F80)
#define GFCOKHFFALL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E461F70)
#define GFCOKHFFALL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E462130)
#define GFCOKHFFALL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E461E70)
#define GFCOKHFFALL_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E461F40)
#define GFCOKHFFALL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4623F0)
#define GFCOKHFFALL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4623B0)
#define GFCOKHFFALL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E461F60)
#define GFCOKHFFALL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E461EA0)
#define GFCOKHFFALL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E462160)
#define GFCOKHFFALL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4621C0)

	class GFCOKHFFALL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKMEMBIPHAN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFCOKHFFALL")->GetStaticField(0x13030);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFCOKHFFALL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCOKHFFALL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFCOKHFFALL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFCOKHFFALL* Clone()
		{
			return ((::GFCOKHFFALL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCOKHFFALL_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCOKHFFALL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFCOKHFFALL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFCOKHFFALL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
