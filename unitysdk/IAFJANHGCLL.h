#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAFJANHGCLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAFJANHGCLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E603EE0)
#define IAFJANHGCLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E603F80)
#define IAFJANHGCLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E603BD0)
#define IAFJANHGCLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E603BA0)
#define IAFJANHGCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E603B90)
#define IAFJANHGCLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E603CE0)
#define IAFJANHGCLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E603C10)
#define IAFJANHGCLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E603E40)
#define IAFJANHGCLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E603B50)
#define IAFJANHGCLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E603F30)
#define IAFJANHGCLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E603F00)
#define IAFJANHGCLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E603B80)
#define IAFJANHGCLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E603E70)
#define IAFJANHGCLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E603ED0)

inline static constexpr unsigned int IAFJANHGCLL_TypeDefinitionIndex = 31163;

	class IAFJANHGCLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IAFJANHGCLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAFJANHGCLL*>**)UnitySDK::FromName("", "IAFJANHGCLL")->GetStaticField(0x52CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAFJANHGCLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFJANHGCLL*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFJANHGCLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IAFJANHGCLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAFJANHGCLL*>*(*)())((::PBYTE)hIl2Cpp + IAFJANHGCLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAFJANHGCLL* Clone()
		{
			return ((::IAFJANHGCLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAFJANHGCLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAFJANHGCLL*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFJANHGCLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAFJANHGCLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFJANHGCLL*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAFJANHGCLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
