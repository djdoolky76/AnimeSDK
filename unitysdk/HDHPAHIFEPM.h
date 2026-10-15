#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDHPAHIFEPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDHPAHIFEPM_BAGCCAKCIFD_OFFSET UNITYSDK_OFFSET(0x1E54C340)
#define HDHPAHIFEPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E54CA40)
#define HDHPAHIFEPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54CC70)
#define HDHPAHIFEPM_CFGFDLGNHHI_OFFSET UNITYSDK_OFFSET(0x1E54C310)
#define HDHPAHIFEPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E54C2A0)
#define HDHPAHIFEPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E54C270)
#define HDHPAHIFEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54C260)
#define HDHPAHIFEPM_ECNKCIHDAFP_OFFSET UNITYSDK_OFFSET(0x1E54C320)
#define HDHPAHIFEPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E54C3B0)
#define HDHPAHIFEPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E54C350)
#define HDHPAHIFEPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E54C680)
#define HDHPAHIFEPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E54C1F0)
#define HDHPAHIFEPM_JJMMHAAPLCJ_OFFSET UNITYSDK_OFFSET(0x1E54C330)
#define HDHPAHIFEPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E54CAF0)
#define HDHPAHIFEPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E54CA90)
#define HDHPAHIFEPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E54C250)
#define HDHPAHIFEPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E54C8C0)
#define HDHPAHIFEPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E54C920)

	class HDHPAHIFEPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Single EIKLKDGDLEG; // 0x18
		::System::Single KFNMMILCBFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDHPAHIFEPM")->GetStaticField(0x31DB0);
		}

		// static const ::System::Object PLAGKJDJGBN; // 0x0
		// static const ::System::Object OAPJNMPOKHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDHPAHIFEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHPAHIFEPM*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDHPAHIFEPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDHPAHIFEPM* Clone()
		{
			return ((::HDHPAHIFEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CLONE_OFFSET))(this);
		}

		::System::Single CFGFDLGNHHI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CFGFDLGNHHI_OFFSET))(this);
		}

		::System::Void ECNKCIHDAFP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_ECNKCIHDAFP_OFFSET))(this, a1);
		}

		::System::Single JJMMHAAPLCJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_JJMMHAAPLCJ_OFFSET))(this);
		}

		::System::Void BAGCCAKCIFD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_BAGCCAKCIFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDHPAHIFEPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDHPAHIFEPM*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDHPAHIFEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHPAHIFEPM*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDHPAHIFEPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
