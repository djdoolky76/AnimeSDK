#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class DKFJLHHDFKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKFJLHHDFKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D5280)
#define DKFJLHHDFKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D5590)
#define DKFJLHHDFKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D4EC0)
#define DKFJLHHDFKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D4E90)
#define DKFJLHHDFKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4E80)
#define DKFJLHHDFKO_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E1D4F10)
#define DKFJLHHDFKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D5030)
#define DKFJLHHDFKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D4F50)
#define DKFJLHHDFKO_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E1D4F40)
#define DKFJLHHDFKO_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E1D4F20)
#define DKFJLHHDFKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D5100)
#define DKFJLHHDFKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D4E40)
#define DKFJLHHDFKO_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E1D4F30)
#define DKFJLHHDFKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D5410)
#define DKFJLHHDFKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D53D0)
#define DKFJLHHDFKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4E70)
#define DKFJLHHDFKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D5130)
#define DKFJLHHDFKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D5190)

inline static constexpr unsigned int DKFJLHHDFKO_TypeDefinitionIndex = 33417;

	class DKFJLHHDFKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DKFJLHHDFKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKFJLHHDFKO*>**)UnitySDK::FromName("", "DKFJLHHDFKO")->GetStaticField(0x33CC0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKFJLHHDFKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFJLHHDFKO*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKFJLHHDFKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKFJLHHDFKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKFJLHHDFKO*>*(*)())((::PBYTE)hIl2Cpp + DKFJLHHDFKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKFJLHHDFKO* Clone()
		{
			return ((::DKFJLHHDFKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKFJLHHDFKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKFJLHHDFKO*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKFJLHHDFKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFJLHHDFKO*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKFJLHHDFKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
