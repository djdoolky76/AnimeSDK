#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
class HAALIJLGHNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAALIJLGHNM_ANJAMMBMJIE_OFFSET UNITYSDK_OFFSET(0x1E4D3A30)
#define HAALIJLGHNM_BPHCKGFOOIN_OFFSET UNITYSDK_OFFSET(0x1E4D3A50)
#define HAALIJLGHNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D3EF0)
#define HAALIJLGHNM_CBGEKBBDMMO_OFFSET UNITYSDK_OFFSET(0x1E4D3A20)
#define HAALIJLGHNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D42B0)
#define HAALIJLGHNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D39A0)
#define HAALIJLGHNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D3930)
#define HAALIJLGHNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3920)
#define HAALIJLGHNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D3BE0)
#define HAALIJLGHNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D3A60)
#define HAALIJLGHNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D3D60)
#define HAALIJLGHNM_HDALPAFPCKC_OFFSET UNITYSDK_OFFSET(0x1E4D3A40)
#define HAALIJLGHNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D38E0)
#define HAALIJLGHNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D40D0)
#define HAALIJLGHNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D3FC0)
#define HAALIJLGHNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3910)
#define HAALIJLGHNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D3DB0)
#define HAALIJLGHNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D3E10)

inline static constexpr unsigned int HAALIJLGHNM_TypeDefinitionIndex = 27937;

	class HAALIJLGHNM : public ::System::Object
	{
	public:
		::DFJPGILAAON* PJFFAIDNPAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GANENBKBHFF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HAALIJLGHNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAALIJLGHNM*>**)UnitySDK::FromName("", "HAALIJLGHNM")->GetStaticField(0x246B0);
		}

		// static const ::System::Object PLGABPIAIHO; // 0x0
		// static const ::System::Object JANIHKFCLDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAALIJLGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAALIJLGHNM*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAALIJLGHNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAALIJLGHNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAALIJLGHNM*>*(*)())((::PBYTE)hIl2Cpp + HAALIJLGHNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAALIJLGHNM* Clone()
		{
			return ((::HAALIJLGHNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_CLONE_OFFSET))(this);
		}

		::DFJPGILAAON* CBGEKBBDMMO()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_CBGEKBBDMMO_OFFSET))(this);
		}

		::System::Void ANJAMMBMJIE(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_ANJAMMBMJIE_OFFSET))(this, a1);
		}

		::System::UInt32 HDALPAFPCKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_HDALPAFPCKC_OFFSET))(this);
		}

		::System::Void BPHCKGFOOIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAALIJLGHNM_BPHCKGFOOIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAALIJLGHNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAALIJLGHNM*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAALIJLGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAALIJLGHNM*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAALIJLGHNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
