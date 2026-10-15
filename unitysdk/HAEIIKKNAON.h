#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAEIIKKNAON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAEIIKKNAON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D54C0)
#define HAEIIKKNAON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D56E0)
#define HAEIIKKNAON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D5110)
#define HAEIIKKNAON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D50E0)
#define HAEIIKKNAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D50D0)
#define HAEIIKKNAON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D5240)
#define HAEIIKKNAON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D5170)
#define HAEIIKKNAON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D53B0)
#define HAEIIKKNAON_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E4D5160)
#define HAEIIKKNAON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D5090)
#define HAEIIKKNAON_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E4D5150)
#define HAEIIKKNAON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D5580)
#define HAEIIKKNAON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D5550)
#define HAEIIKKNAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D50C0)
#define HAEIIKKNAON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D53E0)
#define HAEIIKKNAON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D5440)

inline static constexpr unsigned int HAEIIKKNAON_TypeDefinitionIndex = 27701;

	class HAEIIKKNAON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HAEIIKKNAON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAEIIKKNAON*>**)UnitySDK::FromName("", "HAEIIKKNAON")->GetStaticField(0x24830);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAEIIKKNAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAEIIKKNAON*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAEIIKKNAON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAEIIKKNAON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAEIIKKNAON*>*(*)())((::PBYTE)hIl2Cpp + HAEIIKKNAON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAEIIKKNAON* Clone()
		{
			return ((::HAEIIKKNAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAEIIKKNAON_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAEIIKKNAON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAEIIKKNAON*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAEIIKKNAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAEIIKKNAON*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAEIIKKNAON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
