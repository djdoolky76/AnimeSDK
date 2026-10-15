#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNIMFMFKLH;
class ELEMFBMOMMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELEMFBMOMMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A0D70)
#define ELEMFBMOMMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1060)
#define ELEMFBMOMMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A0680)
#define ELEMFBMOMMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A05F0)
#define ELEMFBMOMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A05E0)
#define ELEMFBMOMMM_EPGLLNABAOC_OFFSET UNITYSDK_OFFSET(0x1E2A0760)
#define ELEMFBMOMMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A0910)
#define ELEMFBMOMMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A0770)
#define ELEMFBMOMMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A0BE0)
#define ELEMFBMOMMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A0570)
#define ELEMFBMOMMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A0E90)
#define ELEMFBMOMMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A0DD0)
#define ELEMFBMOMMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A05D0)
#define ELEMFBMOMMM_PFPFHDLIKCC_OFFSET UNITYSDK_OFFSET(0x1E2A0750)
#define ELEMFBMOMMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A0C80)
#define ELEMFBMOMMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A0CE0)

inline static constexpr unsigned int ELEMFBMOMMM_TypeDefinitionIndex = 28331;

	class ELEMFBMOMMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BGNIMFMFKLH* DEMMLMGBIIK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELEMFBMOMMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELEMFBMOMMM*>**)UnitySDK::FromName("", "ELEMFBMOMMM")->GetStaticField(0x51200);
		}

		// static const ::System::Object DHIPINEAKKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELEMFBMOMMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELEMFBMOMMM*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELEMFBMOMMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELEMFBMOMMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELEMFBMOMMM*>*(*)())((::PBYTE)hIl2Cpp + ELEMFBMOMMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELEMFBMOMMM* Clone()
		{
			return ((::ELEMFBMOMMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_CLONE_OFFSET))(this);
		}

		::BGNIMFMFKLH* PFPFHDLIKCC()
		{
			return ((::BGNIMFMFKLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_PFPFHDLIKCC_OFFSET))(this);
		}

		::System::Void EPGLLNABAOC(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_EPGLLNABAOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELEMFBMOMMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELEMFBMOMMM*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELEMFBMOMMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELEMFBMOMMM*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELEMFBMOMMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
