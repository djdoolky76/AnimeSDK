#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBJJJOBGHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFBJJJOBGHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E642B60)
#define IFBJJJOBGHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E642E30)
#define IFBJJJOBGHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6427B0)
#define IFBJJJOBGHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E642780)
#define IFBJJJOBGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642770)
#define IFBJJJOBGHB_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1E642810)
#define IFBJJJOBGHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E642920)
#define IFBJJJOBGHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E642840)
#define IFBJJJOBGHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6429F0)
#define IFBJJJOBGHB_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E642830)
#define IFBJJJOBGHB_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1E642800)
#define IFBJJJOBGHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E642730)
#define IFBJJJOBGHB_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E642820)
#define IFBJJJOBGHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E642CB0)
#define IFBJJJOBGHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E642C70)
#define IFBJJJOBGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E642760)
#define IFBJJJOBGHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E642A20)
#define IFBJJJOBGHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E642A80)

inline static constexpr unsigned int IFBJJJOBGHB_TypeDefinitionIndex = 34635;

	class IFBJJJOBGHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PANHBLLDMGI; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IFBJJJOBGHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFBJJJOBGHB*>**)UnitySDK::FromName("", "IFBJJJOBGHB")->GetStaticField(0x48820);
		}

		// static const ::System::Object EMPDMPHKKGB; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFBJJJOBGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBJJJOBGHB*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFBJJJOBGHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFBJJJOBGHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFBJJJOBGHB*>*(*)())((::PBYTE)hIl2Cpp + IFBJJJOBGHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFBJJJOBGHB* Clone()
		{
			return ((::IFBJJJOBGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFBJJJOBGHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBJJJOBGHB*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFBJJJOBGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBJJJOBGHB*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFBJJJOBGHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
