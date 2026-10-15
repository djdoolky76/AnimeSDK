#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGFEGEBEID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNGFEGEBEID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F5E20)
#define DNGFEGEBEID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6040)
#define DNGFEGEBEID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F5A70)
#define DNGFEGEBEID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F5A40)
#define DNGFEGEBEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F5A30)
#define DNGFEGEBEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F5BA0)
#define DNGFEGEBEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F5AD0)
#define DNGFEGEBEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F5D10)
#define DNGFEGEBEID_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1E1F5AC0)
#define DNGFEGEBEID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F59F0)
#define DNGFEGEBEID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F5EE0)
#define DNGFEGEBEID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F5EB0)
#define DNGFEGEBEID_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1E1F5AB0)
#define DNGFEGEBEID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F5A20)
#define DNGFEGEBEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F5D40)
#define DNGFEGEBEID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F5DA0)

inline static constexpr unsigned int DNGFEGEBEID_TypeDefinitionIndex = 25992;

	class DNGFEGEBEID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OFAGPEOKFKD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DNGFEGEBEID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNGFEGEBEID*>**)UnitySDK::FromName("", "DNGFEGEBEID")->GetStaticField(0x40300);
		}

		// static const ::System::Object FDJBMJHPBGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNGFEGEBEID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGFEGEBEID*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNGFEGEBEID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNGFEGEBEID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNGFEGEBEID*>*(*)())((::PBYTE)hIl2Cpp + DNGFEGEBEID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNGFEGEBEID* Clone()
		{
			return ((::DNGFEGEBEID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLBKJMAIDKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_OLBKJMAIDKH_OFFSET))(this);
		}

		::System::Void INAEHNCKBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNGFEGEBEID_INAEHNCKBJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNGFEGEBEID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNGFEGEBEID*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNGFEGEBEID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGFEGEBEID*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNGFEGEBEID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
