#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHFDINIJOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNHFDINIJOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E875B40)
#define KNHFDINIJOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875BE0)
#define KNHFDINIJOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E875830)
#define KNHFDINIJOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E875800)
#define KNHFDINIJOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8757F0)
#define KNHFDINIJOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E875940)
#define KNHFDINIJOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E875870)
#define KNHFDINIJOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E875AA0)
#define KNHFDINIJOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8757B0)
#define KNHFDINIJOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E875B90)
#define KNHFDINIJOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E875B60)
#define KNHFDINIJOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8757E0)
#define KNHFDINIJOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E875AD0)
#define KNHFDINIJOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E875B30)

inline static constexpr unsigned int KNHFDINIJOL_TypeDefinitionIndex = 31725;

	class KNHFDINIJOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KNHFDINIJOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNHFDINIJOL*>**)UnitySDK::FromName("", "KNHFDINIJOL")->GetStaticField(0x1FEC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNHFDINIJOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHFDINIJOL*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHFDINIJOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNHFDINIJOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNHFDINIJOL*>*(*)())((::PBYTE)hIl2Cpp + KNHFDINIJOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNHFDINIJOL* Clone()
		{
			return ((::KNHFDINIJOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNHFDINIJOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNHFDINIJOL*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNHFDINIJOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHFDINIJOL*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNHFDINIJOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
