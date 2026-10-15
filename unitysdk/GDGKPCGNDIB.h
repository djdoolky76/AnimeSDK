#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGKPCGNDIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDGKPCGNDIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E449AB0)
#define GDGKPCGNDIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E449B50)
#define GDGKPCGNDIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4497A0)
#define GDGKPCGNDIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E449770)
#define GDGKPCGNDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E449760)
#define GDGKPCGNDIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4498B0)
#define GDGKPCGNDIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4497E0)
#define GDGKPCGNDIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E449A10)
#define GDGKPCGNDIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E449720)
#define GDGKPCGNDIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E449B00)
#define GDGKPCGNDIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E449AD0)
#define GDGKPCGNDIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E449750)
#define GDGKPCGNDIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E449A40)
#define GDGKPCGNDIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E449AA0)

inline static constexpr unsigned int GDGKPCGNDIB_TypeDefinitionIndex = 33790;

	class GDGKPCGNDIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GDGKPCGNDIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDGKPCGNDIB*>**)UnitySDK::FromName("", "GDGKPCGNDIB")->GetStaticField(0x10970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDGKPCGNDIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGKPCGNDIB*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGKPCGNDIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDGKPCGNDIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDGKPCGNDIB*>*(*)())((::PBYTE)hIl2Cpp + GDGKPCGNDIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDGKPCGNDIB* Clone()
		{
			return ((::GDGKPCGNDIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDGKPCGNDIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDGKPCGNDIB*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDGKPCGNDIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGKPCGNDIB*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDGKPCGNDIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
