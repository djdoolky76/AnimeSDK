#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOALCJNIJJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOALCJNIJJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B8CE0)
#define HOALCJNIJJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B8FB0)
#define HOALCJNIJJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B8930)
#define HOALCJNIJJC_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E5B89A0)
#define HOALCJNIJJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B8900)
#define HOALCJNIJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B88F0)
#define HOALCJNIJJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B8AA0)
#define HOALCJNIJJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B89C0)
#define HOALCJNIJJC_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E5B89B0)
#define HOALCJNIJJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B8B70)
#define HOALCJNIJJC_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E5B8980)
#define HOALCJNIJJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B88B0)
#define HOALCJNIJJC_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E5B8990)
#define HOALCJNIJJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B8E30)
#define HOALCJNIJJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B8DF0)
#define HOALCJNIJJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B88E0)
#define HOALCJNIJJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B8BA0)
#define HOALCJNIJJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B8C00)

inline static constexpr unsigned int HOALCJNIJJC_TypeDefinitionIndex = 30308;

	class HOALCJNIJJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMABHKCOLCM; // 0x18
		::System::UInt32 KBBFPCGLDCN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HOALCJNIJJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOALCJNIJJC*>**)UnitySDK::FromName("", "HOALCJNIJJC")->GetStaticField(0x3C530);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOALCJNIJJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOALCJNIJJC*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOALCJNIJJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOALCJNIJJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOALCJNIJJC*>*(*)())((::PBYTE)hIl2Cpp + HOALCJNIJJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOALCJNIJJC* Clone()
		{
			return ((::HOALCJNIJJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOALCJNIJJC_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOALCJNIJJC_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOALCJNIJJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOALCJNIJJC*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOALCJNIJJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOALCJNIJJC*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOALCJNIJJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
