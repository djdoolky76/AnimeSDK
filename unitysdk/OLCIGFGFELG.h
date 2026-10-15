#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLCIGFGFELG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLCIGFGFELG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA5490)
#define OLCIGFGFELG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5650)
#define OLCIGFGFELG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA5070)
#define OLCIGFGFELG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA5040)
#define OLCIGFGFELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5030)
#define OLCIGFGFELG_DEJBKFOMCOO_OFFSET UNITYSDK_OFFSET(0x1DEA50C0)
#define OLCIGFGFELG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA51C0)
#define OLCIGFGFELG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA50E0)
#define OLCIGFGFELG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA5340)
#define OLCIGFGFELG_GMPHLFAHODH_OFFSET UNITYSDK_OFFSET(0x1DEA50D0)
#define OLCIGFGFELG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA4FF0)
#define OLCIGFGFELG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA54F0)
#define OLCIGFGFELG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA54C0)
#define OLCIGFGFELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5020)
#define OLCIGFGFELG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA5370)
#define OLCIGFGFELG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA53D0)

inline static constexpr unsigned int OLCIGFGFELG_TypeDefinitionIndex = 33563;

	class OLCIGFGFELG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JJKJOJLKAGB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OLCIGFGFELG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLCIGFGFELG*>**)UnitySDK::FromName("", "OLCIGFGFELG")->GetStaticField(0x235F0);
		}

		// static const ::System::Object HBIEDKPOLHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLCIGFGFELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLCIGFGFELG*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCIGFGFELG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLCIGFGFELG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLCIGFGFELG*>*(*)())((::PBYTE)hIl2Cpp + OLCIGFGFELG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLCIGFGFELG* Clone()
		{
			return ((::OLCIGFGFELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_CLONE_OFFSET))(this);
		}

		::System::Boolean DEJBKFOMCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_DEJBKFOMCOO_OFFSET))(this);
		}

		::System::Void GMPHLFAHODH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLCIGFGFELG_GMPHLFAHODH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLCIGFGFELG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLCIGFGFELG*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLCIGFGFELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLCIGFGFELG*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLCIGFGFELG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
