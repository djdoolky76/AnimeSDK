#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFMGCNIMIN;
class LHKNCMFEPFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHKNCMFEPFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E965530)
#define LHKNCMFEPFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9658F0)
#define LHKNCMFEPFK_CGFNAFJEEKG_OFFSET UNITYSDK_OFFSET(0x1E964FC0)
#define LHKNCMFEPFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E964F20)
#define LHKNCMFEPFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E964E90)
#define LHKNCMFEPFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E964E80)
#define LHKNCMFEPFK_DKPHFOGFAGI_OFFSET UNITYSDK_OFFSET(0x1E964FB0)
#define LHKNCMFEPFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9651A0)
#define LHKNCMFEPFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E965010)
#define LHKNCMFEPFK_FACDGHHCJKP_OFFSET UNITYSDK_OFFSET(0x1E965000)
#define LHKNCMFEPFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E965330)
#define LHKNCMFEPFK_JCCAMGNABPG_OFFSET UNITYSDK_OFFSET(0x1E964FD0)
#define LHKNCMFEPFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E964E40)
#define LHKNCMFEPFK_LJOIFOHAHPB_OFFSET UNITYSDK_OFFSET(0x1E964FF0)
#define LHKNCMFEPFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E965740)
#define LHKNCMFEPFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E965690)
#define LHKNCMFEPFK_OACHHNCGECI_OFFSET UNITYSDK_OFFSET(0x1E964FE0)
#define LHKNCMFEPFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E964E70)
#define LHKNCMFEPFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E965390)
#define LHKNCMFEPFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9653F0)

inline static constexpr unsigned int LHKNCMFEPFK_TypeDefinitionIndex = 32864;

	class LHKNCMFEPFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KOFMGCNIMIN* NLLPBGADLLJ; // 0x18
		::System::UInt32 EFIBMJDFMDH; // 0x20
		::System::UInt32 OAMCKIIKGCJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHKNCMFEPFK")->GetStaticField(0x41BC0);
		}

		// static const ::System::Object CCMJLMIDGGC; // 0x0
		// static const ::System::Object LDGKFDOAAIL; // 0x0
		// static const ::System::Object HBKBINLNDCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHKNCMFEPFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHKNCMFEPFK*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHKNCMFEPFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHKNCMFEPFK* Clone()
		{
			return ((::LHKNCMFEPFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CLONE_OFFSET))(this);
		}

		::KOFMGCNIMIN* DKPHFOGFAGI()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_DKPHFOGFAGI_OFFSET))(this);
		}

		::System::Void CGFNAFJEEKG(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CGFNAFJEEKG_OFFSET))(this, a1);
		}

		::System::UInt32 JCCAMGNABPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_JCCAMGNABPG_OFFSET))(this);
		}

		::System::Void OACHHNCGECI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_OACHHNCGECI_OFFSET))(this, a1);
		}

		::System::UInt32 LJOIFOHAHPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_LJOIFOHAHPB_OFFSET))(this);
		}

		::System::Void FACDGHHCJKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_FACDGHHCJKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHKNCMFEPFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHKNCMFEPFK*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHKNCMFEPFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHKNCMFEPFK*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHKNCMFEPFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
