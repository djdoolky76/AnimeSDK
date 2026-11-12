#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAKKENDDMOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAKKENDDMOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA75B50)
#define BAKKENDDMOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA75BF0)
#define BAKKENDDMOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA75840)
#define BAKKENDDMOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA75810)
#define BAKKENDDMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA75800)
#define BAKKENDDMOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA75950)
#define BAKKENDDMOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA75880)
#define BAKKENDDMOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA75AB0)
#define BAKKENDDMOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA757C0)
#define BAKKENDDMOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA75BA0)
#define BAKKENDDMOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA75B70)
#define BAKKENDDMOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA757F0)
#define BAKKENDDMOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA75AE0)
#define BAKKENDDMOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA75B40)

inline static constexpr unsigned int BAKKENDDMOL_TypeDefinitionIndex = 28607;

	class BAKKENDDMOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BAKKENDDMOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAKKENDDMOL*>**)UnitySDK::FromName("", "BAKKENDDMOL")->GetStaticField(0x3F0A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAKKENDDMOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAKKENDDMOL*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKKENDDMOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAKKENDDMOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAKKENDDMOL*>*(*)())((::PBYTE)hIl2Cpp + BAKKENDDMOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAKKENDDMOL* Clone()
		{
			return ((::BAKKENDDMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAKKENDDMOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAKKENDDMOL*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAKKENDDMOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAKKENDDMOL*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAKKENDDMOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
