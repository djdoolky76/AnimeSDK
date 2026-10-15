#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
class NPGNDMDNPEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPGNDMDNPEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB9BCB0)
#define NPGNDMDNPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9BFE0)
#define NPGNDMDNPEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB9B630)
#define NPGNDMDNPEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB9B560)
#define NPGNDMDNPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9B550)
#define NPGNDMDNPEM_DNLFGOJCGPF_OFFSET UNITYSDK_OFFSET(0x1EB9B720)
#define NPGNDMDNPEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB9B8A0)
#define NPGNDMDNPEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB9B730)
#define NPGNDMDNPEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB9BB70)
#define NPGNDMDNPEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB9B510)
#define NPGNDMDNPEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB9BE10)
#define NPGNDMDNPEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB9BD10)
#define NPGNDMDNPEM_OPBDOBDPFFC_OFFSET UNITYSDK_OFFSET(0x1EB9B710)
#define NPGNDMDNPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB9B540)
#define NPGNDMDNPEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB9BBC0)
#define NPGNDMDNPEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB9BC20)

inline static constexpr unsigned int NPGNDMDNPEM_TypeDefinitionIndex = 32092;

	class NPGNDMDNPEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LOKBAGIKJHB* IMBBAHFLMGN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPGNDMDNPEM")->GetStaticField(0xE660);
		}

		// static const ::System::Object HIPHCCAKDHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPGNDMDNPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPGNDMDNPEM*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGNDMDNPEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPGNDMDNPEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPGNDMDNPEM* Clone()
		{
			return ((::NPGNDMDNPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_CLONE_OFFSET))(this);
		}

		::LOKBAGIKJHB* OPBDOBDPFFC()
		{
			return ((::LOKBAGIKJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_OPBDOBDPFFC_OFFSET))(this);
		}

		::System::Void DNLFGOJCGPF(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_DNLFGOJCGPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPGNDMDNPEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPGNDMDNPEM*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPGNDMDNPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPGNDMDNPEM*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPGNDMDNPEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
