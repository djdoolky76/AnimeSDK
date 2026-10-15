#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGFHEGJKHFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGFHEGJKHFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AC920)
#define DGFHEGJKHFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1ACB40)
#define DGFHEGJKHFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AC570)
#define DGFHEGJKHFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AC540)
#define DGFHEGJKHFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC530)
#define DGFHEGJKHFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1AC6A0)
#define DGFHEGJKHFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1AC5D0)
#define DGFHEGJKHFO_FFAENEBEACN_OFFSET UNITYSDK_OFFSET(0x1E1AC5B0)
#define DGFHEGJKHFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1AC810)
#define DGFHEGJKHFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AC4F0)
#define DGFHEGJKHFO_JPMMNHAGFPI_OFFSET UNITYSDK_OFFSET(0x1E1AC5C0)
#define DGFHEGJKHFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AC9E0)
#define DGFHEGJKHFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AC9B0)
#define DGFHEGJKHFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC520)
#define DGFHEGJKHFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AC840)
#define DGFHEGJKHFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AC8A0)

inline static constexpr unsigned int DGFHEGJKHFO_TypeDefinitionIndex = 30320;

	class DGFHEGJKHFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JKAKCPDNIDO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DGFHEGJKHFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGFHEGJKHFO*>**)UnitySDK::FromName("", "DGFHEGJKHFO")->GetStaticField(0x34180);
		}

		// static const ::System::Object FOBFDNFNFGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGFHEGJKHFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGFHEGJKHFO*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGFHEGJKHFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGFHEGJKHFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGFHEGJKHFO*>*(*)())((::PBYTE)hIl2Cpp + DGFHEGJKHFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGFHEGJKHFO* Clone()
		{
			return ((::DGFHEGJKHFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFAENEBEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_FFAENEBEACN_OFFSET))(this);
		}

		::System::Void JPMMNHAGFPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_JPMMNHAGFPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGFHEGJKHFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGFHEGJKHFO*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGFHEGJKHFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGFHEGJKHFO*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGFHEGJKHFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
