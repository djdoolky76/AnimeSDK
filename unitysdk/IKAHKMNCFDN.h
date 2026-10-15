#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKAHKMNCFDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKAHKMNCFDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69B640)
#define IKAHKMNCFDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69B910)
#define IKAHKMNCFDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69B290)
#define IKAHKMNCFDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69B260)
#define IKAHKMNCFDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69B250)
#define IKAHKMNCFDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69B400)
#define IKAHKMNCFDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69B320)
#define IKAHKMNCFDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69B4D0)
#define IKAHKMNCFDN_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E69B2F0)
#define IKAHKMNCFDN_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E69B310)
#define IKAHKMNCFDN_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E69B2E0)
#define IKAHKMNCFDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69B210)
#define IKAHKMNCFDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69B790)
#define IKAHKMNCFDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69B750)
#define IKAHKMNCFDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69B240)
#define IKAHKMNCFDN_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E69B300)
#define IKAHKMNCFDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69B500)
#define IKAHKMNCFDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69B560)

inline static constexpr unsigned int IKAHKMNCFDN_TypeDefinitionIndex = 25874;

	class IKAHKMNCFDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::UInt32 HAHOPPLLGCE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKAHKMNCFDN")->GetStaticField(0xE8D0);
		}

		// static const ::System::Object MJDEFIKLIIE; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKAHKMNCFDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKAHKMNCFDN*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKAHKMNCFDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKAHKMNCFDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKAHKMNCFDN* Clone()
		{
			return ((::IKAHKMNCFDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKAHKMNCFDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKAHKMNCFDN*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKAHKMNCFDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKAHKMNCFDN*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKAHKMNCFDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
