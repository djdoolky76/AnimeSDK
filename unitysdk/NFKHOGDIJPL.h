#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFKHOGDIJPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFKHOGDIJPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB03F90)
#define NFKHOGDIJPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB04310)
#define NFKHOGDIJPL_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1EB03BC0)
#define NFKHOGDIJPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB03B70)
#define NFKHOGDIJPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB03B30)
#define NFKHOGDIJPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB03B20)
#define NFKHOGDIJPL_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1EB03BF0)
#define NFKHOGDIJPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB03D00)
#define NFKHOGDIJPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB03C20)
#define NFKHOGDIJPL_FBECANPNIFC_OFFSET UNITYSDK_OFFSET(0x1EB03C00)
#define NFKHOGDIJPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB03DD0)
#define NFKHOGDIJPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB03AE0)
#define NFKHOGDIJPL_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1EB03BE0)
#define NFKHOGDIJPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB04170)
#define NFKHOGDIJPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB04120)
#define NFKHOGDIJPL_PBIMCMLNMMB_OFFSET UNITYSDK_OFFSET(0x1EB03C10)
#define NFKHOGDIJPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB03B10)
#define NFKHOGDIJPL_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1EB03BD0)
#define NFKHOGDIJPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB03E00)
#define NFKHOGDIJPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB03E60)

inline static constexpr unsigned int NFKHOGDIJPL_TypeDefinitionIndex = 29754;

	class NFKHOGDIJPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNIPIFDDAAE; // 0x18
		::System::UInt32 PHDGEOFBHGM; // 0x1C
		::System::UInt32 JHEGOFEIGDG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFKHOGDIJPL")->GetStaticField(0x5E990);
		}

		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object EGEDNCDAKPM; // 0x0
		// static const ::System::Object JDPGOOPJLIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFKHOGDIJPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFKHOGDIJPL*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFKHOGDIJPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFKHOGDIJPL* Clone()
		{
			return ((::NFKHOGDIJPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::UInt32 FBECANPNIFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_FBECANPNIFC_OFFSET))(this);
		}

		::System::Void PBIMCMLNMMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_PBIMCMLNMMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFKHOGDIJPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFKHOGDIJPL*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFKHOGDIJPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFKHOGDIJPL*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFKHOGDIJPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
