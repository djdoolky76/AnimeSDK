#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBFNLJFCAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGBFNLJFCAA_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E9EFB90)
#define MGBFNLJFCAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EFEF0)
#define MGBFNLJFCAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F0110)
#define MGBFNLJFCAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EFB40)
#define MGBFNLJFCAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EFB10)
#define MGBFNLJFCAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EFB00)
#define MGBFNLJFCAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EFC70)
#define MGBFNLJFCAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EFBA0)
#define MGBFNLJFCAA_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E9EFB80)
#define MGBFNLJFCAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EFDE0)
#define MGBFNLJFCAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EFAC0)
#define MGBFNLJFCAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EFFB0)
#define MGBFNLJFCAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EFF80)
#define MGBFNLJFCAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EFAF0)
#define MGBFNLJFCAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EFE10)
#define MGBFNLJFCAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EFE70)

inline static constexpr unsigned int MGBFNLJFCAA_TypeDefinitionIndex = 32704;

	class MGBFNLJFCAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MGBFNLJFCAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGBFNLJFCAA*>**)UnitySDK::FromName("", "MGBFNLJFCAA")->GetStaticField(0x4F1C0);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGBFNLJFCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBFNLJFCAA*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBFNLJFCAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGBFNLJFCAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGBFNLJFCAA*>*(*)())((::PBYTE)hIl2Cpp + MGBFNLJFCAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGBFNLJFCAA* Clone()
		{
			return ((::MGBFNLJFCAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGBFNLJFCAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGBFNLJFCAA*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGBFNLJFCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBFNLJFCAA*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGBFNLJFCAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
