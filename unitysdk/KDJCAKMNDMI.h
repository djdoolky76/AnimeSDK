#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDJCAKMNDMI;
class NANBAKBDLPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDJCAKMNDMI_BKKKMHIEDED_OFFSET UNITYSDK_OFFSET(0x203CB840)
#define KDJCAKMNDMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203CBDD0)
#define KDJCAKMNDMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x203CC130)
#define KDJCAKMNDMI_CLONE_OFFSET UNITYSDK_OFFSET(0x203CB7B0)
#define KDJCAKMNDMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203CB740)
#define KDJCAKMNDMI_CTOR_OFFSET UNITYSDK_OFFSET(0x203CB730)
#define KDJCAKMNDMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203CB9C0)
#define KDJCAKMNDMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x203CB850)
#define KDJCAKMNDMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203CBC90)
#define KDJCAKMNDMI_HJGBMNGPKOP_OFFSET UNITYSDK_OFFSET(0x203CB830)
#define KDJCAKMNDMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203CB6F0)
#define KDJCAKMNDMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203CBF20)
#define KDJCAKMNDMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203CBE30)
#define KDJCAKMNDMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203CB720)
#define KDJCAKMNDMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203CBCE0)
#define KDJCAKMNDMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x203CBD40)

inline static constexpr unsigned int KDJCAKMNDMI_TypeDefinitionIndex = 32335;

	class KDJCAKMNDMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NANBAKBDLPI* FMOILAGPCDI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KDJCAKMNDMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDJCAKMNDMI*>**)UnitySDK::FromName("", "KDJCAKMNDMI")->GetStaticField(0x6EFE0);
		}

		// static const ::System::Object BPFECKGGPEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDJCAKMNDMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDJCAKMNDMI*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDJCAKMNDMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDJCAKMNDMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDJCAKMNDMI*>*(*)())((::PBYTE)hIl2Cpp + KDJCAKMNDMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDJCAKMNDMI* Clone()
		{
			return ((::KDJCAKMNDMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_CLONE_OFFSET))(this);
		}

		::NANBAKBDLPI* HJGBMNGPKOP()
		{
			return ((::NANBAKBDLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_HJGBMNGPKOP_OFFSET))(this);
		}

		::System::Void BKKKMHIEDED(::NANBAKBDLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NANBAKBDLPI*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_BKKKMHIEDED_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDJCAKMNDMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDJCAKMNDMI*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDJCAKMNDMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDJCAKMNDMI*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDJCAKMNDMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
