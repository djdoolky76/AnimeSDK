#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDBOCKENFIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDBOCKENFIM_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E5470C0)
#define HDBOCKENFIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E547450)
#define HDBOCKENFIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E547750)
#define HDBOCKENFIM_CKNCGBKFJLM_OFFSET UNITYSDK_OFFSET(0x1E547090)
#define HDBOCKENFIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E547020)
#define HDBOCKENFIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E546FF0)
#define HDBOCKENFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E546FE0)
#define HDBOCKENFIM_EGJCCEOMPGF_OFFSET UNITYSDK_OFFSET(0x1E547070)
#define HDBOCKENFIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E547140)
#define HDBOCKENFIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5470F0)
#define HDBOCKENFIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E547220)
#define HDBOCKENFIM_IBDKNDLLFHM_OFFSET UNITYSDK_OFFSET(0x1E547080)
#define HDBOCKENFIM_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E5470B0)
#define HDBOCKENFIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E546FA0)
#define HDBOCKENFIM_LEAAIJJLHGI_OFFSET UNITYSDK_OFFSET(0x1E5470E0)
#define HDBOCKENFIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5476B0)
#define HDBOCKENFIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E547660)
#define HDBOCKENFIM_OOPJHEMILOE_OFFSET UNITYSDK_OFFSET(0x1E5470D0)
#define HDBOCKENFIM_PAAPPKICAOF_OFFSET UNITYSDK_OFFSET(0x1E5470A0)
#define HDBOCKENFIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E546FD0)
#define HDBOCKENFIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E547260)
#define HDBOCKENFIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5472C0)

inline static constexpr unsigned int HDBOCKENFIM_TypeDefinitionIndex = 33912;

	class HDBOCKENFIM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OAJAKDPLAKG; // 0x18
		::System::UInt32 FOFBAIEMCIN; // 0x1C
		::System::UInt32 DEJFOEHNFJA; // 0x20
		::System::UInt32 CGDJICJJCHK; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDBOCKENFIM")->GetStaticField(0x30EE0);
		}

		// static const ::System::Object MMDFCNJPKKG; // 0x0
		// static const ::System::Object EKHIBDEOALF; // 0x0
		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object GAHDIGCCOCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDBOCKENFIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDBOCKENFIM*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDBOCKENFIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDBOCKENFIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDBOCKENFIM* Clone()
		{
			return ((::HDBOCKENFIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGJCCEOMPGF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_EGJCCEOMPGF_OFFSET))(this);
		}

		::System::Void IBDKNDLLFHM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDBOCKENFIM_IBDKNDLLFHM_OFFSET))(this, a1);
		}

		::System::UInt32 CKNCGBKFJLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_CKNCGBKFJLM_OFFSET))(this);
		}

		::System::Void PAAPPKICAOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDBOCKENFIM_PAAPPKICAOF_OFFSET))(this, a1);
		}

		::System::UInt32 IDNFENJBNPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDBOCKENFIM_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 OOPJHEMILOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_OOPJHEMILOE_OFFSET))(this);
		}

		::System::Void LEAAIJJLHGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDBOCKENFIM_LEAAIJJLHGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDBOCKENFIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDBOCKENFIM*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDBOCKENFIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDBOCKENFIM*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDBOCKENFIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
