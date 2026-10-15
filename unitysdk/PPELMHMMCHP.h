#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPELMHMMCHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPELMHMMCHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD5F00)
#define PPELMHMMCHP_CBFECAMMLDO_OFFSET UNITYSDK_OFFSET(0x1DFD5BB0)
#define PPELMHMMCHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD6220)
#define PPELMHMMCHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD5B40)
#define PPELMHMMCHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD5B00)
#define PPELMHMMCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD5AF0)
#define PPELMHMMCHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD5CB0)
#define PPELMHMMCHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD5BD0)
#define PPELMHMMCHP_GDMIIOBOLIO_OFFSET UNITYSDK_OFFSET(0x1DFD5BC0)
#define PPELMHMMCHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD5D80)
#define PPELMHMMCHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD5AB0)
#define PPELMHMMCHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD60A0)
#define PPELMHMMCHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD6060)
#define PPELMHMMCHP_OEINJEHEKJH_OFFSET UNITYSDK_OFFSET(0x1DFD5B90)
#define PPELMHMMCHP_PAGDMMPIBCI_OFFSET UNITYSDK_OFFSET(0x1DFD5BA0)
#define PPELMHMMCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD5AE0)
#define PPELMHMMCHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD5DC0)
#define PPELMHMMCHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD5E20)

	class PPELMHMMCHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BCJGCBOJACO; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 NNFGFBPNDKK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPELMHMMCHP")->GetStaticField(0x436B0);
		}

		// static const ::System::Object AJGBLDHFNMC; // 0x0
		// static const ::System::Object BLGECPKIFMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPELMHMMCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPELMHMMCHP*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPELMHMMCHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPELMHMMCHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPELMHMMCHP* Clone()
		{
			return ((::PPELMHMMCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_CLONE_OFFSET))(this);
		}

		::System::UInt64 OEINJEHEKJH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_OEINJEHEKJH_OFFSET))(this);
		}

		::System::Void PAGDMMPIBCI(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PPELMHMMCHP_PAGDMMPIBCI_OFFSET))(this, a1);
		}

		::System::UInt32 CBFECAMMLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_CBFECAMMLDO_OFFSET))(this);
		}

		::System::Void GDMIIOBOLIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPELMHMMCHP_GDMIIOBOLIO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPELMHMMCHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPELMHMMCHP*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELMHMMCHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPELMHMMCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPELMHMMCHP*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPELMHMMCHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
