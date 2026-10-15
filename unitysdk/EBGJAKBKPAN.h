#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class EBGJAKBKPAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBGJAKBKPAN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E236F00)
#define EBGJAKBKPAN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E236F10)
#define EBGJAKBKPAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E237280)
#define EBGJAKBKPAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E237590)
#define EBGJAKBKPAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E236E70)
#define EBGJAKBKPAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E236E40)
#define EBGJAKBKPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E236E30)
#define EBGJAKBKPAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E237030)
#define EBGJAKBKPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E236F20)
#define EBGJAKBKPAN_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E236EF0)
#define EBGJAKBKPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E237100)
#define EBGJAKBKPAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E236DC0)
#define EBGJAKBKPAN_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E236EE0)
#define EBGJAKBKPAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E237410)
#define EBGJAKBKPAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2373D0)
#define EBGJAKBKPAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E236E20)
#define EBGJAKBKPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E237130)
#define EBGJAKBKPAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E237190)

	class EBGJAKBKPAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBGJAKBKPAN")->GetStaticField(0x49540);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBGJAKBKPAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBGJAKBKPAN*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGJAKBKPAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBGJAKBKPAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBGJAKBKPAN* Clone()
		{
			return ((::EBGJAKBKPAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBGJAKBKPAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBGJAKBKPAN*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBGJAKBKPAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBGJAKBKPAN*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBGJAKBKPAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
