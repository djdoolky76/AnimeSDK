#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFKOHLGMOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKFKOHLGMOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98F250)
#define LKFKOHLGMOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98F470)
#define LKFKOHLGMOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98EEA0)
#define LKFKOHLGMOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98EE70)
#define LKFKOHLGMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98EE60)
#define LKFKOHLGMOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98EFD0)
#define LKFKOHLGMOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98EF00)
#define LKFKOHLGMOJ_GAIHIGEDIOG_OFFSET UNITYSDK_OFFSET(0x1E98EEF0)
#define LKFKOHLGMOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98F140)
#define LKFKOHLGMOJ_JJEMMLDMDCF_OFFSET UNITYSDK_OFFSET(0x1E98EEE0)
#define LKFKOHLGMOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98EE20)
#define LKFKOHLGMOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98F310)
#define LKFKOHLGMOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98F2E0)
#define LKFKOHLGMOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98EE50)
#define LKFKOHLGMOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98F170)
#define LKFKOHLGMOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98F1D0)

inline static constexpr unsigned int LKFKOHLGMOJ_TypeDefinitionIndex = 27138;

	class LKFKOHLGMOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BAMCEOHNLAA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LKFKOHLGMOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKFKOHLGMOJ*>**)UnitySDK::FromName("", "LKFKOHLGMOJ")->GetStaticField(0x4A750);
		}

		// static const ::System::Object BCFJGDPGKAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKFKOHLGMOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKFKOHLGMOJ*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKFKOHLGMOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKFKOHLGMOJ*>*(*)())((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKFKOHLGMOJ* Clone()
		{
			return ((::LKFKOHLGMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JJEMMLDMDCF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_JJEMMLDMDCF_OFFSET))(this);
		}

		::System::Void GAIHIGEDIOG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_GAIHIGEDIOG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKFKOHLGMOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFKOHLGMOJ*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKFKOHLGMOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKFKOHLGMOJ*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
