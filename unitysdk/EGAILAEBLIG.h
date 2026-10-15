#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGAILAEBLIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGAILAEBLIG_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E290F40)
#define EGAILAEBLIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2912A0)
#define EGAILAEBLIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2914C0)
#define EGAILAEBLIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E290EF0)
#define EGAILAEBLIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E290EC0)
#define EGAILAEBLIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E290EB0)
#define EGAILAEBLIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E291020)
#define EGAILAEBLIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E290F50)
#define EGAILAEBLIG_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E290F30)
#define EGAILAEBLIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E291190)
#define EGAILAEBLIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E290E70)
#define EGAILAEBLIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E291360)
#define EGAILAEBLIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E291330)
#define EGAILAEBLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E290EA0)
#define EGAILAEBLIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2911C0)
#define EGAILAEBLIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E291220)

inline static constexpr unsigned int EGAILAEBLIG_TypeDefinitionIndex = 33425;

	class EGAILAEBLIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EGAILAEBLIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGAILAEBLIG*>**)UnitySDK::FromName("", "EGAILAEBLIG")->GetStaticField(0x456E0);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGAILAEBLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGAILAEBLIG*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGAILAEBLIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGAILAEBLIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGAILAEBLIG*>*(*)())((::PBYTE)hIl2Cpp + EGAILAEBLIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGAILAEBLIG* Clone()
		{
			return ((::EGAILAEBLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGAILAEBLIG_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGAILAEBLIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGAILAEBLIG*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAILAEBLIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGAILAEBLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGAILAEBLIG*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGAILAEBLIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
