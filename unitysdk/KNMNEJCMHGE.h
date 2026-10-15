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

#define KNMNEJCMHGE_BKHPBOLHNCP_OFFSET UNITYSDK_OFFSET(0x1E87A4D0)
#define KNMNEJCMHGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E87A9A0)
#define KNMNEJCMHGE_CBMGICEDPMD_OFFSET UNITYSDK_OFFSET(0x1E87A4E0)
#define KNMNEJCMHGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87AC40)
#define KNMNEJCMHGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E87A460)
#define KNMNEJCMHGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E87A420)
#define KNMNEJCMHGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87A410)
#define KNMNEJCMHGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E87A520)
#define KNMNEJCMHGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E87A4F0)
#define KNMNEJCMHGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E87A710)
#define KNMNEJCMHGE_HFJEOOLEPIK_OFFSET UNITYSDK_OFFSET(0x1E87A4B0)
#define KNMNEJCMHGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E87A3D0)
#define KNMNEJCMHGE_KPCPPCEAMOH_OFFSET UNITYSDK_OFFSET(0x1E87A4C0)
#define KNMNEJCMHGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E87AAC0)
#define KNMNEJCMHGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E87AA70)
#define KNMNEJCMHGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E87A400)
#define KNMNEJCMHGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E87A830)
#define KNMNEJCMHGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E87A890)

inline static constexpr unsigned int KNMNEJCMHGE_TypeDefinitionIndex = 33267;

	class KNMNEJCMHGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Single PKLCIBNJKDN; // 0x18
		::System::Int32 LFCNOIPGGGI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNMNEJCMHGE*>**)UnitySDK::FromName("", "KNMNEJCMHGE")->GetStaticField(0x20860);
		}

		// static const ::System::Object LCFKBENEJBM; // 0x0
		// static const ::System::Object PODKPKOCLFH; // 0x0
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

		::System::Single HFJEOOLEPIK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_HFJEOOLEPIK_OFFSET))(this);
		}

		::System::Void KPCPPCEAMOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_KPCPPCEAMOH_OFFSET))(this, a1);
		}

		::System::Int32 BKHPBOLHNCP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_BKHPBOLHNCP_OFFSET))(this);
		}

		::System::Void CBMGICEDPMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNMNEJCMHGE_CBMGICEDPMD_OFFSET))(this, a1);
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
