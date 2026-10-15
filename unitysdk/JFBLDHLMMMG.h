#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBLDHLMMMG;
class KKFMGCNDHGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFBLDHLMMMG_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E6F6030)
#define JFBLDHLMMMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F6620)
#define JFBLDHLMMMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F6920)
#define JFBLDHLMMMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F5F90)
#define JFBLDHLMMMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F5F00)
#define JFBLDHLMMMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F5EF0)
#define JFBLDHLMMMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F61C0)
#define JFBLDHLMMMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F6050)
#define JFBLDHLMMMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F6490)
#define JFBLDHLMMMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F5EB0)
#define JFBLDHLMMMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F6750)
#define JFBLDHLMMMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F6680)
#define JFBLDHLMMMG_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E6F6040)
#define JFBLDHLMMMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F5EE0)
#define JFBLDHLMMMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F6530)
#define JFBLDHLMMMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F6590)

inline static constexpr unsigned int JFBLDHLMMMG_TypeDefinitionIndex = 28113;

	class JFBLDHLMMMG : public ::System::Object
	{
	public:
		::KKFMGCNDHGH* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JFBLDHLMMMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFBLDHLMMMG*>**)UnitySDK::FromName("", "JFBLDHLMMMG")->GetStaticField(0x5CBC0);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFBLDHLMMMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBLDHLMMMG*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBLDHLMMMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFBLDHLMMMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFBLDHLMMMG*>*(*)())((::PBYTE)hIl2Cpp + JFBLDHLMMMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFBLDHLMMMG* Clone()
		{
			return ((::JFBLDHLMMMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_CLONE_OFFSET))(this);
		}

		::KKFMGCNDHGH* ANALOEDDDHD()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFBLDHLMMMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFBLDHLMMMG*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFBLDHLMMMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBLDHLMMMG*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFBLDHLMMMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
