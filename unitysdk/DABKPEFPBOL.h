#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABKPEFPBOL;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DABKPEFPBOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11DC30)
#define DABKPEFPBOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11DF80)
#define DABKPEFPBOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11D600)
#define DABKPEFPBOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11D580)
#define DABKPEFPBOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11D530)
#define DABKPEFPBOL_ENHMMEFPANH_OFFSET UNITYSDK_OFFSET(0x1E11D6B0)
#define DABKPEFPBOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11D870)
#define DABKPEFPBOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11D730)
#define DABKPEFPBOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11D980)
#define DABKPEFPBOL_IMPOKAMNAKH_OFFSET UNITYSDK_OFFSET(0x1E11D6D0)
#define DABKPEFPBOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11D4C0)
#define DABKPEFPBOL_KIBFNPKMICO_OFFSET UNITYSDK_OFFSET(0x1E11D6C0)
#define DABKPEFPBOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11DDD0)
#define DABKPEFPBOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11DD80)
#define DABKPEFPBOL_ODJPEGHILAD_OFFSET UNITYSDK_OFFSET(0x1E11D6E0)
#define DABKPEFPBOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11D520)
#define DABKPEFPBOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11DAB0)
#define DABKPEFPBOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11DB10)

inline static constexpr unsigned int DABKPEFPBOL_TypeDefinitionIndex = 28510;

	class DABKPEFPBOL : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* GOOGMLPDLIP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IJLCGBPKMBJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DABKPEFPBOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DABKPEFPBOL*>**)UnitySDK::FromName("", "DABKPEFPBOL")->GetStaticField(0x20CD0);
		}

		// static const ::System::Object MKPNOLAEIDJ; // 0x0
		// static const ::System::Object KKCKLIFIBNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DABKPEFPBOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABKPEFPBOL*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABKPEFPBOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DABKPEFPBOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DABKPEFPBOL*>*(*)())((::PBYTE)hIl2Cpp + DABKPEFPBOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DABKPEFPBOL* Clone()
		{
			return ((::DABKPEFPBOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENHMMEFPANH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_ENHMMEFPANH_OFFSET))(this);
		}

		::System::Void KIBFNPKMICO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DABKPEFPBOL_KIBFNPKMICO_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* IMPOKAMNAKH()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_IMPOKAMNAKH_OFFSET))(this);
		}

		::System::Void ODJPEGHILAD(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_ODJPEGHILAD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DABKPEFPBOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DABKPEFPBOL*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DABKPEFPBOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABKPEFPBOL*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DABKPEFPBOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
