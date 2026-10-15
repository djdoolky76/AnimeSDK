#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKMAAIACPBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKMAAIACPBH_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1E0EC990)
#define CKMAAIACPBH_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1E0EC9A0)
#define CKMAAIACPBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0ECD00)
#define CKMAAIACPBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ECF20)
#define CKMAAIACPBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0EC950)
#define CKMAAIACPBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0EC920)
#define CKMAAIACPBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EC910)
#define CKMAAIACPBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0ECA80)
#define CKMAAIACPBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0EC9B0)
#define CKMAAIACPBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0ECBF0)
#define CKMAAIACPBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0EC8D0)
#define CKMAAIACPBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0ECDC0)
#define CKMAAIACPBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0ECD90)
#define CKMAAIACPBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0EC900)
#define CKMAAIACPBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0ECC20)
#define CKMAAIACPBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0ECC80)

inline static constexpr unsigned int CKMAAIACPBH_TypeDefinitionIndex = 27598;

	class CKMAAIACPBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MOKJAJGEAHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKMAAIACPBH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKMAAIACPBH*>**)UnitySDK::FromName("", "CKMAAIACPBH")->GetStaticField(0x1B560);
		}

		// static const ::System::Object ICBBGLFEJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKMAAIACPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMAAIACPBH*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKMAAIACPBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKMAAIACPBH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKMAAIACPBH*>*(*)())((::PBYTE)hIl2Cpp + CKMAAIACPBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKMAAIACPBH* Clone()
		{
			return ((::CKMAAIACPBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 BANCLADFGNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_BANCLADFGNI_OFFSET))(this);
		}

		::System::Void BMEDBCFMGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKMAAIACPBH_BMEDBCFMGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKMAAIACPBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKMAAIACPBH*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMAAIACPBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKMAAIACPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMAAIACPBH*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKMAAIACPBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
