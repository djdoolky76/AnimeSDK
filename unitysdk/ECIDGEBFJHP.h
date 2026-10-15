#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIDGEBFJHP;
class PLPDNKNJBAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECIDGEBFJHP_BECELDMGLPJ_OFFSET UNITYSDK_OFFSET(0x1E24F670)
#define ECIDGEBFJHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E24FC40)
#define ECIDGEBFJHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24FED0)
#define ECIDGEBFJHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E24F5A0)
#define ECIDGEBFJHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E24F510)
#define ECIDGEBFJHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24F500)
#define ECIDGEBFJHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E24F830)
#define ECIDGEBFJHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E24F690)
#define ECIDGEBFJHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E24FB00)
#define ECIDGEBFJHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E24F490)
#define ECIDGEBFJHP_LAMNBPOCHBB_OFFSET UNITYSDK_OFFSET(0x1E24F680)
#define ECIDGEBFJHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E24FD30)
#define ECIDGEBFJHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E24FCA0)
#define ECIDGEBFJHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E24F4F0)
#define ECIDGEBFJHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E24FB50)
#define ECIDGEBFJHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E24FBB0)

	class ECIDGEBFJHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PLPDNKNJBAA* PONEDNDIGKB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECIDGEBFJHP")->GetStaticField(0x3DC70);
		}

		// static const ::System::Object KJMDDOHBEON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECIDGEBFJHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIDGEBFJHP*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECIDGEBFJHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECIDGEBFJHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECIDGEBFJHP* Clone()
		{
			return ((::ECIDGEBFJHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_CLONE_OFFSET))(this);
		}

		::PLPDNKNJBAA* BECELDMGLPJ()
		{
			return ((::PLPDNKNJBAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_BECELDMGLPJ_OFFSET))(this);
		}

		::System::Void LAMNBPOCHBB(::PLPDNKNJBAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPDNKNJBAA*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_LAMNBPOCHBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECIDGEBFJHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECIDGEBFJHP*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECIDGEBFJHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIDGEBFJHP*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECIDGEBFJHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
