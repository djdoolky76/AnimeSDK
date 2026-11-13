#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMEFGANLKI;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPEHFAHLDNM_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1FB7A3C0)
#define NPEHFAHLDNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB7AA20)
#define NPEHFAHLDNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB7AD60)
#define NPEHFAHLDNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB7A2E0)
#define NPEHFAHLDNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB7A220)
#define NPEHFAHLDNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7A210)
#define NPEHFAHLDNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB7A620)
#define NPEHFAHLDNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB7A3F0)
#define NPEHFAHLDNM_GCKPDNKAMIG_OFFSET UNITYSDK_OFFSET(0x1FB7A3E0)
#define NPEHFAHLDNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB7A850)
#define NPEHFAHLDNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB7A1D0)
#define NPEHFAHLDNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB7ABC0)
#define NPEHFAHLDNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB7AAB0)
#define NPEHFAHLDNM_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1FB7A3B0)
#define NPEHFAHLDNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB7A200)
#define NPEHFAHLDNM_POEBLLBAMCL_OFFSET UNITYSDK_OFFSET(0x1FB7A3D0)
#define NPEHFAHLDNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB7A8E0)
#define NPEHFAHLDNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB7A940)

inline static constexpr unsigned int NPEHFAHLDNM_TypeDefinitionIndex = 28381;

	class NPEHFAHLDNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KDMEFGANLKI* KLINKNMHOCI; // 0x18
		::KDMEFGANLKI* PAGGAMBNDMK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NPEHFAHLDNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPEHFAHLDNM*>**)UnitySDK::FromName("", "NPEHFAHLDNM")->GetStaticField(0x546A0);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object CMKNKAADCBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEHFAHLDNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPEHFAHLDNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPEHFAHLDNM*>*(*)())((::PBYTE)hIl2Cpp + NPEHFAHLDNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPEHFAHLDNM* Clone()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_CLONE_OFFSET))(this);
		}

		::KDMEFGANLKI* MHHDBKELGIO()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::KDMEFGANLKI* POEBLLBAMCL()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_POEBLLBAMCL_OFFSET))(this);
		}

		::System::Void GCKPDNKAMIG(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_GCKPDNKAMIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPEHFAHLDNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPEHFAHLDNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
