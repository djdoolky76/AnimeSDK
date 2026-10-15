#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFBDGCEAHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAFBDGCEAHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E31E500)
#define FAFBDGCEAHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31E7D0)
#define FAFBDGCEAHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E31E100)
#define FAFBDGCEAHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E31E0D0)
#define FAFBDGCEAHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31E0C0)
#define FAFBDGCEAHD_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E31E180)
#define FAFBDGCEAHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E31E2C0)
#define FAFBDGCEAHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E31E1B0)
#define FAFBDGCEAHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E31E390)
#define FAFBDGCEAHD_JIONJNOOEMD_OFFSET UNITYSDK_OFFSET(0x1E31E190)
#define FAFBDGCEAHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E31E050)
#define FAFBDGCEAHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E31E650)
#define FAFBDGCEAHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E31E610)
#define FAFBDGCEAHD_MMFNJHMEMLG_OFFSET UNITYSDK_OFFSET(0x1E31E1A0)
#define FAFBDGCEAHD_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E31E170)
#define FAFBDGCEAHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E31E0B0)
#define FAFBDGCEAHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E31E3C0)
#define FAFBDGCEAHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E31E420)

inline static constexpr unsigned int FAFBDGCEAHD_TypeDefinitionIndex = 29286;

	class FAFBDGCEAHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IAAJPEFEGPI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FAFBDGCEAHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAFBDGCEAHD*>**)UnitySDK::FromName("", "FAFBDGCEAHD")->GetStaticField(0x575E0);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object FMBEAMEALGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAFBDGCEAHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFBDGCEAHD*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFBDGCEAHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAFBDGCEAHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAFBDGCEAHD*>*(*)())((::PBYTE)hIl2Cpp + FAFBDGCEAHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAFBDGCEAHD* Clone()
		{
			return ((::FAFBDGCEAHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::UInt32 JIONJNOOEMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_JIONJNOOEMD_OFFSET))(this);
		}

		::System::Void MMFNJHMEMLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_MMFNJHMEMLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAFBDGCEAHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAFBDGCEAHD*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAFBDGCEAHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFBDGCEAHD*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAFBDGCEAHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
