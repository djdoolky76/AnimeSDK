#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFNNCOMFBMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFNNCOMFBMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAB3750)
#define LFNNCOMFBMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB3970)
#define LFNNCOMFBMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAB3340)
#define LFNNCOMFBMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAB3310)
#define LFNNCOMFBMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB3300)
#define LFNNCOMFBMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAB34D0)
#define LFNNCOMFBMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAB33D0)
#define LFNNCOMFBMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAB3640)
#define LFNNCOMFBMD_GFCPHBMGDCA_OFFSET UNITYSDK_OFFSET(0x1FAB33B0)
#define LFNNCOMFBMD_HDDLEPLGCLJ_OFFSET UNITYSDK_OFFSET(0x1FAB33C0)
#define LFNNCOMFBMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAB3290)
#define LFNNCOMFBMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAB3810)
#define LFNNCOMFBMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAB37E0)
#define LFNNCOMFBMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAB32F0)
#define LFNNCOMFBMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAB3670)
#define LFNNCOMFBMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAB36D0)

inline static constexpr unsigned int LFNNCOMFBMD_TypeDefinitionIndex = 26004;

	class LFNNCOMFBMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FEMBEJOKJNP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LFNNCOMFBMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFNNCOMFBMD*>**)UnitySDK::FromName("", "LFNNCOMFBMD")->GetStaticField(0x32EE0);
		}

		// static const ::System::Object CGEKBOACKCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFNNCOMFBMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFNNCOMFBMD*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNNCOMFBMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFNNCOMFBMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFNNCOMFBMD*>*(*)())((::PBYTE)hIl2Cpp + LFNNCOMFBMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFNNCOMFBMD* Clone()
		{
			return ((::LFNNCOMFBMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_CLONE_OFFSET))(this);
		}

		::System::UInt32 GFCPHBMGDCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_GFCPHBMGDCA_OFFSET))(this);
		}

		::System::Void HDDLEPLGCLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_HDDLEPLGCLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFNNCOMFBMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFNNCOMFBMD*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFNNCOMFBMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFNNCOMFBMD*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFNNCOMFBMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
