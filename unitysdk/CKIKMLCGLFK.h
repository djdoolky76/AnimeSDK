#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKIKMLCGLFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKIKMLCGLFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BDE70)
#define CKIKMLCGLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BE090)
#define CKIKMLCGLFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BDAC0)
#define CKIKMLCGLFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BDA90)
#define CKIKMLCGLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BDA80)
#define CKIKMLCGLFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BDBF0)
#define CKIKMLCGLFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BDB20)
#define CKIKMLCGLFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BDD60)
#define CKIKMLCGLFK_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E0BDB10)
#define CKIKMLCGLFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BDA40)
#define CKIKMLCGLFK_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E0BDB00)
#define CKIKMLCGLFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BDF30)
#define CKIKMLCGLFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BDF00)
#define CKIKMLCGLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BDA70)
#define CKIKMLCGLFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BDD90)
#define CKIKMLCGLFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BDDF0)

inline static constexpr unsigned int CKIKMLCGLFK_TypeDefinitionIndex = 29643;

	class CKIKMLCGLFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKIKMLCGLFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKIKMLCGLFK*>**)UnitySDK::FromName("", "CKIKMLCGLFK")->GetStaticField(0x19620);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKIKMLCGLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKIKMLCGLFK*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKIKMLCGLFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKIKMLCGLFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKIKMLCGLFK*>*(*)())((::PBYTE)hIl2Cpp + CKIKMLCGLFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKIKMLCGLFK* Clone()
		{
			return ((::CKIKMLCGLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKIKMLCGLFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKIKMLCGLFK*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKIKMLCGLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKIKMLCGLFK*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKIKMLCGLFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
