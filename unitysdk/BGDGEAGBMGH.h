#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDGEAGBMGH;
class EAJEMNNNEBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGDGEAGBMGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA0D780)
#define BGDGEAGBMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0D9F0)
#define BGDGEAGBMGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA0D140)
#define BGDGEAGBMGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA0D0C0)
#define BGDGEAGBMGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0D0B0)
#define BGDGEAGBMGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA0D360)
#define BGDGEAGBMGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA0D1F0)
#define BGDGEAGBMGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA0D630)
#define BGDGEAGBMGH_IGCAEOGCAAB_OFFSET UNITYSDK_OFFSET(0x1FA0D1E0)
#define BGDGEAGBMGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA0D070)
#define BGDGEAGBMGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA0D870)
#define BGDGEAGBMGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA0D7E0)
#define BGDGEAGBMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA0D0A0)
#define BGDGEAGBMGH_PEMJNFLOALD_OFFSET UNITYSDK_OFFSET(0x1FA0D1D0)
#define BGDGEAGBMGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA0D690)
#define BGDGEAGBMGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA0D6F0)

inline static constexpr unsigned int BGDGEAGBMGH_TypeDefinitionIndex = 30658;

	class BGDGEAGBMGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EAJEMNNNEBM* HLFCNECGLBK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGDGEAGBMGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGDGEAGBMGH*>**)UnitySDK::FromName("", "BGDGEAGBMGH")->GetStaticField(0x4D080);
		}

		// static const ::System::Object DBPKONJHEJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGDGEAGBMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGDGEAGBMGH*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGDGEAGBMGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGDGEAGBMGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGDGEAGBMGH*>*(*)())((::PBYTE)hIl2Cpp + BGDGEAGBMGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGDGEAGBMGH* Clone()
		{
			return ((::BGDGEAGBMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_CLONE_OFFSET))(this);
		}

		::EAJEMNNNEBM* PEMJNFLOALD()
		{
			return ((::EAJEMNNNEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_PEMJNFLOALD_OFFSET))(this);
		}

		::System::Void IGCAEOGCAAB(::EAJEMNNNEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJEMNNNEBM*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_IGCAEOGCAAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGDGEAGBMGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGDGEAGBMGH*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGDGEAGBMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGDGEAGBMGH*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGDGEAGBMGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
