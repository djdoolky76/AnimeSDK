#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCCAABPFBLF;
class PMJECJLKNLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMJECJLKNLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFAC5F0)
#define PMJECJLKNLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAC900)
#define PMJECJLKNLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFABEF0)
#define PMJECJLKNLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFABE80)
#define PMJECJLKNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFABE70)
#define PMJECJLKNLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFAC100)
#define PMJECJLKNLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFABF90)
#define PMJECJLKNLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFAC3D0)
#define PMJECJLKNLJ_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1DFABF70)
#define PMJECJLKNLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFABE30)
#define PMJECJLKNLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFAC730)
#define PMJECJLKNLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFAC650)
#define PMJECJLKNLJ_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1DFABF80)
#define PMJECJLKNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFABE60)
#define PMJECJLKNLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFAC500)
#define PMJECJLKNLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFAC560)

inline static constexpr unsigned int PMJECJLKNLJ_TypeDefinitionIndex = 26127;

	class PMJECJLKNLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCCAABPFBLF* MNJNMPKLFAI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PMJECJLKNLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMJECJLKNLJ*>**)UnitySDK::FromName("", "PMJECJLKNLJ")->GetStaticField(0x4DA00);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMJECJLKNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMJECJLKNLJ*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMJECJLKNLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMJECJLKNLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMJECJLKNLJ*>*(*)())((::PBYTE)hIl2Cpp + PMJECJLKNLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMJECJLKNLJ* Clone()
		{
			return ((::PMJECJLKNLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_CLONE_OFFSET))(this);
		}

		::OCCAABPFBLF* JIFPIGBJFEH()
		{
			return ((::OCCAABPFBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::OCCAABPFBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMJECJLKNLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMJECJLKNLJ*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMJECJLKNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMJECJLKNLJ*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMJECJLKNLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
