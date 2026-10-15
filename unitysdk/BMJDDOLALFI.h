#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJDDOLALFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMJDDOLALFI_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E0282A0)
#define BMJDDOLALFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E028620)
#define BMJDDOLALFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0288F0)
#define BMJDDOLALFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E028220)
#define BMJDDOLALFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0281F0)
#define BMJDDOLALFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0281E0)
#define BMJDDOLALFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0283E0)
#define BMJDDOLALFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0282D0)
#define BMJDDOLALFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0284B0)
#define BMJDDOLALFI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E028290)
#define BMJDDOLALFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E028170)
#define BMJDDOLALFI_JKAFOJCNNLE_OFFSET UNITYSDK_OFFSET(0x1E0282B0)
#define BMJDDOLALFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E028770)
#define BMJDDOLALFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E028730)
#define BMJDDOLALFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0281D0)
#define BMJDDOLALFI_PFPJPNPFGJO_OFFSET UNITYSDK_OFFSET(0x1E0282C0)
#define BMJDDOLALFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0284E0)
#define BMJDDOLALFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E028540)

inline static constexpr unsigned int BMJDDOLALFI_TypeDefinitionIndex = 28001;

	class BMJDDOLALFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OMHANOKELLK; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BMJDDOLALFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMJDDOLALFI*>**)UnitySDK::FromName("", "BMJDDOLALFI")->GetStaticField(0x310A0);
		}

		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object LNGEKHEMLML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMJDDOLALFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJDDOLALFI*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJDDOLALFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMJDDOLALFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMJDDOLALFI*>*(*)())((::PBYTE)hIl2Cpp + BMJDDOLALFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMJDDOLALFI* Clone()
		{
			return ((::BMJDDOLALFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJDDOLALFI_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::UInt32 JKAFOJCNNLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_JKAFOJCNNLE_OFFSET))(this);
		}

		::System::Void PFPJPNPFGJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJDDOLALFI_PFPJPNPFGJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMJDDOLALFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMJDDOLALFI*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMJDDOLALFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJDDOLALFI*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMJDDOLALFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
