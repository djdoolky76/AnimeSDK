#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBEEKFJAHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJBEEKFJAHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5931C0)
#define EJBEEKFJAHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5933E0)
#define EJBEEKFJAHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F592DB0)
#define EJBEEKFJAHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F592D80)
#define EJBEEKFJAHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F592D70)
#define EJBEEKFJAHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F592F40)
#define EJBEEKFJAHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F592E40)
#define EJBEEKFJAHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5930B0)
#define EJBEEKFJAHM_ILBJPBNBHNO_OFFSET UNITYSDK_OFFSET(0x1F592E30)
#define EJBEEKFJAHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F592D00)
#define EJBEEKFJAHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F593280)
#define EJBEEKFJAHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F593250)
#define EJBEEKFJAHM_OJLEEFOPKPO_OFFSET UNITYSDK_OFFSET(0x1F592E20)
#define EJBEEKFJAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F592D60)
#define EJBEEKFJAHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5930E0)
#define EJBEEKFJAHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F593140)

inline static constexpr unsigned int EJBEEKFJAHM_TypeDefinitionIndex = 34273;

	class EJBEEKFJAHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGBHABOLIHO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EJBEEKFJAHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJBEEKFJAHM*>**)UnitySDK::FromName("", "EJBEEKFJAHM")->GetStaticField(0x43BC0);
		}

		// static const ::System::Object IEDEGHNPGIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJBEEKFJAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJBEEKFJAHM*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBEEKFJAHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJBEEKFJAHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJBEEKFJAHM*>*(*)())((::PBYTE)hIl2Cpp + EJBEEKFJAHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJBEEKFJAHM* Clone()
		{
			return ((::EJBEEKFJAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OJLEEFOPKPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_OJLEEFOPKPO_OFFSET))(this);
		}

		::System::Void ILBJPBNBHNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_ILBJPBNBHNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJBEEKFJAHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJBEEKFJAHM*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJBEEKFJAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJBEEKFJAHM*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJBEEKFJAHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
