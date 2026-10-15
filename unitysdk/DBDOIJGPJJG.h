#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class DBDOIJGPJJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBDOIJGPJJG_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E157B80)
#define DBDOIJGPJJG_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E157B90)
#define DBDOIJGPJJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E157F20)
#define DBDOIJGPJJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E158230)
#define DBDOIJGPJJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E157B10)
#define DBDOIJGPJJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E157AE0)
#define DBDOIJGPJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E157AD0)
#define DBDOIJGPJJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E157CD0)
#define DBDOIJGPJJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E157BC0)
#define DBDOIJGPJJG_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E157BB0)
#define DBDOIJGPJJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E157DA0)
#define DBDOIJGPJJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E157A60)
#define DBDOIJGPJJG_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E157BA0)
#define DBDOIJGPJJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1580B0)
#define DBDOIJGPJJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E158070)
#define DBDOIJGPJJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E157AC0)
#define DBDOIJGPJJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E157DD0)
#define DBDOIJGPJJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E157E30)

inline static constexpr unsigned int DBDOIJGPJJG_TypeDefinitionIndex = 27972;

	class DBDOIJGPJJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBDOIJGPJJG")->GetStaticField(0x25870);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBDOIJGPJJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBDOIJGPJJG*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDOIJGPJJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBDOIJGPJJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBDOIJGPJJG* Clone()
		{
			return ((::DBDOIJGPJJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBDOIJGPJJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBDOIJGPJJG*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBDOIJGPJJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBDOIJGPJJG*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBDOIJGPJJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
