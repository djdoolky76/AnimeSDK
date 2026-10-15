#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIHGOEPANI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEIHGOEPANI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3675B0)
#define FEIHGOEPANI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3677D0)
#define FEIHGOEPANI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E367200)
#define FEIHGOEPANI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3671D0)
#define FEIHGOEPANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3671C0)
#define FEIHGOEPANI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E367330)
#define FEIHGOEPANI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E367260)
#define FEIHGOEPANI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3674A0)
#define FEIHGOEPANI_HJAAHFFLLDF_OFFSET UNITYSDK_OFFSET(0x1E367240)
#define FEIHGOEPANI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E367180)
#define FEIHGOEPANI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E367670)
#define FEIHGOEPANI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E367640)
#define FEIHGOEPANI_NMBMCJBLBDC_OFFSET UNITYSDK_OFFSET(0x1E367250)
#define FEIHGOEPANI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3671B0)
#define FEIHGOEPANI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3674D0)
#define FEIHGOEPANI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E367530)

inline static constexpr unsigned int FEIHGOEPANI_TypeDefinitionIndex = 32211;

	class FEIHGOEPANI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PKGHLPCBLPK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FEIHGOEPANI")->GetStaticField(0x5D6F0);
		}

		// static const ::System::Object BCMLCFBLMOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEIHGOEPANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEIHGOEPANI*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEIHGOEPANI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FEIHGOEPANI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEIHGOEPANI* Clone()
		{
			return ((::FEIHGOEPANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_CLONE_OFFSET))(this);
		}

		::System::UInt32 HJAAHFFLLDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_HJAAHFFLLDF_OFFSET))(this);
		}

		::System::Void NMBMCJBLBDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEIHGOEPANI_NMBMCJBLBDC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEIHGOEPANI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEIHGOEPANI*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEIHGOEPANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEIHGOEPANI*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEIHGOEPANI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
