#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIHGOEPANI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEIHGOEPANI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E339F20)
#define FEIHGOEPANI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33A140)
#define FEIHGOEPANI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E339B70)
#define FEIHGOEPANI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E339B40)
#define FEIHGOEPANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E339B30)
#define FEIHGOEPANI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E339CA0)
#define FEIHGOEPANI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E339BD0)
#define FEIHGOEPANI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E339E10)
#define FEIHGOEPANI_HJAAHFFLLDF_OFFSET UNITYSDK_OFFSET(0x1E339BB0)
#define FEIHGOEPANI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E339AF0)
#define FEIHGOEPANI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E339FE0)
#define FEIHGOEPANI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E339FB0)
#define FEIHGOEPANI_NMBMCJBLBDC_OFFSET UNITYSDK_OFFSET(0x1E339BC0)
#define FEIHGOEPANI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E339B20)
#define FEIHGOEPANI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E339E40)
#define FEIHGOEPANI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E339EA0)

inline static constexpr unsigned int FEIHGOEPANI_TypeDefinitionIndex = 32211;

	class FEIHGOEPANI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PKGHLPCBLPK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FEIHGOEPANI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEIHGOEPANI*>**)UnitySDK::FromName("", "FEIHGOEPANI")->GetStaticField(0x53D20);
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

		static ::Google::Protobuf::MessageParser_1<::FEIHGOEPANI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEIHGOEPANI*>*(*)())((::PBYTE)hIl2Cpp + FEIHGOEPANI_JJGHOBBFNJD_OFFSET))();
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
