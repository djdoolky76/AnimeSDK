#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDHGGMILA;
class LMNCBIDKHLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJHDHGGMILA_BJIIELDJMLJ_OFFSET UNITYSDK_OFFSET(0x1E2896E0)
#define EJHDHGGMILA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E289BF0)
#define EJHDHGGMILA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E289F10)
#define EJHDHGGMILA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E289660)
#define EJHDHGGMILA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2895F0)
#define EJHDHGGMILA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2895E0)
#define EJHDHGGMILA_ECHDMGFPOAC_OFFSET UNITYSDK_OFFSET(0x1E289700)
#define EJHDHGGMILA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2898A0)
#define EJHDHGGMILA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E289720)
#define EJHDHGGMILA_FJINLMGHNKB_OFFSET UNITYSDK_OFFSET(0x1E289710)
#define EJHDHGGMILA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E289A20)
#define EJHDHGGMILA_HCOMNCGMOFP_OFFSET UNITYSDK_OFFSET(0x1E2896F0)
#define EJHDHGGMILA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2895A0)
#define EJHDHGGMILA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E289D50)
#define EJHDHGGMILA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E289CC0)
#define EJHDHGGMILA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2895D0)
#define EJHDHGGMILA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E289AB0)
#define EJHDHGGMILA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E289B10)

inline static constexpr unsigned int EJHDHGGMILA_TypeDefinitionIndex = 27299;

	class EJHDHGGMILA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LMNCBIDKHLF* JAHKOPEGMMI; // 0x18
		::System::UInt32 NIAPJBPECEN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EJHDHGGMILA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJHDHGGMILA*>**)UnitySDK::FromName("", "EJHDHGGMILA")->GetStaticField(0x4C970);
		}

		// static const ::System::Object BHHOEAAMEBC; // 0x0
		// static const ::System::Object LCPNIJHOFJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJHDHGGMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDHGGMILA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJHDHGGMILA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJHDHGGMILA*>*(*)())((::PBYTE)hIl2Cpp + EJHDHGGMILA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJHDHGGMILA* Clone()
		{
			return ((::EJHDHGGMILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJIIELDJMLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_BJIIELDJMLJ_OFFSET))(this);
		}

		::System::Void HCOMNCGMOFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJHDHGGMILA_HCOMNCGMOFP_OFFSET))(this, a1);
		}

		::LMNCBIDKHLF* ECHDMGFPOAC()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_ECHDMGFPOAC_OFFSET))(this);
		}

		::System::Void FJINLMGHNKB(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_FJINLMGHNKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJHDHGGMILA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJHDHGGMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDHGGMILA*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJHDHGGMILA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
