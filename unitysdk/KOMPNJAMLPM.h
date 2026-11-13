#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOMPNJAMLPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOMPNJAMLPM_BANFGFHOLJK_OFFSET UNITYSDK_OFFSET(0x205B2D80)
#define KOMPNJAMLPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205B3170)
#define KOMPNJAMLPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x205B34C0)
#define KOMPNJAMLPM_CLONE_OFFSET UNITYSDK_OFFSET(0x205B2CE0)
#define KOMPNJAMLPM_CPLDCCJBDOH_OFFSET UNITYSDK_OFFSET(0x205B2D90)
#define KOMPNJAMLPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205B2C70)
#define KOMPNJAMLPM_CTOR_OFFSET UNITYSDK_OFFSET(0x205B2C40)
#define KOMPNJAMLPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205B2EE0)
#define KOMPNJAMLPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x205B2DB0)
#define KOMPNJAMLPM_FIAGHGMGADD_OFFSET UNITYSDK_OFFSET(0x205B2DA0)
#define KOMPNJAMLPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205B2FD0)
#define KOMPNJAMLPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205B2BD0)
#define KOMPNJAMLPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205B32F0)
#define KOMPNJAMLPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205B32A0)
#define KOMPNJAMLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205B2C30)
#define KOMPNJAMLPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205B3010)
#define KOMPNJAMLPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x205B3070)

inline static constexpr unsigned int KOMPNJAMLPM_TypeDefinitionIndex = 29894;

	class KOMPNJAMLPM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* KKMPPDOHDJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AGFCLKGGKPH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KOMPNJAMLPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOMPNJAMLPM*>**)UnitySDK::FromName("", "KOMPNJAMLPM")->GetStaticField(0x21350);
		}

		static ::System::Object** StaticGet_GAAHCMPBFNN()
		{
			return (::System::Object**)UnitySDK::FromName("", "KOMPNJAMLPM")->GetStaticField(0x21358);
		}

		// static const ::System::Object KLJDDDEJBMP; // 0x0
		// static const ::System::Object GLCGHPHKLFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOMPNJAMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMPNJAMLPM*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOMPNJAMLPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOMPNJAMLPM*>*(*)())((::PBYTE)hIl2Cpp + KOMPNJAMLPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOMPNJAMLPM* Clone()
		{
			return ((::KOMPNJAMLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* BANFGFHOLJK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_BANFGFHOLJK_OFFSET))(this);
		}

		::System::UInt32 CPLDCCJBDOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CPLDCCJBDOH_OFFSET))(this);
		}

		::System::Void FIAGHGMGADD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_FIAGHGMGADD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOMPNJAMLPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOMPNJAMLPM*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOMPNJAMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMPNJAMLPM*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOMPNJAMLPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
