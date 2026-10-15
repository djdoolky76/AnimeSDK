#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANCNGIAAHKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4FBE40)
#define ANCNGIAAHKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC060)
#define ANCNGIAAHKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4FBA90)
#define ANCNGIAAHKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4FBA60)
#define ANCNGIAAHKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FBA50)
#define ANCNGIAAHKP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E4FBAD0)
#define ANCNGIAAHKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4FBBC0)
#define ANCNGIAAHKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4FBAF0)
#define ANCNGIAAHKP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E4FBAE0)
#define ANCNGIAAHKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4FBD30)
#define ANCNGIAAHKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4FBA10)
#define ANCNGIAAHKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4FBF00)
#define ANCNGIAAHKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4FBED0)
#define ANCNGIAAHKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4FBA40)
#define ANCNGIAAHKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4FBD60)
#define ANCNGIAAHKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4FBDC0)

inline static constexpr unsigned int ANCNGIAAHKP_TypeDefinitionIndex = 28186;

	class ANCNGIAAHKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ANCNGIAAHKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANCNGIAAHKP*>**)UnitySDK::FromName("", "ANCNGIAAHKP")->GetStaticField(0x14840);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANCNGIAAHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANCNGIAAHKP*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCNGIAAHKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANCNGIAAHKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANCNGIAAHKP*>*(*)())((::PBYTE)hIl2Cpp + ANCNGIAAHKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANCNGIAAHKP* Clone()
		{
			return ((::ANCNGIAAHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANCNGIAAHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANCNGIAAHKP*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANCNGIAAHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANCNGIAAHKP*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANCNGIAAHKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
