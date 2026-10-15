#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKHCBKNGOMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKHCBKNGOMF_ADCKLIAOFON_OFFSET UNITYSDK_OFFSET(0x1E1D6EB0)
#define DKHCBKNGOMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D7250)
#define DKHCBKNGOMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7470)
#define DKHCBKNGOMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D6E40)
#define DKHCBKNGOMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D6E10)
#define DKHCBKNGOMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D6E00)
#define DKHCBKNGOMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D6FD0)
#define DKHCBKNGOMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D6ED0)
#define DKHCBKNGOMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D7140)
#define DKHCBKNGOMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D6D90)
#define DKHCBKNGOMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D7310)
#define DKHCBKNGOMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D72E0)
#define DKHCBKNGOMF_OFDBMGCNKAD_OFFSET UNITYSDK_OFFSET(0x1E1D6EC0)
#define DKHCBKNGOMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D6DF0)
#define DKHCBKNGOMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D7170)
#define DKHCBKNGOMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D71D0)

inline static constexpr unsigned int DKHCBKNGOMF_TypeDefinitionIndex = 31038;

	class DKHCBKNGOMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JAJPGMLEEPK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKHCBKNGOMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKHCBKNGOMF*>**)UnitySDK::FromName("", "DKHCBKNGOMF")->GetStaticField(0x3ABF0);
		}

		// static const ::System::Object DMGCJDFIBOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKHCBKNGOMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKHCBKNGOMF*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHCBKNGOMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKHCBKNGOMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKHCBKNGOMF*>*(*)())((::PBYTE)hIl2Cpp + DKHCBKNGOMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKHCBKNGOMF* Clone()
		{
			return ((::DKHCBKNGOMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 ADCKLIAOFON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_ADCKLIAOFON_OFFSET))(this);
		}

		::System::Void OFDBMGCNKAD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_OFDBMGCNKAD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKHCBKNGOMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKHCBKNGOMF*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKHCBKNGOMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKHCBKNGOMF*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKHCBKNGOMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
