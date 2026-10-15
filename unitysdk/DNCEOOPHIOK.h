#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNCEOOPHIOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNCEOOPHIOK_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E1C64D0)
#define DNCEOOPHIOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C6830)
#define DNCEOOPHIOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6A50)
#define DNCEOOPHIOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C6480)
#define DNCEOOPHIOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C6450)
#define DNCEOOPHIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6440)
#define DNCEOOPHIOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C65B0)
#define DNCEOOPHIOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C64E0)
#define DNCEOOPHIOK_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E1C64C0)
#define DNCEOOPHIOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C6720)
#define DNCEOOPHIOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C6400)
#define DNCEOOPHIOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C68F0)
#define DNCEOOPHIOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C68C0)
#define DNCEOOPHIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6430)
#define DNCEOOPHIOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C6750)
#define DNCEOOPHIOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C67B0)

inline static constexpr unsigned int DNCEOOPHIOK_TypeDefinitionIndex = 33804;

	class DNCEOOPHIOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DNCEOOPHIOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNCEOOPHIOK*>**)UnitySDK::FromName("", "DNCEOOPHIOK")->GetStaticField(0x36B70);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNCEOOPHIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNCEOOPHIOK*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNCEOOPHIOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNCEOOPHIOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNCEOOPHIOK*>*(*)())((::PBYTE)hIl2Cpp + DNCEOOPHIOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNCEOOPHIOK* Clone()
		{
			return ((::DNCEOOPHIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNCEOOPHIOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNCEOOPHIOK*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNCEOOPHIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNCEOOPHIOK*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNCEOOPHIOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
