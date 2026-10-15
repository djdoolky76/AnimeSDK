#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEJNIBGECID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEJNIBGECID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71EC20)
#define JEJNIBGECID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71ECC0)
#define JEJNIBGECID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71E910)
#define JEJNIBGECID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71E8E0)
#define JEJNIBGECID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71E8D0)
#define JEJNIBGECID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71EA20)
#define JEJNIBGECID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71E950)
#define JEJNIBGECID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71EB80)
#define JEJNIBGECID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71E890)
#define JEJNIBGECID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71EC70)
#define JEJNIBGECID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71EC40)
#define JEJNIBGECID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71E8C0)
#define JEJNIBGECID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71EBB0)
#define JEJNIBGECID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71EC10)

inline static constexpr unsigned int JEJNIBGECID_TypeDefinitionIndex = 31051;

	class JEJNIBGECID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEJNIBGECID")->GetStaticField(0x5F0B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEJNIBGECID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEJNIBGECID*))((::PBYTE)hIl2Cpp + JEJNIBGECID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJNIBGECID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEJNIBGECID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEJNIBGECID* Clone()
		{
			return ((::JEJNIBGECID*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEJNIBGECID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEJNIBGECID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEJNIBGECID*))((::PBYTE)hIl2Cpp + JEJNIBGECID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEJNIBGECID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJNIBGECID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEJNIBGECID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEJNIBGECID*))((::PBYTE)hIl2Cpp + JEJNIBGECID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEJNIBGECID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
