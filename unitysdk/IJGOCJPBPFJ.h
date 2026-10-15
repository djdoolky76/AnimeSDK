#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJGOCJPBPFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJGOCJPBPFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6667C0)
#define IJGOCJPBPFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E666A90)
#define IJGOCJPBPFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E666410)
#define IJGOCJPBPFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6663E0)
#define IJGOCJPBPFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6663D0)
#define IJGOCJPBPFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E666580)
#define IJGOCJPBPFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6664A0)
#define IJGOCJPBPFJ_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E666490)
#define IJGOCJPBPFJ_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E666470)
#define IJGOCJPBPFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E666650)
#define IJGOCJPBPFJ_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E666460)
#define IJGOCJPBPFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E666390)
#define IJGOCJPBPFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E666910)
#define IJGOCJPBPFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6668D0)
#define IJGOCJPBPFJ_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E666480)
#define IJGOCJPBPFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6663C0)
#define IJGOCJPBPFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E666680)
#define IJGOCJPBPFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6666E0)

inline static constexpr unsigned int IJGOCJPBPFJ_TypeDefinitionIndex = 31245;

	class IJGOCJPBPFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFFBGDFNCBG; // 0x18
		::System::UInt32 EHCFPHJABDL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IJGOCJPBPFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJGOCJPBPFJ*>**)UnitySDK::FromName("", "IJGOCJPBPFJ")->GetStaticField(0x4F5D0);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJGOCJPBPFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJGOCJPBPFJ*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJGOCJPBPFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJGOCJPBPFJ*>*(*)())((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJGOCJPBPFJ* Clone()
		{
			return ((::IJGOCJPBPFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJGOCJPBPFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJGOCJPBPFJ*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJGOCJPBPFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJGOCJPBPFJ*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
