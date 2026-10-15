#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIJAMHKNGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJIJAMHKNGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75DCD0)
#define JJIJAMHKNGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75DFE0)
#define JJIJAMHKNGO_CJPONEHNMPB_OFFSET UNITYSDK_OFFSET(0x1E75D8C0)
#define JJIJAMHKNGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75D850)
#define JJIJAMHKNGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75D810)
#define JJIJAMHKNGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75D800)
#define JJIJAMHKNGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75D9F0)
#define JJIJAMHKNGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75D900)
#define JJIJAMHKNGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75DAD0)
#define JJIJAMHKNGO_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E75D8B0)
#define JJIJAMHKNGO_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E75D8A0)
#define JJIJAMHKNGO_HCEOIBOEHHD_OFFSET UNITYSDK_OFFSET(0x1E75D8E0)
#define JJIJAMHKNGO_INBIMBMBILP_OFFSET UNITYSDK_OFFSET(0x1E75D8D0)
#define JJIJAMHKNGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E75D7C0)
#define JJIJAMHKNGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75DE40)
#define JJIJAMHKNGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75DDF0)
#define JJIJAMHKNGO_MKAAKFIDNOL_OFFSET UNITYSDK_OFFSET(0x1E75D8F0)
#define JJIJAMHKNGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75D7F0)
#define JJIJAMHKNGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75DB00)
#define JJIJAMHKNGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75DB60)

inline static constexpr unsigned int JJIJAMHKNGO_TypeDefinitionIndex = 31286;

	class JJIJAMHKNGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BKGKHADDMIL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KLLMAOCKBKG; // 0x1C
		::System::UInt32 GDPGCPKEFKH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JJIJAMHKNGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJIJAMHKNGO*>**)UnitySDK::FromName("", "JJIJAMHKNGO")->GetStaticField(0x65200);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		// static const ::System::Object LLLNLCHAAIO; // 0x0
		// static const ::System::Object DGPDKJBLCLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJIJAMHKNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIJAMHKNGO*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJIJAMHKNGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJIJAMHKNGO*>*(*)())((::PBYTE)hIl2Cpp + JJIJAMHKNGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJIJAMHKNGO* Clone()
		{
			return ((::JJIJAMHKNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean CJPONEHNMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CJPONEHNMPB_OFFSET))(this);
		}

		::System::Void INBIMBMBILP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_INBIMBMBILP_OFFSET))(this, a1);
		}

		::System::UInt32 HCEOIBOEHHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_HCEOIBOEHHD_OFFSET))(this);
		}

		::System::Void MKAAKFIDNOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_MKAAKFIDNOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJIJAMHKNGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJIJAMHKNGO*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJIJAMHKNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIJAMHKNGO*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJIJAMHKNGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
