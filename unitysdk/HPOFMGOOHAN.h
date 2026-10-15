#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOFMGOOHAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPOFMGOOHAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FE400)
#define HPOFMGOOHAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE620)
#define HPOFMGOOHAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FE050)
#define HPOFMGOOHAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FE020)
#define HPOFMGOOHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE010)
#define HPOFMGOOHAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FE180)
#define HPOFMGOOHAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FE0B0)
#define HPOFMGOOHAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FE2F0)
#define HPOFMGOOHAN_GLIICGEIPBG_OFFSET UNITYSDK_OFFSET(0x1E5FE0A0)
#define HPOFMGOOHAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FDFD0)
#define HPOFMGOOHAN_MBDNIJBBOJM_OFFSET UNITYSDK_OFFSET(0x1E5FE090)
#define HPOFMGOOHAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FE4C0)
#define HPOFMGOOHAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FE490)
#define HPOFMGOOHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE000)
#define HPOFMGOOHAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FE320)
#define HPOFMGOOHAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FE380)

inline static constexpr unsigned int HPOFMGOOHAN_TypeDefinitionIndex = 32260;

	class HPOFMGOOHAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BMIPGCBNFNP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPOFMGOOHAN")->GetStaticField(0x524F0);
		}

		// static const ::System::Object CAECONCHAID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPOFMGOOHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPOFMGOOHAN*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPOFMGOOHAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPOFMGOOHAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPOFMGOOHAN* Clone()
		{
			return ((::HPOFMGOOHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDNIJBBOJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_MBDNIJBBOJM_OFFSET))(this);
		}

		::System::Void GLIICGEIPBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_GLIICGEIPBG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPOFMGOOHAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPOFMGOOHAN*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPOFMGOOHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPOFMGOOHAN*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPOFMGOOHAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
