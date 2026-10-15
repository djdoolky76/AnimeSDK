#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJHNGLHOBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKJHNGLHOBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48AAF0)
#define GKJHNGLHOBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48AE10)
#define GKJHNGLHOBA_CJPONEHNMPB_OFFSET UNITYSDK_OFFSET(0x1E48A740)
#define GKJHNGLHOBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48A6A0)
#define GKJHNGLHOBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48A660)
#define GKJHNGLHOBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48A650)
#define GKJHNGLHOBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48A810)
#define GKJHNGLHOBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48A780)
#define GKJHNGLHOBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48A8F0)
#define GKJHNGLHOBA_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E48A770)
#define GKJHNGLHOBA_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E48A760)
#define GKJHNGLHOBA_HCEOIBOEHHD_OFFSET UNITYSDK_OFFSET(0x1E48A720)
#define GKJHNGLHOBA_INBIMBMBILP_OFFSET UNITYSDK_OFFSET(0x1E48A750)
#define GKJHNGLHOBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48A5E0)
#define GKJHNGLHOBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48AC60)
#define GKJHNGLHOBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48AC10)
#define GKJHNGLHOBA_MKAAKFIDNOL_OFFSET UNITYSDK_OFFSET(0x1E48A730)
#define GKJHNGLHOBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48A640)
#define GKJHNGLHOBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48A920)
#define GKJHNGLHOBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48A980)

inline static constexpr unsigned int GKJHNGLHOBA_TypeDefinitionIndex = 31288;

	class GKJHNGLHOBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BKGKHADDMIL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KLLMAOCKBKG; // 0x1C
		::System::UInt32 GDPGCPKEFKH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GKJHNGLHOBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKJHNGLHOBA*>**)UnitySDK::FromName("", "GKJHNGLHOBA")->GetStaticField(0x1BF00);
		}

		// static const ::System::Object DGPDKJBLCLK; // 0x0
		// static const ::System::Object LLLNLCHAAIO; // 0x0
		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKJHNGLHOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJHNGLHOBA*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKJHNGLHOBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKJHNGLHOBA*>*(*)())((::PBYTE)hIl2Cpp + GKJHNGLHOBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKJHNGLHOBA* Clone()
		{
			return ((::GKJHNGLHOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCEOIBOEHHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_HCEOIBOEHHD_OFFSET))(this);
		}

		::System::Void MKAAKFIDNOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_MKAAKFIDNOL_OFFSET))(this, a1);
		}

		::System::Boolean CJPONEHNMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CJPONEHNMPB_OFFSET))(this);
		}

		::System::Void INBIMBMBILP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_INBIMBMBILP_OFFSET))(this, a1);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKJHNGLHOBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKJHNGLHOBA*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKJHNGLHOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJHNGLHOBA*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKJHNGLHOBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
