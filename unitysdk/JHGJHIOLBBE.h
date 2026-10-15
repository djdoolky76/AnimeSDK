#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
class JHGJHIOLBBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHGJHIOLBBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E717AC0)
#define JHGJHIOLBBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E717DA0)
#define JHGJHIOLBBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7174A0)
#define JHGJHIOLBBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E717430)
#define JHGJHIOLBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E717420)
#define JHGJHIOLBBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7176B0)
#define JHGJHIOLBBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E717540)
#define JHGJHIOLBBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E717980)
#define JHGJHIOLBBE_HGKEAJLMLKN_OFFSET UNITYSDK_OFFSET(0x1E717520)
#define JHGJHIOLBBE_JIOJFMGAOHG_OFFSET UNITYSDK_OFFSET(0x1E717530)
#define JHGJHIOLBBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7173E0)
#define JHGJHIOLBBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E717BD0)
#define JHGJHIOLBBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E717B20)
#define JHGJHIOLBBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E717410)
#define JHGJHIOLBBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7179D0)
#define JHGJHIOLBBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E717A30)

inline static constexpr unsigned int JHGJHIOLBBE_TypeDefinitionIndex = 30535;

	class JHGJHIOLBBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FHEGNOPNICH* EHJBJLHIJME; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JHGJHIOLBBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHGJHIOLBBE*>**)UnitySDK::FromName("", "JHGJHIOLBBE")->GetStaticField(0x5F000);
		}

		// static const ::System::Object MABJPMGDBHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHGJHIOLBBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHGJHIOLBBE*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHGJHIOLBBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHGJHIOLBBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHGJHIOLBBE*>*(*)())((::PBYTE)hIl2Cpp + JHGJHIOLBBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHGJHIOLBBE* Clone()
		{
			return ((::JHGJHIOLBBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_CLONE_OFFSET))(this);
		}

		::FHEGNOPNICH* HGKEAJLMLKN()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_HGKEAJLMLKN_OFFSET))(this);
		}

		::System::Void JIOJFMGAOHG(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_JIOJFMGAOHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHGJHIOLBBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHGJHIOLBBE*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHGJHIOLBBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHGJHIOLBBE*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHGJHIOLBBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
