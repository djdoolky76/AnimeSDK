#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODPMEJGOOMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODPMEJGOOMB_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F0C3140)
#define ODPMEJGOOMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0C34D0)
#define ODPMEJGOOMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C36F0)
#define ODPMEJGOOMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0C30C0)
#define ODPMEJGOOMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0C3090)
#define ODPMEJGOOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C3080)
#define ODPMEJGOOMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0C3250)
#define ODPMEJGOOMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0C3150)
#define ODPMEJGOOMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0C33C0)
#define ODPMEJGOOMB_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F0C3130)
#define ODPMEJGOOMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0C3010)
#define ODPMEJGOOMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0C3590)
#define ODPMEJGOOMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0C3560)
#define ODPMEJGOOMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0C3070)
#define ODPMEJGOOMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0C33F0)
#define ODPMEJGOOMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0C3450)

inline static constexpr unsigned int ODPMEJGOOMB_TypeDefinitionIndex = 30388;

	class ODPMEJGOOMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ODPMEJGOOMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ODPMEJGOOMB*>**)UnitySDK::FromName("", "ODPMEJGOOMB")->GetStaticField(0xEAD0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODPMEJGOOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODPMEJGOOMB*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODPMEJGOOMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ODPMEJGOOMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ODPMEJGOOMB*>*(*)())((::PBYTE)hIl2Cpp + ODPMEJGOOMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODPMEJGOOMB* Clone()
		{
			return ((::ODPMEJGOOMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODPMEJGOOMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODPMEJGOOMB*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODPMEJGOOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODPMEJGOOMB*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODPMEJGOOMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
