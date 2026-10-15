#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILKDNFLNLL;
class HLNFNACOFFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HILKDNFLNLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59ACC0)
#define HILKDNFLNLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59B0A0)
#define HILKDNFLNLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59A750)
#define HILKDNFLNLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59A6C0)
#define HILKDNFLNLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59A6B0)
#define HILKDNFLNLL_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1E59A820)
#define HILKDNFLNLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59A9B0)
#define HILKDNFLNLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59A830)
#define HILKDNFLNLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59AB30)
#define HILKDNFLNLL_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1E59A810)
#define HILKDNFLNLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59A670)
#define HILKDNFLNLL_KKGGPGIKGCJ_OFFSET UNITYSDK_OFFSET(0x1E59A7F0)
#define HILKDNFLNLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59AE90)
#define HILKDNFLNLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59AD90)
#define HILKDNFLNLL_NABLONFJGKA_OFFSET UNITYSDK_OFFSET(0x1E59A800)
#define HILKDNFLNLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59A6A0)
#define HILKDNFLNLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59AB80)
#define HILKDNFLNLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59ABE0)

	class HILKDNFLNLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HLNFNACOFFF* PFHLPOOHFAC; // 0x18
		::System::UInt32 OEHAKOKDOAA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HILKDNFLNLL")->GetStaticField(0x3DF60);
		}

		// static const ::System::Object BNBFOJPGGJI; // 0x0
		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HILKDNFLNLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILKDNFLNLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HILKDNFLNLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HILKDNFLNLL* Clone()
		{
			return ((::HILKDNFLNLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CLONE_OFFSET))(this);
		}

		::HLNFNACOFFF* KKGGPGIKGCJ()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_KKGGPGIKGCJ_OFFSET))(this);
		}

		::System::Void NABLONFJGKA(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_NABLONFJGKA_OFFSET))(this, a1);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HILKDNFLNLL_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HILKDNFLNLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HILKDNFLNLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
