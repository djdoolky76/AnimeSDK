#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABKIKDIGKHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABKIKDIGKHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFD0680)
#define ABKIKDIGKHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0720)
#define ABKIKDIGKHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFD0370)
#define ABKIKDIGKHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD0340)
#define ABKIKDIGKHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0330)
#define ABKIKDIGKHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFD0480)
#define ABKIKDIGKHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFD03B0)
#define ABKIKDIGKHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFD05E0)
#define ABKIKDIGKHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFD02F0)
#define ABKIKDIGKHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFD06D0)
#define ABKIKDIGKHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFD06A0)
#define ABKIKDIGKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0320)
#define ABKIKDIGKHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFD0610)
#define ABKIKDIGKHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFD0670)

inline static constexpr unsigned int ABKIKDIGKHG_TypeDefinitionIndex = 27263;

	class ABKIKDIGKHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ABKIKDIGKHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABKIKDIGKHG*>**)UnitySDK::FromName("", "ABKIKDIGKHG")->GetStaticField(0x343A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABKIKDIGKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABKIKDIGKHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABKIKDIGKHG*>*(*)())((::PBYTE)hIl2Cpp + ABKIKDIGKHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABKIKDIGKHG* Clone()
		{
			return ((::ABKIKDIGKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABKIKDIGKHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABKIKDIGKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
