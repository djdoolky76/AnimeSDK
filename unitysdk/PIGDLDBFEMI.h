#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGDLDBFEMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIGDLDBFEMI_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1F2169E0)
#define PIGDLDBFEMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F216D70)
#define PIGDLDBFEMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F216F90)
#define PIGDLDBFEMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F216960)
#define PIGDLDBFEMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F216930)
#define PIGDLDBFEMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F216920)
#define PIGDLDBFEMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F216AF0)
#define PIGDLDBFEMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2169F0)
#define PIGDLDBFEMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F216C60)
#define PIGDLDBFEMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2168B0)
#define PIGDLDBFEMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F216E30)
#define PIGDLDBFEMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F216E00)
#define PIGDLDBFEMI_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1F2169D0)
#define PIGDLDBFEMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F216910)
#define PIGDLDBFEMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F216C90)
#define PIGDLDBFEMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F216CF0)

inline static constexpr unsigned int PIGDLDBFEMI_TypeDefinitionIndex = 30323;

	class PIGDLDBFEMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIGDLDBFEMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIGDLDBFEMI*>**)UnitySDK::FromName("", "PIGDLDBFEMI")->GetStaticField(0x37EC0);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIGDLDBFEMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGDLDBFEMI*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGDLDBFEMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIGDLDBFEMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIGDLDBFEMI*>*(*)())((::PBYTE)hIl2Cpp + PIGDLDBFEMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIGDLDBFEMI* Clone()
		{
			return ((::PIGDLDBFEMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIGDLDBFEMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIGDLDBFEMI*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIGDLDBFEMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGDLDBFEMI*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIGDLDBFEMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
