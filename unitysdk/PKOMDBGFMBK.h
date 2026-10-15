#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKOMDBGFMBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKOMDBGFMBK_ABMCOINEEFF_OFFSET UNITYSDK_OFFSET(0x1DF679D0)
#define PKOMDBGFMBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF67D00)
#define PKOMDBGFMBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF67FD0)
#define PKOMDBGFMBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF67950)
#define PKOMDBGFMBK_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1DF679A0)
#define PKOMDBGFMBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF67920)
#define PKOMDBGFMBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF67910)
#define PKOMDBGFMBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF67AC0)
#define PKOMDBGFMBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF679E0)
#define PKOMDBGFMBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF67B90)
#define PKOMDBGFMBK_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1DF679B0)
#define PKOMDBGFMBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF678D0)
#define PKOMDBGFMBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF67E50)
#define PKOMDBGFMBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF67E10)
#define PKOMDBGFMBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF67900)
#define PKOMDBGFMBK_PIBPAKNAJPJ_OFFSET UNITYSDK_OFFSET(0x1DF679C0)
#define PKOMDBGFMBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF67BC0)
#define PKOMDBGFMBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF67C20)

inline static constexpr unsigned int PKOMDBGFMBK_TypeDefinitionIndex = 30751;

	class PKOMDBGFMBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 OLHOKKOJDCO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PKOMDBGFMBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKOMDBGFMBK*>**)UnitySDK::FromName("", "PKOMDBGFMBK")->GetStaticField(0x37260);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object HHAFBFIMNML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKOMDBGFMBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOMDBGFMBK*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKOMDBGFMBK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKOMDBGFMBK*>*(*)())((::PBYTE)hIl2Cpp + PKOMDBGFMBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKOMDBGFMBK* Clone()
		{
			return ((::PKOMDBGFMBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 PIBPAKNAJPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_PIBPAKNAJPJ_OFFSET))(this);
		}

		::System::Void ABMCOINEEFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_ABMCOINEEFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKOMDBGFMBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKOMDBGFMBK*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKOMDBGFMBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOMDBGFMBK*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKOMDBGFMBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
