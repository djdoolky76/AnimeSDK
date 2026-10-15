#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGLLFCMEFKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGLLFCMEFKG_BJNBLLGKIEB_OFFSET UNITYSDK_OFFSET(0x1DF34220)
#define PGLLFCMEFKG_BKIPJBKCIHF_OFFSET UNITYSDK_OFFSET(0x1DF34200)
#define PGLLFCMEFKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF34620)
#define PGLLFCMEFKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF34930)
#define PGLLFCMEFKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF341A0)
#define PGLLFCMEFKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF34160)
#define PGLLFCMEFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF34150)
#define PGLLFCMEFKG_EMAAFBHHJBI_OFFSET UNITYSDK_OFFSET(0x1DF34210)
#define PGLLFCMEFKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF34340)
#define PGLLFCMEFKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF34250)
#define PGLLFCMEFKG_FDCBGKOLFLM_OFFSET UNITYSDK_OFFSET(0x1DF34230)
#define PGLLFCMEFKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF34420)
#define PGLLFCMEFKG_GLOKDJBCJAF_OFFSET UNITYSDK_OFFSET(0x1DF34240)
#define PGLLFCMEFKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF34110)
#define PGLLFCMEFKG_KBNANHODEOL_OFFSET UNITYSDK_OFFSET(0x1DF341F0)
#define PGLLFCMEFKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF34790)
#define PGLLFCMEFKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF34740)
#define PGLLFCMEFKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF34140)
#define PGLLFCMEFKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF34450)
#define PGLLFCMEFKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF344B0)

inline static constexpr unsigned int PGLLFCMEFKG_TypeDefinitionIndex = 33920;

	class PGLLFCMEFKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean ABIIBKBGNHC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 HIJHFDEFGPP; // 0x1C
		::System::UInt32 AOCFCLGNENH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGLLFCMEFKG")->GetStaticField(0x3E5D0);
		}

		// static const ::System::Object HEHLDGCDMPG; // 0x0
		// static const ::System::Object JOFLFBJMGKI; // 0x0
		// static const ::System::Object LEFFLEMFMAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGLLFCMEFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGLLFCMEFKG*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLLFCMEFKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGLLFCMEFKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGLLFCMEFKG* Clone()
		{
			return ((::PGLLFCMEFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_CLONE_OFFSET))(this);
		}

		::System::Boolean KBNANHODEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_KBNANHODEOL_OFFSET))(this);
		}

		::System::Void BKIPJBKCIHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_BKIPJBKCIHF_OFFSET))(this, a1);
		}

		::System::UInt32 EMAAFBHHJBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_EMAAFBHHJBI_OFFSET))(this);
		}

		::System::Void BJNBLLGKIEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_BJNBLLGKIEB_OFFSET))(this, a1);
		}

		::System::UInt32 FDCBGKOLFLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_FDCBGKOLFLM_OFFSET))(this);
		}

		::System::Void GLOKDJBCJAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_GLOKDJBCJAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGLLFCMEFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGLLFCMEFKG*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGLLFCMEFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGLLFCMEFKG*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGLLFCMEFKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
