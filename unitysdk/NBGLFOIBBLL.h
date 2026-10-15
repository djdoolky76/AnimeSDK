#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBGLFOIBBLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBGLFOIBBLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD12D0)
#define NBGLFOIBBLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD14F0)
#define NBGLFOIBBLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD0F20)
#define NBGLFOIBBLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD0EF0)
#define NBGLFOIBBLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0EE0)
#define NBGLFOIBBLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD1050)
#define NBGLFOIBBLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD0F80)
#define NBGLFOIBBLL_GBDHEJPLLHG_OFFSET UNITYSDK_OFFSET(0x1EAD0F60)
#define NBGLFOIBBLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD11C0)
#define NBGLFOIBBLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD0EA0)
#define NBGLFOIBBLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD1390)
#define NBGLFOIBBLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD1360)
#define NBGLFOIBBLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0ED0)
#define NBGLFOIBBLL_PFFFCAHMPOK_OFFSET UNITYSDK_OFFSET(0x1EAD0F70)
#define NBGLFOIBBLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD11F0)
#define NBGLFOIBBLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD1250)

inline static constexpr unsigned int NBGLFOIBBLL_TypeDefinitionIndex = 35138;

	class NBGLFOIBBLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFCPCAFJHNB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NBGLFOIBBLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBGLFOIBBLL*>**)UnitySDK::FromName("", "NBGLFOIBBLL")->GetStaticField(0x5CEF0);
		}

		// static const ::System::Object LFMAGKAHAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBGLFOIBBLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBGLFOIBBLL*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBGLFOIBBLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBGLFOIBBLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBGLFOIBBLL*>*(*)())((::PBYTE)hIl2Cpp + NBGLFOIBBLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBGLFOIBBLL* Clone()
		{
			return ((::NBGLFOIBBLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBDHEJPLLHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_GBDHEJPLLHG_OFFSET))(this);
		}

		::System::Void PFFFCAHMPOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_PFFFCAHMPOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBGLFOIBBLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBGLFOIBBLL*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBGLFOIBBLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBGLFOIBBLL*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBGLFOIBBLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
