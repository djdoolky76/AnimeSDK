#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOBABKFCHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBOBABKFCHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB87140)
#define OBOBABKFCHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB87410)
#define OBOBABKFCHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB86D90)
#define OBOBABKFCHI_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB86DE0)
#define OBOBABKFCHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB86D60)
#define OBOBABKFCHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB86D50)
#define OBOBABKFCHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB86F00)
#define OBOBABKFCHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB86E20)
#define OBOBABKFCHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB86FD0)
#define OBOBABKFCHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB86D10)
#define OBOBABKFCHI_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB86DF0)
#define OBOBABKFCHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB87290)
#define OBOBABKFCHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB87250)
#define OBOBABKFCHI_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1EB86E10)
#define OBOBABKFCHI_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1EB86E00)
#define OBOBABKFCHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB86D40)
#define OBOBABKFCHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB87000)
#define OBOBABKFCHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB87060)

inline static constexpr unsigned int OBOBABKFCHI_TypeDefinitionIndex = 34183;

	class OBOBABKFCHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 JENHMINODOE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OBOBABKFCHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBOBABKFCHI*>**)UnitySDK::FromName("", "OBOBABKFCHI")->GetStaticField(0x106D0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object PMFNLNMINAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBOBABKFCHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOBABKFCHI*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOBABKFCHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBOBABKFCHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBOBABKFCHI*>*(*)())((::PBYTE)hIl2Cpp + OBOBABKFCHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBOBABKFCHI* Clone()
		{
			return ((::OBOBABKFCHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBOBABKFCHI_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBOBABKFCHI_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBOBABKFCHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBOBABKFCHI*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBOBABKFCHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOBABKFCHI*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBOBABKFCHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
