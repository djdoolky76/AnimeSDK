#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class DOIBLFFDHDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOIBLFFDHDG_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1F7593A0)
#define DOIBLFFDHDG_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1F7593B0)
#define DOIBLFFDHDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F759740)
#define DOIBLFFDHDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F759A50)
#define DOIBLFFDHDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F759330)
#define DOIBLFFDHDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F759300)
#define DOIBLFFDHDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7592F0)
#define DOIBLFFDHDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7594F0)
#define DOIBLFFDHDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7593E0)
#define DOIBLFFDHDG_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1F7593D0)
#define DOIBLFFDHDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7595C0)
#define DOIBLFFDHDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F759280)
#define DOIBLFFDHDG_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1F7593C0)
#define DOIBLFFDHDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7598D0)
#define DOIBLFFDHDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F759890)
#define DOIBLFFDHDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7592E0)
#define DOIBLFFDHDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7595F0)
#define DOIBLFFDHDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F759650)

inline static constexpr unsigned int DOIBLFFDHDG_TypeDefinitionIndex = 29115;

	class DOIBLFFDHDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DOIBLFFDHDG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOIBLFFDHDG*>**)UnitySDK::FromName("", "DOIBLFFDHDG")->GetStaticField(0x38AE0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOIBLFFDHDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIBLFFDHDG*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIBLFFDHDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOIBLFFDHDG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOIBLFFDHDG*>*(*)())((::PBYTE)hIl2Cpp + DOIBLFFDHDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOIBLFFDHDG* Clone()
		{
			return ((::DOIBLFFDHDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOIBLFFDHDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOIBLFFDHDG*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOIBLFFDHDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIBLFFDHDG*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOIBLFFDHDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
