#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class KGPIEEKIEME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGPIEEKIEME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F54E4B0)
#define KGPIEEKIEME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F54E7D0)
#define KGPIEEKIEME_CLONE_OFFSET UNITYSDK_OFFSET(0x1F54DF20)
#define KGPIEEKIEME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F54DEB0)
#define KGPIEEKIEME_CTOR_OFFSET UNITYSDK_OFFSET(0x1F54DEA0)
#define KGPIEEKIEME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F54E160)
#define KGPIEEKIEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F54DFE0)
#define KGPIEEKIEME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F54E2E0)
#define KGPIEEKIEME_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1F54DFD0)
#define KGPIEEKIEME_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1F54DFC0)
#define KGPIEEKIEME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F54DE60)
#define KGPIEEKIEME_JKOOJMKNLDI_OFFSET UNITYSDK_OFFSET(0x1F54DFA0)
#define KGPIEEKIEME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F54E610)
#define KGPIEEKIEME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F54E580)
#define KGPIEEKIEME_MOPAMPLLBNL_OFFSET UNITYSDK_OFFSET(0x1F54DFB0)
#define KGPIEEKIEME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F54DE90)
#define KGPIEEKIEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F54E370)
#define KGPIEEKIEME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F54E3D0)

inline static constexpr unsigned int KGPIEEKIEME_TypeDefinitionIndex = 34761;

	class KGPIEEKIEME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x18
		::System::UInt32 GJGCADLMENE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KGPIEEKIEME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGPIEEKIEME*>**)UnitySDK::FromName("", "KGPIEEKIEME")->GetStaticField(0x10720);
		}

		// static const ::System::Object PIBHNBHDJHJ; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGPIEEKIEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGPIEEKIEME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGPIEEKIEME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGPIEEKIEME*>*(*)())((::PBYTE)hIl2Cpp + KGPIEEKIEME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGPIEEKIEME* Clone()
		{
			return ((::KGPIEEKIEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKOOJMKNLDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_JKOOJMKNLDI_OFFSET))(this);
		}

		::System::Void MOPAMPLLBNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGPIEEKIEME_MOPAMPLLBNL_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGPIEEKIEME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGPIEEKIEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGPIEEKIEME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
