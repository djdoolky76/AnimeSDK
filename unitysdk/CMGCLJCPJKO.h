#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMGCLJCPJKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMGCLJCPJKO_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1E1015A0)
#define CMGCLJCPJKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E101910)
#define CMGCLJCPJKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E101B30)
#define CMGCLJCPJKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E101560)
#define CMGCLJCPJKO_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1E1015B0)
#define CMGCLJCPJKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E101530)
#define CMGCLJCPJKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E101520)
#define CMGCLJCPJKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E101690)
#define CMGCLJCPJKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1015C0)
#define CMGCLJCPJKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E101800)
#define CMGCLJCPJKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1014E0)
#define CMGCLJCPJKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1019D0)
#define CMGCLJCPJKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1019A0)
#define CMGCLJCPJKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E101510)
#define CMGCLJCPJKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E101830)
#define CMGCLJCPJKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E101890)

	class CMGCLJCPJKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BMGMACIBMFH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CMGCLJCPJKO")->GetStaticField(0x1DFD0);
		}

		// static const ::System::Object FPEDPMAHHND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMGCLJCPJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMGCLJCPJKO*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CMGCLJCPJKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMGCLJCPJKO* Clone()
		{
			return ((::CMGCLJCPJKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMGCLJCPJKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMGCLJCPJKO*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMGCLJCPJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMGCLJCPJKO*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMGCLJCPJKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
