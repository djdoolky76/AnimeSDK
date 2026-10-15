#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPMNCENLCAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPMNCENLCAB_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E5FD850)
#define HPMNCENLCAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FDBE0)
#define HPMNCENLCAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FDE00)
#define HPMNCENLCAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FD7D0)
#define HPMNCENLCAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FD7A0)
#define HPMNCENLCAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD790)
#define HPMNCENLCAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FD960)
#define HPMNCENLCAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FD860)
#define HPMNCENLCAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FDAD0)
#define HPMNCENLCAB_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E5FD840)
#define HPMNCENLCAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FD720)
#define HPMNCENLCAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FDCA0)
#define HPMNCENLCAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FDC70)
#define HPMNCENLCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD780)
#define HPMNCENLCAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FDB00)
#define HPMNCENLCAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FDB60)

inline static constexpr unsigned int HPMNCENLCAB_TypeDefinitionIndex = 29316;

	class HPMNCENLCAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPMNCENLCAB")->GetStaticField(0x52350);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPMNCENLCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPMNCENLCAB*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPMNCENLCAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPMNCENLCAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPMNCENLCAB* Clone()
		{
			return ((::HPMNCENLCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPMNCENLCAB_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPMNCENLCAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPMNCENLCAB*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPMNCENLCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPMNCENLCAB*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPMNCENLCAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
