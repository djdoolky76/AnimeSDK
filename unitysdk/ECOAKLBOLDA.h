#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECOAKLBOLDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECOAKLBOLDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E257A20)
#define ECOAKLBOLDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E257CF0)
#define ECOAKLBOLDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E257670)
#define ECOAKLBOLDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E257640)
#define ECOAKLBOLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E257630)
#define ECOAKLBOLDA_EIAHDAHLFLL_OFFSET UNITYSDK_OFFSET(0x1E2576E0)
#define ECOAKLBOLDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2577E0)
#define ECOAKLBOLDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E257700)
#define ECOAKLBOLDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2578B0)
#define ECOAKLBOLDA_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E2576D0)
#define ECOAKLBOLDA_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E2576C0)
#define ECOAKLBOLDA_HEILFIFEGHJ_OFFSET UNITYSDK_OFFSET(0x1E2576F0)
#define ECOAKLBOLDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2575F0)
#define ECOAKLBOLDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E257B70)
#define ECOAKLBOLDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E257B30)
#define ECOAKLBOLDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E257620)
#define ECOAKLBOLDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2578E0)
#define ECOAKLBOLDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E257940)

	class ECOAKLBOLDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJFHHBBBHFJ; // 0x18
		::System::UInt32 GDPGCPKEFKH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECOAKLBOLDA")->GetStaticField(0x3EED0);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		// static const ::System::Object KPCCIOBBKCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECOAKLBOLDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECOAKLBOLDA*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECOAKLBOLDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECOAKLBOLDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECOAKLBOLDA* Clone()
		{
			return ((::ECOAKLBOLDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::UInt32 EIAHDAHLFLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_EIAHDAHLFLL_OFFSET))(this);
		}

		::System::Void HEILFIFEGHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_HEILFIFEGHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECOAKLBOLDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECOAKLBOLDA*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECOAKLBOLDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECOAKLBOLDA*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECOAKLBOLDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
