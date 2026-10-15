#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCFDPFCHIIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCFDPFCHIIC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8EC170)
#define LCFDPFCHIIC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8EC180)
#define LCFDPFCHIIC_BFDHHFIDCPH_OFFSET UNITYSDK_OFFSET(0x1E8EC190)
#define LCFDPFCHIIC_BIBGDBLHCMC_OFFSET UNITYSDK_OFFSET(0x1E8EC1A0)
#define LCFDPFCHIIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EC510)
#define LCFDPFCHIIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC770)
#define LCFDPFCHIIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EC120)
#define LCFDPFCHIIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EC0E0)
#define LCFDPFCHIIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC0D0)
#define LCFDPFCHIIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EC290)
#define LCFDPFCHIIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EC1B0)
#define LCFDPFCHIIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EC370)
#define LCFDPFCHIIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EC090)
#define LCFDPFCHIIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EC5F0)
#define LCFDPFCHIIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EC5B0)
#define LCFDPFCHIIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC0C0)
#define LCFDPFCHIIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EC3A0)
#define LCFDPFCHIIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EC400)

inline static constexpr unsigned int LCFDPFCHIIC_TypeDefinitionIndex = 26372;

	class LCFDPFCHIIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::Boolean JINNBFBIMII; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCFDPFCHIIC")->GetStaticField(0x32720);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object CHFMCEKHLAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCFDPFCHIIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFDPFCHIIC*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFDPFCHIIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCFDPFCHIIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCFDPFCHIIC* Clone()
		{
			return ((::LCFDPFCHIIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean BFDHHFIDCPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_BFDHHFIDCPH_OFFSET))(this);
		}

		::System::Void BIBGDBLHCMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_BIBGDBLHCMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCFDPFCHIIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCFDPFCHIIC*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCFDPFCHIIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFDPFCHIIC*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCFDPFCHIIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
