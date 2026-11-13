#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFJHBKDGDAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFJHBKDGDAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20295AC0)
#define IFJHBKDGDAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x20295D90)
#define IFJHBKDGDAG_CLONE_OFFSET UNITYSDK_OFFSET(0x202956C0)
#define IFJHBKDGDAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20295690)
#define IFJHBKDGDAG_CTOR_OFFSET UNITYSDK_OFFSET(0x20295680)
#define IFJHBKDGDAG_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x20295730)
#define IFJHBKDGDAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20295880)
#define IFJHBKDGDAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20295770)
#define IFJHBKDGDAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20295950)
#define IFJHBKDGDAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20295610)
#define IFJHBKDGDAG_KIKPAINIFIO_OFFSET UNITYSDK_OFFSET(0x20295760)
#define IFJHBKDGDAG_LBDFEENDBBM_OFFSET UNITYSDK_OFFSET(0x20295750)
#define IFJHBKDGDAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20295C10)
#define IFJHBKDGDAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20295BD0)
#define IFJHBKDGDAG_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x20295740)
#define IFJHBKDGDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20295670)
#define IFJHBKDGDAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20295980)
#define IFJHBKDGDAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x202959E0)

inline static constexpr unsigned int IFJHBKDGDAG_TypeDefinitionIndex = 30378;

	class IFJHBKDGDAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDHKOLIPEOB; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IFJHBKDGDAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFJHBKDGDAG*>**)UnitySDK::FromName("", "IFJHBKDGDAG")->GetStaticField(0x461B0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object BCLEOGHNMLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFJHBKDGDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFJHBKDGDAG*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFJHBKDGDAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFJHBKDGDAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFJHBKDGDAG*>*(*)())((::PBYTE)hIl2Cpp + IFJHBKDGDAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFJHBKDGDAG* Clone()
		{
			return ((::IFJHBKDGDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 LBDFEENDBBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_LBDFEENDBBM_OFFSET))(this);
		}

		::System::Void KIKPAINIFIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_KIKPAINIFIO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFJHBKDGDAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFJHBKDGDAG*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFJHBKDGDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFJHBKDGDAG*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFJHBKDGDAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
