#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGGELMMFPKP_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1DE24860)
#define OGGELMMFPKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE24D70)
#define OGGELMMFPKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE24FF0)
#define OGGELMMFPKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE247E0)
#define OGGELMMFPKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE247A0)
#define OGGELMMFPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE24790)
#define OGGELMMFPKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE24900)
#define OGGELMMFPKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE248A0)
#define OGGELMMFPKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE24AF0)
#define OGGELMMFPKP_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1DE24890)
#define OGGELMMFPKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE24720)
#define OGGELMMFPKP_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1DE24870)
#define OGGELMMFPKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE24E70)
#define OGGELMMFPKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE24E20)
#define OGGELMMFPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE24780)
#define OGGELMMFPKP_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1DE24880)
#define OGGELMMFPKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE24C10)
#define OGGELMMFPKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE24C70)

inline static constexpr unsigned int OGGELMMFPKP_TypeDefinitionIndex = 27082;

	class OGGELMMFPKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BCLKCLDFMOA; // 0x18
		::System::UInt32 FOBLPJCIGJE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OGGELMMFPKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGGELMMFPKP*>**)UnitySDK::FromName("", "OGGELMMFPKP")->GetStaticField(0x17B10);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGGELMMFPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGGELMMFPKP*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGGELMMFPKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGGELMMFPKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGGELMMFPKP*>*(*)())((::PBYTE)hIl2Cpp + OGGELMMFPKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGGELMMFPKP* Clone()
		{
			return ((::OGGELMMFPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGGELMMFPKP_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OGGELMMFPKP_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGGELMMFPKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGGELMMFPKP*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGGELMMFPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGGELMMFPKP*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGGELMMFPKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
