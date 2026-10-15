#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLDNIINDEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDLDNIINDEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05A2C0)
#define CDLDNIINDEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05A520)
#define CDLDNIINDEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E059ED0)
#define CDLDNIINDEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E059E90)
#define CDLDNIINDEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E059E80)
#define CDLDNIINDEF_ECPPACKHEMO_OFFSET UNITYSDK_OFFSET(0x1E059F50)
#define CDLDNIINDEF_EJFJKEEKDJJ_OFFSET UNITYSDK_OFFSET(0x1E059F40)
#define CDLDNIINDEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05A040)
#define CDLDNIINDEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E059F60)
#define CDLDNIINDEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05A120)
#define CDLDNIINDEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E059E40)
#define CDLDNIINDEF_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E059F30)
#define CDLDNIINDEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05A3A0)
#define CDLDNIINDEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05A360)
#define CDLDNIINDEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E059E70)
#define CDLDNIINDEF_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E059F20)
#define CDLDNIINDEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05A150)
#define CDLDNIINDEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05A1B0)

inline static constexpr unsigned int CDLDNIINDEF_TypeDefinitionIndex = 30416;

	class CDLDNIINDEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean CEFANFEAKOO; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KCIKBKIBOPB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CDLDNIINDEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDLDNIINDEF*>**)UnitySDK::FromName("", "CDLDNIINDEF")->GetStaticField(0xEEF0);
		}

		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object NAGEGHAOEII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDLDNIINDEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLDNIINDEF*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLDNIINDEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDLDNIINDEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDLDNIINDEF*>*(*)())((::PBYTE)hIl2Cpp + CDLDNIINDEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDLDNIINDEF* Clone()
		{
			return ((::CDLDNIINDEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDLDNIINDEF_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean EJFJKEEKDJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_EJFJKEEKDJJ_OFFSET))(this);
		}

		::System::Void ECPPACKHEMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDLDNIINDEF_ECPPACKHEMO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDLDNIINDEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDLDNIINDEF*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDNIINDEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDLDNIINDEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLDNIINDEF*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDLDNIINDEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
