#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFAFAIMJOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDFAFAIMJOM_BKGOJMIBBPJ_OFFSET UNITYSDK_OFFSET(0x20424950)
#define JDFAFAIMJOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20424C80)
#define JDFAFAIMJOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20424F50)
#define JDFAFAIMJOM_CLONE_OFFSET UNITYSDK_OFFSET(0x204248D0)
#define JDFAFAIMJOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204248A0)
#define JDFAFAIMJOM_CTOR_OFFSET UNITYSDK_OFFSET(0x20424890)
#define JDFAFAIMJOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20424A40)
#define JDFAFAIMJOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20424960)
#define JDFAFAIMJOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20424B10)
#define JDFAFAIMJOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20424850)
#define JDFAFAIMJOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20424DD0)
#define JDFAFAIMJOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20424D90)
#define JDFAFAIMJOM_MPEEDLNBONK_OFFSET UNITYSDK_OFFSET(0x20424930)
#define JDFAFAIMJOM_OLMAHKEJDJE_OFFSET UNITYSDK_OFFSET(0x20424940)
#define JDFAFAIMJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20424880)
#define JDFAFAIMJOM_PGLNJEILMKB_OFFSET UNITYSDK_OFFSET(0x20424920)
#define JDFAFAIMJOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20424B40)
#define JDFAFAIMJOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20424BA0)

inline static constexpr unsigned int JDFAFAIMJOM_TypeDefinitionIndex = 26981;

	class JDFAFAIMJOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MMOEKGNHACP; // 0x18
		::System::UInt32 NFGNEEGBNIF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JDFAFAIMJOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDFAFAIMJOM*>**)UnitySDK::FromName("", "JDFAFAIMJOM")->GetStaticField(0x5CAF0);
		}

		// static const ::System::Object KPGNEGMDKCI; // 0x0
		// static const ::System::Object FPKJMJADEBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDFAFAIMJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDFAFAIMJOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDFAFAIMJOM*>*(*)())((::PBYTE)hIl2Cpp + JDFAFAIMJOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDFAFAIMJOM* Clone()
		{
			return ((::JDFAFAIMJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGLNJEILMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_PGLNJEILMKB_OFFSET))(this);
		}

		::System::Void MPEEDLNBONK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MPEEDLNBONK_OFFSET))(this, a1);
		}

		::System::UInt32 OLMAHKEJDJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_OLMAHKEJDJE_OFFSET))(this);
		}

		::System::Void BKGOJMIBBPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_BKGOJMIBBPJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDFAFAIMJOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDFAFAIMJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
