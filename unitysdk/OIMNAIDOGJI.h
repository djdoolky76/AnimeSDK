#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMNAIDOGJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIMNAIDOGJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE47E30)
#define OIMNAIDOGJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE48100)
#define OIMNAIDOGJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE47A80)
#define OIMNAIDOGJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE47A50)
#define OIMNAIDOGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE47A40)
#define OIMNAIDOGJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE47BF0)
#define OIMNAIDOGJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE47B10)
#define OIMNAIDOGJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE47B00)
#define OIMNAIDOGJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE47CC0)
#define OIMNAIDOGJI_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DE47AE0)
#define OIMNAIDOGJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE47A00)
#define OIMNAIDOGJI_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DE47AD0)
#define OIMNAIDOGJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE47F80)
#define OIMNAIDOGJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE47F40)
#define OIMNAIDOGJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE47AF0)
#define OIMNAIDOGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE47A30)
#define OIMNAIDOGJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE47CF0)
#define OIMNAIDOGJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE47D50)

inline static constexpr unsigned int OIMNAIDOGJI_TypeDefinitionIndex = 25978;

	class OIMNAIDOGJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OIMNAIDOGJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIMNAIDOGJI*>**)UnitySDK::FromName("", "OIMNAIDOGJI")->GetStaticField(0x1B440);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIMNAIDOGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMNAIDOGJI*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMNAIDOGJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIMNAIDOGJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIMNAIDOGJI*>*(*)())((::PBYTE)hIl2Cpp + OIMNAIDOGJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIMNAIDOGJI* Clone()
		{
			return ((::OIMNAIDOGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIMNAIDOGJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIMNAIDOGJI*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIMNAIDOGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMNAIDOGJI*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIMNAIDOGJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
