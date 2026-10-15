#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPHPAKFLNOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPHPAKFLNOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E20FE70)
#define DPHPAKFLNOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20FF10)
#define DPHPAKFLNOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E20FB10)
#define DPHPAKFLNOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E20FAE0)
#define DPHPAKFLNOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20FAD0)
#define DPHPAKFLNOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E20FC70)
#define DPHPAKFLNOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E20FB80)
#define DPHPAKFLNOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E20FDD0)
#define DPHPAKFLNOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E20FA60)
#define DPHPAKFLNOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20FEC0)
#define DPHPAKFLNOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20FE90)
#define DPHPAKFLNOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E20FAC0)
#define DPHPAKFLNOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E20FE00)
#define DPHPAKFLNOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E20FE60)

inline static constexpr unsigned int DPHPAKFLNOD_TypeDefinitionIndex = 29480;

	class DPHPAKFLNOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DPHPAKFLNOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPHPAKFLNOD*>**)UnitySDK::FromName("", "DPHPAKFLNOD")->GetStaticField(0x45630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPHPAKFLNOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPHPAKFLNOD*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHPAKFLNOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPHPAKFLNOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPHPAKFLNOD*>*(*)())((::PBYTE)hIl2Cpp + DPHPAKFLNOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPHPAKFLNOD* Clone()
		{
			return ((::DPHPAKFLNOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPHPAKFLNOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPHPAKFLNOD*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPHPAKFLNOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPHPAKFLNOD*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPHPAKFLNOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
