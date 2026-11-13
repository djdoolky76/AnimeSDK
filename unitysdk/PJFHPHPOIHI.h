#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFHPHPOIHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFHPHPOIHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2055F340)
#define PJFHPHPOIHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055F610)
#define PJFHPHPOIHI_CLONE_OFFSET UNITYSDK_OFFSET(0x2055EF90)
#define PJFHPHPOIHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2055EF60)
#define PJFHPHPOIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x2055EF50)
#define PJFHPHPOIHI_ECCEKCANBID_OFFSET UNITYSDK_OFFSET(0x2055EFE0)
#define PJFHPHPOIHI_EHGANCBJNIJ_OFFSET UNITYSDK_OFFSET(0x2055F000)
#define PJFHPHPOIHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2055F100)
#define PJFHPHPOIHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x2055F020)
#define PJFHPHPOIHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2055F1D0)
#define PJFHPHPOIHI_GNGJNPAHOCH_OFFSET UNITYSDK_OFFSET(0x2055F010)
#define PJFHPHPOIHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2055EF10)
#define PJFHPHPOIHI_MABGCABMNOM_OFFSET UNITYSDK_OFFSET(0x2055EFF0)
#define PJFHPHPOIHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2055F490)
#define PJFHPHPOIHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2055F450)
#define PJFHPHPOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2055EF40)
#define PJFHPHPOIHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2055F200)
#define PJFHPHPOIHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x2055F260)

inline static constexpr unsigned int PJFHPHPOIHI_TypeDefinitionIndex = 27946;

	class PJFHPHPOIHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLMPJIMKAAG; // 0x18
		::System::UInt32 JNKLHJOCCBN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PJFHPHPOIHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJFHPHPOIHI*>**)UnitySDK::FromName("", "PJFHPHPOIHI")->GetStaticField(0x3EE60);
		}

		// static const ::System::Object KKPOIMOFOGM; // 0x0
		// static const ::System::Object CPHJPMIMLOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFHPHPOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFHPHPOIHI*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFHPHPOIHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJFHPHPOIHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJFHPHPOIHI*>*(*)())((::PBYTE)hIl2Cpp + PJFHPHPOIHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFHPHPOIHI* Clone()
		{
			return ((::PJFHPHPOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECCEKCANBID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_ECCEKCANBID_OFFSET))(this);
		}

		::System::Void MABGCABMNOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_MABGCABMNOM_OFFSET))(this, a1);
		}

		::System::UInt32 EHGANCBJNIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_EHGANCBJNIJ_OFFSET))(this);
		}

		::System::Void GNGJNPAHOCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_GNGJNPAHOCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFHPHPOIHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFHPHPOIHI*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFHPHPOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFHPHPOIHI*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFHPHPOIHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
