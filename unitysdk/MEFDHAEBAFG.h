#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEFDHAEBAFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEFDHAEBAFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB076F0)
#define MEFDHAEBAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB079C0)
#define MEFDHAEBAFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB07340)
#define MEFDHAEBAFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB07310)
#define MEFDHAEBAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB07300)
#define MEFDHAEBAFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB074B0)
#define MEFDHAEBAFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB073D0)
#define MEFDHAEBAFG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB073C0)
#define MEFDHAEBAFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB07580)
#define MEFDHAEBAFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB072C0)
#define MEFDHAEBAFG_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1FB073A0)
#define MEFDHAEBAFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB07840)
#define MEFDHAEBAFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB07800)
#define MEFDHAEBAFG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB073B0)
#define MEFDHAEBAFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB072F0)
#define MEFDHAEBAFG_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1FB07390)
#define MEFDHAEBAFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB075B0)
#define MEFDHAEBAFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB07610)

inline static constexpr unsigned int MEFDHAEBAFG_TypeDefinitionIndex = 31296;

	class MEFDHAEBAFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 KCIKBKIBOPB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MEFDHAEBAFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEFDHAEBAFG*>**)UnitySDK::FromName("", "MEFDHAEBAFG")->GetStaticField(0x4CCE0);
		}

		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEFDHAEBAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEFDHAEBAFG*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEFDHAEBAFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEFDHAEBAFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEFDHAEBAFG*>*(*)())((::PBYTE)hIl2Cpp + MEFDHAEBAFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEFDHAEBAFG* Clone()
		{
			return ((::MEFDHAEBAFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEFDHAEBAFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEFDHAEBAFG*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEFDHAEBAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEFDHAEBAFG*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEFDHAEBAFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
