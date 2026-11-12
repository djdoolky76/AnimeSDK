#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDFEIJGOFBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDFEIJGOFBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F947060)
#define IDFEIJGOFBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F947100)
#define IDFEIJGOFBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F946D50)
#define IDFEIJGOFBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F946D20)
#define IDFEIJGOFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F946D10)
#define IDFEIJGOFBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F946E60)
#define IDFEIJGOFBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F946D90)
#define IDFEIJGOFBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F946FC0)
#define IDFEIJGOFBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F946CD0)
#define IDFEIJGOFBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9470B0)
#define IDFEIJGOFBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F947080)
#define IDFEIJGOFBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F946D00)
#define IDFEIJGOFBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F946FF0)
#define IDFEIJGOFBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F947050)

inline static constexpr unsigned int IDFEIJGOFBL_TypeDefinitionIndex = 33162;

	class IDFEIJGOFBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IDFEIJGOFBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDFEIJGOFBL*>**)UnitySDK::FromName("", "IDFEIJGOFBL")->GetStaticField(0x4CF60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDFEIJGOFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDFEIJGOFBL*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFEIJGOFBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDFEIJGOFBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDFEIJGOFBL*>*(*)())((::PBYTE)hIl2Cpp + IDFEIJGOFBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDFEIJGOFBL* Clone()
		{
			return ((::IDFEIJGOFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDFEIJGOFBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDFEIJGOFBL*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDFEIJGOFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDFEIJGOFBL*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDFEIJGOFBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
