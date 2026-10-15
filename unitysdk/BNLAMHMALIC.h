#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLAMHMALIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNLAMHMALIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E037E60)
#define BNLAMHMALIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E038080)
#define BNLAMHMALIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E037AB0)
#define BNLAMHMALIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E037A80)
#define BNLAMHMALIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E037A70)
#define BNLAMHMALIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E037BE0)
#define BNLAMHMALIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E037B10)
#define BNLAMHMALIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E037B00)
#define BNLAMHMALIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E037D50)
#define BNLAMHMALIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E037A30)
#define BNLAMHMALIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E037F20)
#define BNLAMHMALIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E037EF0)
#define BNLAMHMALIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E037AF0)
#define BNLAMHMALIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E037A60)
#define BNLAMHMALIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E037D80)
#define BNLAMHMALIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E037DE0)

inline static constexpr unsigned int BNLAMHMALIC_TypeDefinitionIndex = 33996;

	class BNLAMHMALIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BNLAMHMALIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BNLAMHMALIC*>**)UnitySDK::FromName("", "BNLAMHMALIC")->GetStaticField(0x52B50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNLAMHMALIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLAMHMALIC*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNLAMHMALIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BNLAMHMALIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BNLAMHMALIC*>*(*)())((::PBYTE)hIl2Cpp + BNLAMHMALIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNLAMHMALIC* Clone()
		{
			return ((::BNLAMHMALIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNLAMHMALIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNLAMHMALIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNLAMHMALIC*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNLAMHMALIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLAMHMALIC*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNLAMHMALIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
