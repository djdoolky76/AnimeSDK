#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLJMFHFEBAI;
class PPONNIHFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLJMFHFEBAI_ACKKJFCOGNA_OFFSET UNITYSDK_OFFSET(0x1FD663A0)
#define OLJMFHFEBAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD66930)
#define OLJMFHFEBAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD66BC0)
#define OLJMFHFEBAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD662F0)
#define OLJMFHFEBAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD66260)
#define OLJMFHFEBAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD66250)
#define OLJMFHFEBAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD66520)
#define OLJMFHFEBAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD663B0)
#define OLJMFHFEBAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD667F0)
#define OLJMFHFEBAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD66210)
#define OLJMFHFEBAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD66A20)
#define OLJMFHFEBAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD66990)
#define OLJMFHFEBAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD66240)
#define OLJMFHFEBAI_POEAMHIMFHO_OFFSET UNITYSDK_OFFSET(0x1FD66390)
#define OLJMFHFEBAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD66840)
#define OLJMFHFEBAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD668A0)

inline static constexpr unsigned int OLJMFHFEBAI_TypeDefinitionIndex = 35910;

	class OLJMFHFEBAI : public ::System::Object
	{
	public:
		::PPONNIHFJAP* LFHEKFOHLLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OLJMFHFEBAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLJMFHFEBAI*>**)UnitySDK::FromName("", "OLJMFHFEBAI")->GetStaticField(0x20B40);
		}

		// static const ::System::Object DBCNCMIDKLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLJMFHFEBAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLJMFHFEBAI*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLJMFHFEBAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLJMFHFEBAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLJMFHFEBAI*>*(*)())((::PBYTE)hIl2Cpp + OLJMFHFEBAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLJMFHFEBAI* Clone()
		{
			return ((::OLJMFHFEBAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_CLONE_OFFSET))(this);
		}

		::PPONNIHFJAP* POEAMHIMFHO()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_POEAMHIMFHO_OFFSET))(this);
		}

		::System::Void ACKKJFCOGNA(::PPONNIHFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONNIHFJAP*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_ACKKJFCOGNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLJMFHFEBAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLJMFHFEBAI*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLJMFHFEBAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLJMFHFEBAI*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLJMFHFEBAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
