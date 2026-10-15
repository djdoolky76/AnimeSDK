#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHPENFEPAJ;
class FGFGINEFBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPHPENFEPAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30D4A0)
#define EPHPENFEPAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30D780)
#define EPHPENFEPAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30CE10)
#define EPHPENFEPAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30CD60)
#define EPHPENFEPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30CD50)
#define EPHPENFEPAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30D060)
#define EPHPENFEPAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30CEF0)
#define EPHPENFEPAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30D330)
#define EPHPENFEPAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30CD10)
#define EPHPENFEPAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30D5F0)
#define EPHPENFEPAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30D500)
#define EPHPENFEPAJ_OCMGEDMHIEJ_OFFSET UNITYSDK_OFFSET(0x1E30CEE0)
#define EPHPENFEPAJ_OKFDPNDAGGM_OFFSET UNITYSDK_OFFSET(0x1E30CED0)
#define EPHPENFEPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30CD40)
#define EPHPENFEPAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30D3B0)
#define EPHPENFEPAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30D410)

	class EPHPENFEPAJ : public ::System::Object
	{
	public:
		::FGFGINEFBBK* MBFMCFBBOBN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPHPENFEPAJ")->GetStaticField(0x55F50);
		}

		// static const ::System::Object NAGBHAIGNEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPHPENFEPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPHPENFEPAJ* Clone()
		{
			return ((::EPHPENFEPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CLONE_OFFSET))(this);
		}

		::FGFGINEFBBK* OKFDPNDAGGM()
		{
			return ((::FGFGINEFBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_OKFDPNDAGGM_OFFSET))(this);
		}

		::System::Void OCMGEDMHIEJ(::FGFGINEFBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_OCMGEDMHIEJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPHPENFEPAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPHPENFEPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
