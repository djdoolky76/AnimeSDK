#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCFPEIMAMCN;
class INHBMHCJJCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INHBMHCJJCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9CA750)
#define INHBMHCJJCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9CAA20)
#define INHBMHCJJCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9CA210)
#define INHBMHCJJCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9CA1A0)
#define INHBMHCJJCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9CA190)
#define INHBMHCJJCN_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1F9CA2A0)
#define INHBMHCJJCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9CA450)
#define INHBMHCJJCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9CA2D0)
#define INHBMHCJJCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9CA5D0)
#define INHBMHCJJCN_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1F9CA290)
#define INHBMHCJJCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9CA150)
#define INHBMHCJJCN_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1F9CA2B0)
#define INHBMHCJJCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9CA890)
#define INHBMHCJJCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9CA820)
#define INHBMHCJJCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9CA180)
#define INHBMHCJJCN_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1F9CA2C0)
#define INHBMHCJJCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9CA610)
#define INHBMHCJJCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9CA670)

inline static constexpr unsigned int INHBMHCJJCN_TypeDefinitionIndex = 34093;

	class INHBMHCJJCN : public ::System::Object
	{
	public:
		::DCFPEIMAMCN* GAPGOEGADAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JEPIGMEMEKE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::INHBMHCJJCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INHBMHCJJCN*>**)UnitySDK::FromName("", "INHBMHCJJCN")->GetStaticField(0x56B80);
		}

		// static const ::System::Object GEPLKKBDGGD; // 0x0
		// static const ::System::Object GANGLFDOJDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INHBMHCJJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHBMHCJJCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INHBMHCJJCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INHBMHCJJCN*>*(*)())((::PBYTE)hIl2Cpp + INHBMHCJJCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INHBMHCJJCN* Clone()
		{
			return ((::INHBMHCJJCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INHBMHCJJCN_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::DCFPEIMAMCN* LPJGBMNIAIL()
		{
			return ((::DCFPEIMAMCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::DCFPEIMAMCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCFPEIMAMCN*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INHBMHCJJCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INHBMHCJJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INHBMHCJJCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
