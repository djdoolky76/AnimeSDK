#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
class NPGNDMDNPEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPGNDMDNPEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6E680)
#define NPGNDMDNPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E9B0)
#define NPGNDMDNPEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6E000)
#define NPGNDMDNPEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6DF30)
#define NPGNDMDNPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DF20)
#define NPGNDMDNPEM_DNLFGOJCGPF_OFFSET UNITYSDK_OFFSET(0x1EB6E0F0)
#define NPGNDMDNPEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6E270)
#define NPGNDMDNPEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6E100)
#define NPGNDMDNPEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6E540)
#define NPGNDMDNPEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB6DEE0)
#define NPGNDMDNPEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6E7E0)
#define NPGNDMDNPEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6E6E0)
#define NPGNDMDNPEM_OPBDOBDPFFC_OFFSET UNITYSDK_OFFSET(0x1EB6E0E0)
#define NPGNDMDNPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DF10)
#define NPGNDMDNPEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6E590)
#define NPGNDMDNPEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6E5F0)

inline static constexpr unsigned int NPGNDMDNPEM_TypeDefinitionIndex = 32092;

	class NPGNDMDNPEM : public ::System::Object
	{
	public:
		::LOKBAGIKJHB* IMBBAHFLMGN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NPGNDMDNPEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPGNDMDNPEM*>**)UnitySDK::FromName("", "NPGNDMDNPEM")->GetStaticField(0xD8A0);
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

		static ::Google::Protobuf::MessageParser_1<::NPGNDMDNPEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPGNDMDNPEM*>*(*)())((::PBYTE)hIl2Cpp + NPGNDMDNPEM_JJGHOBBFNJD_OFFSET))();
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
