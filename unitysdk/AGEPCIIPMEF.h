#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEPCIIPMEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGEPCIIPMEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FDB80)
#define AGEPCIIPMEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDC20)
#define AGEPCIIPMEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FD870)
#define AGEPCIIPMEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FD840)
#define AGEPCIIPMEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD830)
#define AGEPCIIPMEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FD980)
#define AGEPCIIPMEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FD8B0)
#define AGEPCIIPMEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FDAE0)
#define AGEPCIIPMEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FD7F0)
#define AGEPCIIPMEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FDBD0)
#define AGEPCIIPMEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FDBA0)
#define AGEPCIIPMEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD820)
#define AGEPCIIPMEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FDB10)
#define AGEPCIIPMEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FDB70)

inline static constexpr unsigned int AGEPCIIPMEF_TypeDefinitionIndex = 27078;

	class AGEPCIIPMEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AGEPCIIPMEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGEPCIIPMEF*>**)UnitySDK::FromName("", "AGEPCIIPMEF")->GetStaticField(0x37220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGEPCIIPMEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEPCIIPMEF*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEPCIIPMEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGEPCIIPMEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGEPCIIPMEF*>*(*)())((::PBYTE)hIl2Cpp + AGEPCIIPMEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGEPCIIPMEF* Clone()
		{
			return ((::AGEPCIIPMEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGEPCIIPMEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGEPCIIPMEF*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGEPCIIPMEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEPCIIPMEF*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGEPCIIPMEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
