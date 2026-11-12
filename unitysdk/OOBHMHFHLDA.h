#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOBHMHFHLDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOBHMHFHLDA_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F19DDD0)
#define OOBHMHFHLDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F19E160)
#define OOBHMHFHLDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19E380)
#define OOBHMHFHLDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F19DD50)
#define OOBHMHFHLDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F19DD20)
#define OOBHMHFHLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19DD10)
#define OOBHMHFHLDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F19DEE0)
#define OOBHMHFHLDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F19DDE0)
#define OOBHMHFHLDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F19E050)
#define OOBHMHFHLDA_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F19DDC0)
#define OOBHMHFHLDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F19DCA0)
#define OOBHMHFHLDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F19E220)
#define OOBHMHFHLDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F19E1F0)
#define OOBHMHFHLDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F19DD00)
#define OOBHMHFHLDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F19E080)
#define OOBHMHFHLDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F19E0E0)

inline static constexpr unsigned int OOBHMHFHLDA_TypeDefinitionIndex = 30390;

	class OOBHMHFHLDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OOBHMHFHLDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOBHMHFHLDA*>**)UnitySDK::FromName("", "OOBHMHFHLDA")->GetStaticField(0x27930);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOBHMHFHLDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBHMHFHLDA*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBHMHFHLDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOBHMHFHLDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOBHMHFHLDA*>*(*)())((::PBYTE)hIl2Cpp + OOBHMHFHLDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOBHMHFHLDA* Clone()
		{
			return ((::OOBHMHFHLDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOBHMHFHLDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOBHMHFHLDA*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOBHMHFHLDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBHMHFHLDA*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOBHMHFHLDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
