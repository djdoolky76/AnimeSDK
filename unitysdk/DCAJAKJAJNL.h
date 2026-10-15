#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAJAKJAJNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCAJAKJAJNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E168170)
#define DCAJAKJAJNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E168390)
#define DCAJAKJAJNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E167D60)
#define DCAJAKJAJNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E167D30)
#define DCAJAKJAJNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E167D20)
#define DCAJAKJAJNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E167EF0)
#define DCAJAKJAJNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E167DF0)
#define DCAJAKJAJNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E168060)
#define DCAJAKJAJNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E167CB0)
#define DCAJAKJAJNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E168230)
#define DCAJAKJAJNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E168200)
#define DCAJAKJAJNL_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1E167DE0)
#define DCAJAKJAJNL_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1E167DD0)
#define DCAJAKJAJNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E167D10)
#define DCAJAKJAJNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E168090)
#define DCAJAKJAJNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1680F0)

inline static constexpr unsigned int DCAJAKJAJNL_TypeDefinitionIndex = 31036;

	class DCAJAKJAJNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JENHMINODOE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DCAJAKJAJNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCAJAKJAJNL*>**)UnitySDK::FromName("", "DCAJAKJAJNL")->GetStaticField(0x265B0);
		}

		// static const ::System::Object PMFNLNMINAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCAJAKJAJNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCAJAKJAJNL*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAJAKJAJNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCAJAKJAJNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCAJAKJAJNL*>*(*)())((::PBYTE)hIl2Cpp + DCAJAKJAJNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCAJAKJAJNL* Clone()
		{
			return ((::DCAJAKJAJNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCAJAKJAJNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCAJAKJAJNL*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCAJAKJAJNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCAJAKJAJNL*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCAJAKJAJNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
