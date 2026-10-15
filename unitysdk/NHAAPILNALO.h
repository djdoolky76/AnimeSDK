#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHAAPILNALO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHAAPILNALO_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EB184D0)
#define NHAAPILNALO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB18830)
#define NHAAPILNALO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB18A50)
#define NHAAPILNALO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB18480)
#define NHAAPILNALO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB18450)
#define NHAAPILNALO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB18440)
#define NHAAPILNALO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB185B0)
#define NHAAPILNALO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB184E0)
#define NHAAPILNALO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB18720)
#define NHAAPILNALO_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EB184C0)
#define NHAAPILNALO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB18400)
#define NHAAPILNALO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB188F0)
#define NHAAPILNALO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB188C0)
#define NHAAPILNALO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB18430)
#define NHAAPILNALO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB18750)
#define NHAAPILNALO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB187B0)

inline static constexpr unsigned int NHAAPILNALO_TypeDefinitionIndex = 28947;

	class NHAAPILNALO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NHAAPILNALO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHAAPILNALO*>**)UnitySDK::FromName("", "NHAAPILNALO")->GetStaticField(0x5FF90);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHAAPILNALO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHAAPILNALO*))((::PBYTE)hIl2Cpp + NHAAPILNALO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHAAPILNALO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHAAPILNALO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHAAPILNALO*>*(*)())((::PBYTE)hIl2Cpp + NHAAPILNALO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHAAPILNALO* Clone()
		{
			return ((::NHAAPILNALO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHAAPILNALO_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHAAPILNALO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHAAPILNALO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHAAPILNALO*))((::PBYTE)hIl2Cpp + NHAAPILNALO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHAAPILNALO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHAAPILNALO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHAAPILNALO*))((::PBYTE)hIl2Cpp + NHAAPILNALO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHAAPILNALO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
