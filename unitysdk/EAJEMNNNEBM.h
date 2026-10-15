#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAJEMNNNEBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAJEMNNNEBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FEBD0)
#define EAJEMNNNEBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FEEA0)
#define EAJEMNNNEBM_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E1FE870)
#define EAJEMNNNEBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FE820)
#define EAJEMNNNEBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FE7F0)
#define EAJEMNNNEBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE7E0)
#define EAJEMNNNEBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FE990)
#define EAJEMNNNEBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FE8B0)
#define EAJEMNNNEBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FEA60)
#define EAJEMNNNEBM_JAIHBMAEGAA_OFFSET UNITYSDK_OFFSET(0x1E1FE890)
#define EAJEMNNNEBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FE7A0)
#define EAJEMNNNEBM_LAFAPKGJNHO_OFFSET UNITYSDK_OFFSET(0x1E1FE8A0)
#define EAJEMNNNEBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FED20)
#define EAJEMNNNEBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FECE0)
#define EAJEMNNNEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE7D0)
#define EAJEMNNNEBM_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E1FE880)
#define EAJEMNNNEBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FEA90)
#define EAJEMNNNEBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FEAF0)

inline static constexpr unsigned int EAJEMNNNEBM_TypeDefinitionIndex = 29740;

	class EAJEMNNNEBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNIPIFDDAAE; // 0x18
		::System::UInt32 CDPJBALHBEN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EAJEMNNNEBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EAJEMNNNEBM*>**)UnitySDK::FromName("", "EAJEMNNNEBM")->GetStaticField(0x17C20);
		}

		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object BFGENNIHOAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAJEMNNNEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJEMNNNEBM*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EAJEMNNNEBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EAJEMNNNEBM*>*(*)())((::PBYTE)hIl2Cpp + EAJEMNNNEBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAJEMNNNEBM* Clone()
		{
			return ((::EAJEMNNNEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::UInt32 JAIHBMAEGAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_JAIHBMAEGAA_OFFSET))(this);
		}

		::System::Void LAFAPKGJNHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_LAFAPKGJNHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAJEMNNNEBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAJEMNNNEBM*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAJEMNNNEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJEMNNNEBM*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAJEMNNNEBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
