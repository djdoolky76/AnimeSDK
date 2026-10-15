#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGIJMPCIJOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGIJMPCIJOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E267020)
#define EGIJMPCIJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E267240)
#define EGIJMPCIJOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E266C70)
#define EGIJMPCIJOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E266C40)
#define EGIJMPCIJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E266C30)
#define EGIJMPCIJOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E266DA0)
#define EGIJMPCIJOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E266CD0)
#define EGIJMPCIJOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E266F10)
#define EGIJMPCIJOG_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E266CC0)
#define EGIJMPCIJOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E266BF0)
#define EGIJMPCIJOG_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E266CB0)
#define EGIJMPCIJOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2670E0)
#define EGIJMPCIJOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2670B0)
#define EGIJMPCIJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E266C20)
#define EGIJMPCIJOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E266F40)
#define EGIJMPCIJOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E266FA0)

inline static constexpr unsigned int EGIJMPCIJOG_TypeDefinitionIndex = 34651;

	class EGIJMPCIJOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EGIJMPCIJOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGIJMPCIJOG*>**)UnitySDK::FromName("", "EGIJMPCIJOG")->GetStaticField(0x479B0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGIJMPCIJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGIJMPCIJOG*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGIJMPCIJOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGIJMPCIJOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGIJMPCIJOG*>*(*)())((::PBYTE)hIl2Cpp + EGIJMPCIJOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGIJMPCIJOG* Clone()
		{
			return ((::EGIJMPCIJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGIJMPCIJOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGIJMPCIJOG*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGIJMPCIJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGIJMPCIJOG*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGIJMPCIJOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
