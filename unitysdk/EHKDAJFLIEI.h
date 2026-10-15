#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHKDAJFLIEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHKDAJFLIEI_AEDADKEHIDN_OFFSET UNITYSDK_OFFSET(0x1E2A0CC0)
#define EHKDAJFLIEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A1030)
#define EHKDAJFLIEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1300)
#define EHKDAJFLIEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A0C30)
#define EHKDAJFLIEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0C00)
#define EHKDAJFLIEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0BF0)
#define EHKDAJFLIEI_DFMPNMPPAFO_OFFSET UNITYSDK_OFFSET(0x1E2A0CA0)
#define EHKDAJFLIEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A0DF0)
#define EHKDAJFLIEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A0CE0)
#define EHKDAJFLIEI_FEAEDOJCGIJ_OFFSET UNITYSDK_OFFSET(0x1E2A0CD0)
#define EHKDAJFLIEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A0EC0)
#define EHKDAJFLIEI_GIFGKJEDHGO_OFFSET UNITYSDK_OFFSET(0x1E2A0CB0)
#define EHKDAJFLIEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A0B80)
#define EHKDAJFLIEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A1180)
#define EHKDAJFLIEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A1140)
#define EHKDAJFLIEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0BE0)
#define EHKDAJFLIEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A0EF0)
#define EHKDAJFLIEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A0F50)

inline static constexpr unsigned int EHKDAJFLIEI_TypeDefinitionIndex = 32918;

	class EHKDAJFLIEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MMJLKHDGKNI; // 0x18
		::System::UInt32 CBFKOHEJNJJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EHKDAJFLIEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EHKDAJFLIEI*>**)UnitySDK::FromName("", "EHKDAJFLIEI")->GetStaticField(0x48800);
		}

		// static const ::System::Object KHGFOJEHAPF; // 0x0
		// static const ::System::Object EDPFMCBFGAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHKDAJFLIEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKDAJFLIEI*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHKDAJFLIEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EHKDAJFLIEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EHKDAJFLIEI*>*(*)())((::PBYTE)hIl2Cpp + EHKDAJFLIEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHKDAJFLIEI* Clone()
		{
			return ((::EHKDAJFLIEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 DFMPNMPPAFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_DFMPNMPPAFO_OFFSET))(this);
		}

		::System::Void GIFGKJEDHGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_GIFGKJEDHGO_OFFSET))(this, a1);
		}

		::System::UInt32 AEDADKEHIDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_AEDADKEHIDN_OFFSET))(this);
		}

		::System::Void FEAEDOJCGIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_FEAEDOJCGIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHKDAJFLIEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHKDAJFLIEI*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHKDAJFLIEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKDAJFLIEI*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHKDAJFLIEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
