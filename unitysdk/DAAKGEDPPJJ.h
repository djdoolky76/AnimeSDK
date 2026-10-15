#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAAKGEDPPJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAAKGEDPPJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E147A10)
#define DAAKGEDPPJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E147C70)
#define DAAKGEDPPJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E147620)
#define DAAKGEDPPJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1475E0)
#define DAAKGEDPPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1475D0)
#define DAAKGEDPPJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E147790)
#define DAAKGEDPPJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1476B0)
#define DAAKGEDPPJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E147870)
#define DAAKGEDPPJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E147590)
#define DAAKGEDPPJJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1E147690)
#define DAAKGEDPPJJ_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1E147680)
#define DAAKGEDPPJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E147AF0)
#define DAAKGEDPPJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E147AB0)
#define DAAKGEDPPJJ_MOAKACHAAMM_OFFSET UNITYSDK_OFFSET(0x1E1476A0)
#define DAAKGEDPPJJ_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1E147670)
#define DAAKGEDPPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1475C0)
#define DAAKGEDPPJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1478A0)
#define DAAKGEDPPJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E147900)

inline static constexpr unsigned int DAAKGEDPPJJ_TypeDefinitionIndex = 33922;

	class DAAKGEDPPJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean PFLGHHDHBDB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 KCMIMKALMNK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DAAKGEDPPJJ")->GetStaticField(0x232E0);
		}

		// static const ::System::Object EHMKMJNLNHA; // 0x0
		// static const ::System::Object LDBJJPBGLNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAAKGEDPPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAKGEDPPJJ*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAAKGEDPPJJ* Clone()
		{
			return ((::DAAKGEDPPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void MOAKACHAAMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_MOAKACHAAMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAAKGEDPPJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAAKGEDPPJJ*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAAKGEDPPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAKGEDPPJJ*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
