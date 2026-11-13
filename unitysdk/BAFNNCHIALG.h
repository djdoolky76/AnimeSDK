#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAFNNCHIALG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAFNNCHIALG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20573EA0)
#define BAFNNCHIALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x20573F40)
#define BAFNNCHIALG_CLONE_OFFSET UNITYSDK_OFFSET(0x20573B40)
#define BAFNNCHIALG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20573B10)
#define BAFNNCHIALG_CTOR_OFFSET UNITYSDK_OFFSET(0x20573B00)
#define BAFNNCHIALG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20573CA0)
#define BAFNNCHIALG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20573BB0)
#define BAFNNCHIALG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20573E00)
#define BAFNNCHIALG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20573A90)
#define BAFNNCHIALG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20573EF0)
#define BAFNNCHIALG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20573EC0)
#define BAFNNCHIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20573AF0)
#define BAFNNCHIALG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20573E30)
#define BAFNNCHIALG_WRITETO_OFFSET UNITYSDK_OFFSET(0x20573E90)

inline static constexpr unsigned int BAFNNCHIALG_TypeDefinitionIndex = 34067;

	class BAFNNCHIALG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BAFNNCHIALG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAFNNCHIALG*>**)UnitySDK::FromName("", "BAFNNCHIALG")->GetStaticField(0x41530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAFNNCHIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAFNNCHIALG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAFNNCHIALG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAFNNCHIALG*>*(*)())((::PBYTE)hIl2Cpp + BAFNNCHIALG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAFNNCHIALG* Clone()
		{
			return ((::BAFNNCHIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAFNNCHIALG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAFNNCHIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
