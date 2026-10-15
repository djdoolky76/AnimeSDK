#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class KNEJEHOOFGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNEJEHOOFGI_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8A1FA0)
#define KNEJEHOOFGI_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8A1FB0)
#define KNEJEHOOFGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A2310)
#define KNEJEHOOFGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2620)
#define KNEJEHOOFGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A1F50)
#define KNEJEHOOFGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A1F20)
#define KNEJEHOOFGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A1F10)
#define KNEJEHOOFGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A20C0)
#define KNEJEHOOFGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A1FE0)
#define KNEJEHOOFGI_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E8A1FD0)
#define KNEJEHOOFGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A2190)
#define KNEJEHOOFGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A1ED0)
#define KNEJEHOOFGI_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E8A1FC0)
#define KNEJEHOOFGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A24A0)
#define KNEJEHOOFGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A2460)
#define KNEJEHOOFGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A1F00)
#define KNEJEHOOFGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A21C0)
#define KNEJEHOOFGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A2220)

inline static constexpr unsigned int KNEJEHOOFGI_TypeDefinitionIndex = 32916;

	class KNEJEHOOFGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KNEJEHOOFGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNEJEHOOFGI*>**)UnitySDK::FromName("", "KNEJEHOOFGI")->GetStaticField(0x23C80);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNEJEHOOFGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNEJEHOOFGI*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEJEHOOFGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNEJEHOOFGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNEJEHOOFGI*>*(*)())((::PBYTE)hIl2Cpp + KNEJEHOOFGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNEJEHOOFGI* Clone()
		{
			return ((::KNEJEHOOFGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNEJEHOOFGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNEJEHOOFGI*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNEJEHOOFGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNEJEHOOFGI*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNEJEHOOFGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
