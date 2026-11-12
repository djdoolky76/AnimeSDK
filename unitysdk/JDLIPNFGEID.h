#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDLIPNFGEID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDLIPNFGEID_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1FA1BC50)
#define JDLIPNFGEID_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1FA1BC60)
#define JDLIPNFGEID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA1BFC0)
#define JDLIPNFGEID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1C290)
#define JDLIPNFGEID_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA1BBC0)
#define JDLIPNFGEID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA1BB90)
#define JDLIPNFGEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1BB80)
#define JDLIPNFGEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA1BD80)
#define JDLIPNFGEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA1BC70)
#define JDLIPNFGEID_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1FA1BC40)
#define JDLIPNFGEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA1BE50)
#define JDLIPNFGEID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA1BB10)
#define JDLIPNFGEID_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1FA1BC30)
#define JDLIPNFGEID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA1C110)
#define JDLIPNFGEID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA1C0D0)
#define JDLIPNFGEID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA1BB70)
#define JDLIPNFGEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA1BE80)
#define JDLIPNFGEID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA1BEE0)

inline static constexpr unsigned int JDLIPNFGEID_TypeDefinitionIndex = 35920;

	class JDLIPNFGEID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JDLIPNFGEID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDLIPNFGEID*>**)UnitySDK::FromName("", "JDLIPNFGEID")->GetStaticField(0x4F800);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDLIPNFGEID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDLIPNFGEID*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDLIPNFGEID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDLIPNFGEID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDLIPNFGEID*>*(*)())((::PBYTE)hIl2Cpp + JDLIPNFGEID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDLIPNFGEID* Clone()
		{
			return ((::JDLIPNFGEID*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_CLONE_OFFSET))(this);
		}

		::System::UInt32 KMHNKEJMDAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDLIPNFGEID_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDLIPNFGEID_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDLIPNFGEID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDLIPNFGEID*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDLIPNFGEID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDLIPNFGEID*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDLIPNFGEID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
