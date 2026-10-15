#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNMEHOIANGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNMEHOIANGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F3D80)
#define FNMEHOIANGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4050)
#define FNMEHOIANGN_CLAGJKAIHNA_OFFSET UNITYSDK_OFFSET(0x1E3F3A50)
#define FNMEHOIANGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F39D0)
#define FNMEHOIANGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F39A0)
#define FNMEHOIANGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F3990)
#define FNMEHOIANGN_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E3F3A30)
#define FNMEHOIANGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F3B40)
#define FNMEHOIANGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F3A60)
#define FNMEHOIANGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F3C10)
#define FNMEHOIANGN_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E3F3A20)
#define FNMEHOIANGN_IMEFPLPNKBK_OFFSET UNITYSDK_OFFSET(0x1E3F3A40)
#define FNMEHOIANGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F3950)
#define FNMEHOIANGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F3ED0)
#define FNMEHOIANGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F3E90)
#define FNMEHOIANGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F3980)
#define FNMEHOIANGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F3C40)
#define FNMEHOIANGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F3CA0)

inline static constexpr unsigned int FNMEHOIANGN_TypeDefinitionIndex = 27833;

	class FNMEHOIANGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AOOAEAADNGO; // 0x18
		::System::UInt32 AEKECGJLGEF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNMEHOIANGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNMEHOIANGN*>**)UnitySDK::FromName("", "FNMEHOIANGN")->GetStaticField(0x21180);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object EBDOFPJAANE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNMEHOIANGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNMEHOIANGN*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNMEHOIANGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNMEHOIANGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNMEHOIANGN*>*(*)())((::PBYTE)hIl2Cpp + FNMEHOIANGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNMEHOIANGN* Clone()
		{
			return ((::FNMEHOIANGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNMEHOIANGN_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 IMEFPLPNKBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_IMEFPLPNKBK_OFFSET))(this);
		}

		::System::Void CLAGJKAIHNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNMEHOIANGN_CLAGJKAIHNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNMEHOIANGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNMEHOIANGN*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNMEHOIANGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNMEHOIANGN*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNMEHOIANGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
