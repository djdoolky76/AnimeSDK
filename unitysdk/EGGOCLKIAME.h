#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGGOCLKIAME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGGOCLKIAME_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E2664C0)
#define EGGOCLKIAME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E266830)
#define EGGOCLKIAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E266A50)
#define EGGOCLKIAME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E266480)
#define EGGOCLKIAME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E266450)
#define EGGOCLKIAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E266440)
#define EGGOCLKIAME_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E2664D0)
#define EGGOCLKIAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2665B0)
#define EGGOCLKIAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2664E0)
#define EGGOCLKIAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E266720)
#define EGGOCLKIAME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E266400)
#define EGGOCLKIAME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2668F0)
#define EGGOCLKIAME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2668C0)
#define EGGOCLKIAME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E266430)
#define EGGOCLKIAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E266750)
#define EGGOCLKIAME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2667B0)

inline static constexpr unsigned int EGGOCLKIAME_TypeDefinitionIndex = 32573;

	class EGGOCLKIAME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>**)UnitySDK::FromName("", "EGGOCLKIAME")->GetStaticField(0x47930);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGGOCLKIAME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGGOCLKIAME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>*(*)())((::PBYTE)hIl2Cpp + EGGOCLKIAME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGGOCLKIAME* Clone()
		{
			return ((::EGGOCLKIAME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGGOCLKIAME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGGOCLKIAME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
