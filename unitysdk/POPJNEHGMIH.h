#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POPJNEHGMIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POPJNEHGMIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD0D10)
#define POPJNEHGMIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0FE0)
#define POPJNEHGMIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD0960)
#define POPJNEHGMIH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1DFD09B0)
#define POPJNEHGMIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD0930)
#define POPJNEHGMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0920)
#define POPJNEHGMIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD0AD0)
#define POPJNEHGMIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD09F0)
#define POPJNEHGMIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD0BA0)
#define POPJNEHGMIH_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1DFD09E0)
#define POPJNEHGMIH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1DFD09C0)
#define POPJNEHGMIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD08E0)
#define POPJNEHGMIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD0E60)
#define POPJNEHGMIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD0E20)
#define POPJNEHGMIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0910)
#define POPJNEHGMIH_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1DFD09D0)
#define POPJNEHGMIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD0BD0)
#define POPJNEHGMIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD0C30)

inline static constexpr unsigned int POPJNEHGMIH_TypeDefinitionIndex = 26091;

	class POPJNEHGMIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::POPJNEHGMIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POPJNEHGMIH*>**)UnitySDK::FromName("", "POPJNEHGMIH")->GetStaticField(0x17900);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POPJNEHGMIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POPJNEHGMIH*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPJNEHGMIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POPJNEHGMIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POPJNEHGMIH*>*(*)())((::PBYTE)hIl2Cpp + POPJNEHGMIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POPJNEHGMIH* Clone()
		{
			return ((::POPJNEHGMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POPJNEHGMIH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POPJNEHGMIH_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POPJNEHGMIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POPJNEHGMIH*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POPJNEHGMIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POPJNEHGMIH*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POPJNEHGMIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
