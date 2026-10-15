#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFOOKANNDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLFOOKANNDE_BANHJJGKNAJ_OFFSET UNITYSDK_OFFSET(0x1E590620)
#define HLFOOKANNDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E590D60)
#define HLFOOKANNDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5910A0)
#define HLFOOKANNDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E590580)
#define HLFOOKANNDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E590540)
#define HLFOOKANNDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E590530)
#define HLFOOKANNDE_EGELIAKFDDD_OFFSET UNITYSDK_OFFSET(0x1E590610)
#define HLFOOKANNDE_EGGOGPPAFPH_OFFSET UNITYSDK_OFFSET(0x1E5905D0)
#define HLFOOKANNDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E590660)
#define HLFOOKANNDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E590630)
#define HLFOOKANNDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E590940)
#define HLFOOKANNDE_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E590600)
#define HLFOOKANNDE_HJNBOAKGFLG_OFFSET UNITYSDK_OFFSET(0x1E5905E0)
#define HLFOOKANNDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5904F0)
#define HLFOOKANNDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E590E90)
#define HLFOOKANNDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E590E20)
#define HLFOOKANNDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E590520)
#define HLFOOKANNDE_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E5905F0)
#define HLFOOKANNDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E590B90)
#define HLFOOKANNDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E590BF0)

inline static constexpr unsigned int HLFOOKANNDE_TypeDefinitionIndex = 25489;

	class HLFOOKANNDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOLMENCNJLF; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double DHMPJFBLLMO; // 0x20
		::System::Double BCLKCLDFMOA; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HLFOOKANNDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLFOOKANNDE*>**)UnitySDK::FromName("", "HLFOOKANNDE")->GetStaticField(0x33A20);
		}

		// static const ::System::Object KLHBIKCMBGP; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object AHIEOOANGKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLFOOKANNDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFOOKANNDE*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFOOKANNDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HLFOOKANNDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLFOOKANNDE*>*(*)())((::PBYTE)hIl2Cpp + HLFOOKANNDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLFOOKANNDE* Clone()
		{
			return ((::HLFOOKANNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGGOGPPAFPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_EGGOGPPAFPH_OFFSET))(this);
		}

		::System::Void HJNBOAKGFLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLFOOKANNDE_HJNBOAKGFLG_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HLFOOKANNDE_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Double EGELIAKFDDD()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_EGELIAKFDDD_OFFSET))(this);
		}

		::System::Void BANHJJGKNAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HLFOOKANNDE_BANHJJGKNAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLFOOKANNDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLFOOKANNDE*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFOOKANNDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLFOOKANNDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFOOKANNDE*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLFOOKANNDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
