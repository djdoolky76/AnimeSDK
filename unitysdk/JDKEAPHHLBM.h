#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDKEAPHHLBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDKEAPHHLBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DEFD0)
#define JDKEAPHHLBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF070)
#define JDKEAPHHLBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DECC0)
#define JDKEAPHHLBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DEC90)
#define JDKEAPHHLBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DEC80)
#define JDKEAPHHLBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DEDD0)
#define JDKEAPHHLBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DED00)
#define JDKEAPHHLBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DEF30)
#define JDKEAPHHLBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DEC40)
#define JDKEAPHHLBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DF020)
#define JDKEAPHHLBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DEFF0)
#define JDKEAPHHLBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DEC70)
#define JDKEAPHHLBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DEF60)
#define JDKEAPHHLBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DEFC0)

inline static constexpr unsigned int JDKEAPHHLBM_TypeDefinitionIndex = 29077;

	class JDKEAPHHLBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JDKEAPHHLBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDKEAPHHLBM*>**)UnitySDK::FromName("", "JDKEAPHHLBM")->GetStaticField(0x5AB70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDKEAPHHLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKEAPHHLBM*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKEAPHHLBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDKEAPHHLBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDKEAPHHLBM*>*(*)())((::PBYTE)hIl2Cpp + JDKEAPHHLBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDKEAPHHLBM* Clone()
		{
			return ((::JDKEAPHHLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDKEAPHHLBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDKEAPHHLBM*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDKEAPHHLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKEAPHHLBM*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDKEAPHHLBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
