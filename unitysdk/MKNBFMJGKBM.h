#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKNBFMJGKBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKNBFMJGKBM_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1EA5C0E0)
#define MKNBFMJGKBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA5C430)
#define MKNBFMJGKBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C700)
#define MKNBFMJGKBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA5C080)
#define MKNBFMJGKBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA5C050)
#define MKNBFMJGKBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C040)
#define MKNBFMJGKBM_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1EA5C0F0)
#define MKNBFMJGKBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA5C1F0)
#define MKNBFMJGKBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA5C110)
#define MKNBFMJGKBM_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1EA5C100)
#define MKNBFMJGKBM_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1EA5C0D0)
#define MKNBFMJGKBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA5C2C0)
#define MKNBFMJGKBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA5C000)
#define MKNBFMJGKBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA5C580)
#define MKNBFMJGKBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA5C540)
#define MKNBFMJGKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C030)
#define MKNBFMJGKBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA5C2F0)
#define MKNBFMJGKBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA5C350)

inline static constexpr unsigned int MKNBFMJGKBM_TypeDefinitionIndex = 32984;

	class MKNBFMJGKBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MKNBFMJGKBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKNBFMJGKBM*>**)UnitySDK::FromName("", "MKNBFMJGKBM")->GetStaticField(0x57430);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKNBFMJGKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNBFMJGKBM*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNBFMJGKBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKNBFMJGKBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKNBFMJGKBM*>*(*)())((::PBYTE)hIl2Cpp + MKNBFMJGKBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKNBFMJGKBM* Clone()
		{
			return ((::MKNBFMJGKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKNBFMJGKBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKNBFMJGKBM*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKNBFMJGKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNBFMJGKBM*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKNBFMJGKBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
