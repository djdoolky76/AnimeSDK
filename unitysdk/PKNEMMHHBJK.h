#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKNEMMHHBJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKNEMMHHBJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F245BD0)
#define PKNEMMHHBJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F245C70)
#define PKNEMMHHBJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2458C0)
#define PKNEMMHHBJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F245890)
#define PKNEMMHHBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F245880)
#define PKNEMMHHBJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2459D0)
#define PKNEMMHHBJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F245900)
#define PKNEMMHHBJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F245B30)
#define PKNEMMHHBJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F245840)
#define PKNEMMHHBJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F245C20)
#define PKNEMMHHBJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F245BF0)
#define PKNEMMHHBJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F245870)
#define PKNEMMHHBJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F245B60)
#define PKNEMMHHBJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F245BC0)

inline static constexpr unsigned int PKNEMMHHBJK_TypeDefinitionIndex = 32040;

	class PKNEMMHHBJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PKNEMMHHBJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKNEMMHHBJK*>**)UnitySDK::FromName("", "PKNEMMHHBJK")->GetStaticField(0x3CDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKNEMMHHBJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKNEMMHHBJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKNEMMHHBJK*>*(*)())((::PBYTE)hIl2Cpp + PKNEMMHHBJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKNEMMHHBJK* Clone()
		{
			return ((::PKNEMMHHBJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKNEMMHHBJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKNEMMHHBJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
