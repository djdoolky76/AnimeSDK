#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
class OHFEIJJDJIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHFEIJJDJIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F105440)
#define OHFEIJJDJIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F105800)
#define OHFEIJJDJIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F104EC0)
#define OHFEIJJDJIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F104E00)
#define OHFEIJJDJIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F104DB0)
#define OHFEIJJDJIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1050A0)
#define OHFEIJJDJIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F104F40)
#define OHFEIJJDJIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1051E0)
#define OHFEIJJDJIE_HDDMFKDIJAD_OFFSET UNITYSDK_OFFSET(0x1F104F00)
#define OHFEIJJDJIE_IECCNBIBOOA_OFFSET UNITYSDK_OFFSET(0x1F104EF0)
#define OHFEIJJDJIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F104D70)
#define OHFEIJJDJIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F105610)
#define OHFEIJJDJIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F105560)
#define OHFEIJJDJIE_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1F104F30)
#define OHFEIJJDJIE_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1F104F10)
#define OHFEIJJDJIE_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1F104F20)
#define OHFEIJJDJIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F104DA0)
#define OHFEIJJDJIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F105250)
#define OHFEIJJDJIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1052B0)

inline static constexpr unsigned int OHFEIJJDJIE_TypeDefinitionIndex = 26518;

	class OHFEIJJDJIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* CBFGBDBJHID; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		::System::Boolean LINGPMLBNHG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OHFEIJJDJIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHFEIJJDJIE*>**)UnitySDK::FromName("", "OHFEIJJDJIE")->GetStaticField(0x15BB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>**)UnitySDK::FromName("", "OHFEIJJDJIE")->GetStaticField(0x15BB8);
		}

		// static const ::System::Object DBAICKPABEN; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHFEIJJDJIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHFEIJJDJIE*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHFEIJJDJIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHFEIJJDJIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHFEIJJDJIE*>*(*)())((::PBYTE)hIl2Cpp + OHFEIJJDJIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHFEIJJDJIE* Clone()
		{
			return ((::OHFEIJJDJIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_CLONE_OFFSET))(this);
		}

		::System::Boolean IECCNBIBOOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_IECCNBIBOOA_OFFSET))(this);
		}

		::System::Void HDDMFKDIJAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_HDDMFKDIJAD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHFEIJJDJIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHFEIJJDJIE*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHFEIJJDJIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHFEIJJDJIE*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHFEIJJDJIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
