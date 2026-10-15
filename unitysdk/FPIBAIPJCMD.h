#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPIBAIPJCMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPIBAIPJCMD_AMLIFIFMLMK_OFFSET UNITYSDK_OFFSET(0x1E40A6C0)
#define FPIBAIPJCMD_BMKMGLKIKMK_OFFSET UNITYSDK_OFFSET(0x1E40A680)
#define FPIBAIPJCMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40AAA0)
#define FPIBAIPJCMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40ADB0)
#define FPIBAIPJCMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40A620)
#define FPIBAIPJCMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40A5E0)
#define FPIBAIPJCMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40A5D0)
#define FPIBAIPJCMD_DAPDMLHGCFJ_OFFSET UNITYSDK_OFFSET(0x1E40A670)
#define FPIBAIPJCMD_DDCLKHNJHHN_OFFSET UNITYSDK_OFFSET(0x1E40A6B0)
#define FPIBAIPJCMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40A7C0)
#define FPIBAIPJCMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40A6D0)
#define FPIBAIPJCMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40A8A0)
#define FPIBAIPJCMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40A590)
#define FPIBAIPJCMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40AC10)
#define FPIBAIPJCMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40ABC0)
#define FPIBAIPJCMD_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E40A6A0)
#define FPIBAIPJCMD_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E40A690)
#define FPIBAIPJCMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40A5C0)
#define FPIBAIPJCMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40A8D0)
#define FPIBAIPJCMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40A930)

inline static constexpr unsigned int FPIBAIPJCMD_TypeDefinitionIndex = 29767;

	class FPIBAIPJCMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		::System::UInt32 OLLHBHENKHN; // 0x1C
		::System::Boolean PLACLHGPBNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPIBAIPJCMD")->GetStaticField(0x5A0A0);
		}

		// static const ::System::Object DOIGPKGEKFB; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object KNGCCLCIOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPIBAIPJCMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPIBAIPJCMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPIBAIPJCMD* Clone()
		{
			return ((::FPIBAIPJCMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CLONE_OFFSET))(this);
		}

		::System::Boolean DAPDMLHGCFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_DAPDMLHGCFJ_OFFSET))(this);
		}

		::System::Void BMKMGLKIKMK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_BMKMGLKIKMK_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 DDCLKHNJHHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_DDCLKHNJHHN_OFFSET))(this);
		}

		::System::Void AMLIFIFMLMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_AMLIFIFMLMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPIBAIPJCMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPIBAIPJCMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
