#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAEDLFEEGIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAEDLFEEGIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E120100)
#define DAEDLFEEGIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E120320)
#define DAEDLFEEGIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11FCF0)
#define DAEDLFEEGIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11FCC0)
#define DAEDLFEEGIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11FCB0)
#define DAEDLFEEGIB_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1E11FD70)
#define DAEDLFEEGIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11FE80)
#define DAEDLFEEGIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11FD80)
#define DAEDLFEEGIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11FFF0)
#define DAEDLFEEGIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11FC40)
#define DAEDLFEEGIB_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1E11FD60)
#define DAEDLFEEGIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1201C0)
#define DAEDLFEEGIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E120190)
#define DAEDLFEEGIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11FCA0)
#define DAEDLFEEGIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E120020)
#define DAEDLFEEGIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E120080)

inline static constexpr unsigned int DAEDLFEEGIB_TypeDefinitionIndex = 34413;

	class DAEDLFEEGIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHDGEOFBHGM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DAEDLFEEGIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAEDLFEEGIB*>**)UnitySDK::FromName("", "DAEDLFEEGIB")->GetStaticField(0x21270);
		}

		// static const ::System::Object EGEDNCDAKPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAEDLFEEGIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAEDLFEEGIB*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAEDLFEEGIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAEDLFEEGIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAEDLFEEGIB*>*(*)())((::PBYTE)hIl2Cpp + DAEDLFEEGIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAEDLFEEGIB* Clone()
		{
			return ((::DAEDLFEEGIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAEDLFEEGIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAEDLFEEGIB*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAEDLFEEGIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAEDLFEEGIB*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAEDLFEEGIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
