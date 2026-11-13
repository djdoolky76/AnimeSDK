#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNMNEJCMHGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNMNEJCMHGE_BKHPBOLHNCP_OFFSET UNITYSDK_OFFSET(0x205A5650)
#define KNMNEJCMHGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205A5B40)
#define KNMNEJCMHGE_CBMGICEDPMD_OFFSET UNITYSDK_OFFSET(0x205A5660)
#define KNMNEJCMHGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x205A5DD0)
#define KNMNEJCMHGE_CLONE_OFFSET UNITYSDK_OFFSET(0x205A5600)
#define KNMNEJCMHGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205A55C0)
#define KNMNEJCMHGE_CTOR_OFFSET UNITYSDK_OFFSET(0x205A55B0)
#define KNMNEJCMHGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205A56C0)
#define KNMNEJCMHGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x205A5690)
#define KNMNEJCMHGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205A58B0)
#define KNMNEJCMHGE_HFJEOOLEPIK_OFFSET UNITYSDK_OFFSET(0x205A5670)
#define KNMNEJCMHGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205A5570)
#define KNMNEJCMHGE_KPCPPCEAMOH_OFFSET UNITYSDK_OFFSET(0x205A5680)
#define KNMNEJCMHGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205A5C50)
#define KNMNEJCMHGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205A5C00)
#define KNMNEJCMHGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205A55A0)
#define KNMNEJCMHGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205A59D0)
#define KNMNEJCMHGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x205A5A30)

inline static constexpr unsigned int KNMNEJCMHGE_TypeDefinitionIndex = 34182;

	class KNMNEJCMHGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Single PKLCIBNJKDN; // 0x18
		::System::Int32 LFCNOIPGGGI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>**)UnitySDK::FromName("", "KNMNEJCMHGE")->GetStaticField(0x1FBC0);
		}

		// static const ::System::Object PODKPKOCLFH; // 0x0
		// static const ::System::Object LCFKBENEJBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNMNEJCMHGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNMNEJCMHGE*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>*(*)())((::PBYTE)hIl2Cpp + KNMNEJCMHGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNMNEJCMHGE* Clone()
		{
			return ((::KNMNEJCMHGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CLONE_OFFSET))(this);
		}

		::System::Int32 BKHPBOLHNCP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_BKHPBOLHNCP_OFFSET))(this);
		}

		::System::Void CBMGICEDPMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CBMGICEDPMD_OFFSET))(this, a1);
		}

		::System::Single HFJEOOLEPIK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_HFJEOOLEPIK_OFFSET))(this);
		}

		::System::Void KPCPPCEAMOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_KPCPPCEAMOH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNMNEJCMHGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNMNEJCMHGE*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNMNEJCMHGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNMNEJCMHGE*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
