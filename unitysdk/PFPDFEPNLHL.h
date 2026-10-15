#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPDFEPNLHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFPDFEPNLHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF29A90)
#define PFPDFEPNLHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF29B30)
#define PFPDFEPNLHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF29780)
#define PFPDFEPNLHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF29750)
#define PFPDFEPNLHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29740)
#define PFPDFEPNLHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF29890)
#define PFPDFEPNLHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF297C0)
#define PFPDFEPNLHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF299F0)
#define PFPDFEPNLHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF29700)
#define PFPDFEPNLHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF29AE0)
#define PFPDFEPNLHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF29AB0)
#define PFPDFEPNLHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF29730)
#define PFPDFEPNLHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF29A20)
#define PFPDFEPNLHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF29A80)

inline static constexpr unsigned int PFPDFEPNLHL_TypeDefinitionIndex = 30673;

	class PFPDFEPNLHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PFPDFEPNLHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFPDFEPNLHL*>**)UnitySDK::FromName("", "PFPDFEPNLHL")->GetStaticField(0x3C300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFPDFEPNLHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPDFEPNLHL*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPDFEPNLHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFPDFEPNLHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFPDFEPNLHL*>*(*)())((::PBYTE)hIl2Cpp + PFPDFEPNLHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFPDFEPNLHL* Clone()
		{
			return ((::PFPDFEPNLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFPDFEPNLHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFPDFEPNLHL*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFPDFEPNLHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPDFEPNLHL*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFPDFEPNLHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
