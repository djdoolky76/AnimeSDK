#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEAALPHGFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIEAALPHGFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A2830)
#define CIEAALPHGFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A28D0)
#define CIEAALPHGFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A2520)
#define CIEAALPHGFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A24F0)
#define CIEAALPHGFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A24E0)
#define CIEAALPHGFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A2630)
#define CIEAALPHGFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A2560)
#define CIEAALPHGFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A2790)
#define CIEAALPHGFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A24A0)
#define CIEAALPHGFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A2880)
#define CIEAALPHGFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A2850)
#define CIEAALPHGFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A24D0)
#define CIEAALPHGFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A27C0)
#define CIEAALPHGFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A2820)

inline static constexpr unsigned int CIEAALPHGFM_TypeDefinitionIndex = 34682;

	class CIEAALPHGFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CIEAALPHGFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIEAALPHGFM*>**)UnitySDK::FromName("", "CIEAALPHGFM")->GetStaticField(0x16500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIEAALPHGFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEAALPHGFM*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEAALPHGFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIEAALPHGFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIEAALPHGFM*>*(*)())((::PBYTE)hIl2Cpp + CIEAALPHGFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIEAALPHGFM* Clone()
		{
			return ((::CIEAALPHGFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIEAALPHGFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIEAALPHGFM*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIEAALPHGFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEAALPHGFM*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIEAALPHGFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
