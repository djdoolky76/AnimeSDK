#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHNIMLCODA.h"
#include "unitysdk/System/Object.h"
class FJKMGCKMNNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJKMGCKMNNA_AGDAPIPKFHP_OFFSET UNITYSDK_OFFSET(0x1E3A6930)
#define FJKMGCKMNNA_AIONILPGDFG_OFFSET UNITYSDK_OFFSET(0x1E3A6900)
#define FJKMGCKMNNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A6CA0)
#define FJKMGCKMNNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A6FB0)
#define FJKMGCKMNNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A6890)
#define FJKMGCKMNNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A6860)
#define FJKMGCKMNNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A6850)
#define FJKMGCKMNNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A6A50)
#define FJKMGCKMNNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A6940)
#define FJKMGCKMNNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A6B20)
#define FJKMGCKMNNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A67E0)
#define FJKMGCKMNNA_JOBCMEEBJNM_OFFSET UNITYSDK_OFFSET(0x1E3A6920)
#define FJKMGCKMNNA_KBLGHGFHJIM_OFFSET UNITYSDK_OFFSET(0x1E3A6910)
#define FJKMGCKMNNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A6E30)
#define FJKMGCKMNNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A6DF0)
#define FJKMGCKMNNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A6840)
#define FJKMGCKMNNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A6B50)
#define FJKMGCKMNNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A6BB0)

inline static constexpr unsigned int FJKMGCKMNNA_TypeDefinitionIndex = 28261;

	class FJKMGCKMNNA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MOHNIMLCODA OHFNMGCGAGG; // 0x18
		::System::UInt32 INCBAOBEALJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJKMGCKMNNA")->GetStaticField(0x60D40);
		}

		// static const ::System::Object EDHJDCGBECJ; // 0x0
		// static const ::System::Object GEJMLLDJCKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKMGCKMNNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJKMGCKMNNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJKMGCKMNNA* Clone()
		{
			return ((::FJKMGCKMNNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_CLONE_OFFSET))(this);
		}

		::MOHNIMLCODA AIONILPGDFG()
		{
			return ((::MOHNIMLCODA(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_AIONILPGDFG_OFFSET))(this);
		}

		::System::Void KBLGHGFHJIM(::MOHNIMLCODA a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOHNIMLCODA))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_KBLGHGFHJIM_OFFSET))(this, a1);
		}

		::System::UInt32 JOBCMEEBJNM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_JOBCMEEBJNM_OFFSET))(this);
		}

		::System::Void AGDAPIPKFHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_AGDAPIPKFHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJKMGCKMNNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJKMGCKMNNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
