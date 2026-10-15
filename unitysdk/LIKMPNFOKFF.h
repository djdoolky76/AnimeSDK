#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIKMPNFOKFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIKMPNFOKFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E943340)
#define LIKMPNFOKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E943560)
#define LIKMPNFOKFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E942F90)
#define LIKMPNFOKFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E942F60)
#define LIKMPNFOKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942F50)
#define LIKMPNFOKFF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E942FD0)
#define LIKMPNFOKFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9430C0)
#define LIKMPNFOKFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E942FF0)
#define LIKMPNFOKFF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E942FE0)
#define LIKMPNFOKFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E943230)
#define LIKMPNFOKFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E942F10)
#define LIKMPNFOKFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E943400)
#define LIKMPNFOKFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9433D0)
#define LIKMPNFOKFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E942F40)
#define LIKMPNFOKFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E943260)
#define LIKMPNFOKFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9432C0)

inline static constexpr unsigned int LIKMPNFOKFF_TypeDefinitionIndex = 35115;

	class LIKMPNFOKFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LIKMPNFOKFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIKMPNFOKFF*>**)UnitySDK::FromName("", "LIKMPNFOKFF")->GetStaticField(0x38200);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIKMPNFOKFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIKMPNFOKFF*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKMPNFOKFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIKMPNFOKFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIKMPNFOKFF*>*(*)())((::PBYTE)hIl2Cpp + LIKMPNFOKFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIKMPNFOKFF* Clone()
		{
			return ((::LIKMPNFOKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIKMPNFOKFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIKMPNFOKFF*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIKMPNFOKFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIKMPNFOKFF*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIKMPNFOKFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
