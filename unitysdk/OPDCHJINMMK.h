#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPDCHJINMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPDCHJINMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB1130)
#define OPDCHJINMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB11D0)
#define OPDCHJINMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB0E20)
#define OPDCHJINMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB0DF0)
#define OPDCHJINMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0DE0)
#define OPDCHJINMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB0F30)
#define OPDCHJINMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB0E60)
#define OPDCHJINMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB1090)
#define OPDCHJINMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB0DA0)
#define OPDCHJINMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB1180)
#define OPDCHJINMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB1150)
#define OPDCHJINMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0DD0)
#define OPDCHJINMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB10C0)
#define OPDCHJINMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB1120)

inline static constexpr unsigned int OPDCHJINMMK_TypeDefinitionIndex = 29017;

	class OPDCHJINMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OPDCHJINMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPDCHJINMMK*>**)UnitySDK::FromName("", "OPDCHJINMMK")->GetStaticField(0x2AC20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPDCHJINMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDCHJINMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPDCHJINMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPDCHJINMMK*>*(*)())((::PBYTE)hIl2Cpp + OPDCHJINMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPDCHJINMMK* Clone()
		{
			return ((::OPDCHJINMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPDCHJINMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPDCHJINMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
