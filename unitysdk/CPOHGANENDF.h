#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPOHGANENDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPOHGANENDF_ALGMKEOMNOJ_OFFSET UNITYSDK_OFFSET(0x1F41F6C0)
#define CPOHGANENDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F41FA40)
#define CPOHGANENDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F41FD10)
#define CPOHGANENDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F41F640)
#define CPOHGANENDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F41F610)
#define CPOHGANENDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41F600)
#define CPOHGANENDF_ECDIGCDBEAL_OFFSET UNITYSDK_OFFSET(0x1F41F6E0)
#define CPOHGANENDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F41F800)
#define CPOHGANENDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F41F6F0)
#define CPOHGANENDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F41F8D0)
#define CPOHGANENDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F41F590)
#define CPOHGANENDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F41FB90)
#define CPOHGANENDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F41FB50)
#define CPOHGANENDF_NINADLCPCOE_OFFSET UNITYSDK_OFFSET(0x1F41F6B0)
#define CPOHGANENDF_OKMIOOPMLBA_OFFSET UNITYSDK_OFFSET(0x1F41F6D0)
#define CPOHGANENDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F41F5F0)
#define CPOHGANENDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F41F900)
#define CPOHGANENDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F41F960)

inline static constexpr unsigned int CPOHGANENDF_TypeDefinitionIndex = 30584;

	class CPOHGANENDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PFOKKINIGBF; // 0x18
		::System::UInt32 AICGCNJIHAB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CPOHGANENDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPOHGANENDF*>**)UnitySDK::FromName("", "CPOHGANENDF")->GetStaticField(0x1E1A0);
		}

		// static const ::System::Object MJECFDFINCP; // 0x0
		// static const ::System::Object DMMLKAHCNNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPOHGANENDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPOHGANENDF*))((::PBYTE)hIl2Cpp + CPOHGANENDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPOHGANENDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPOHGANENDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPOHGANENDF*>*(*)())((::PBYTE)hIl2Cpp + CPOHGANENDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPOHGANENDF* Clone()
		{
			return ((::CPOHGANENDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 NINADLCPCOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_NINADLCPCOE_OFFSET))(this);
		}

		::System::Void ALGMKEOMNOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPOHGANENDF_ALGMKEOMNOJ_OFFSET))(this, a1);
		}

		::System::UInt32 OKMIOOPMLBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_OKMIOOPMLBA_OFFSET))(this);
		}

		::System::Void ECDIGCDBEAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPOHGANENDF_ECDIGCDBEAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPOHGANENDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPOHGANENDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPOHGANENDF*))((::PBYTE)hIl2Cpp + CPOHGANENDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPOHGANENDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPOHGANENDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPOHGANENDF*))((::PBYTE)hIl2Cpp + CPOHGANENDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPOHGANENDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
