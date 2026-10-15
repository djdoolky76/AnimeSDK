#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGLOGMBKLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BMGLOGMBKLF_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1E026220)
#define BMGLOGMBKLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E026720)
#define BMGLOGMBKLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E026A40)
#define BMGLOGMBKLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E026190)
#define BMGLOGMBKLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E026120)
#define BMGLOGMBKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E026110)
#define BMGLOGMBKLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0263D0)
#define BMGLOGMBKLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E026250)
#define BMGLOGMBKLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E026550)
#define BMGLOGMBKLF_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E026240)
#define BMGLOGMBKLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0260D0)
#define BMGLOGMBKLF_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1E026210)
#define BMGLOGMBKLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E026880)
#define BMGLOGMBKLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0267F0)
#define BMGLOGMBKLF_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E026230)
#define BMGLOGMBKLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E026100)
#define BMGLOGMBKLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0265E0)
#define BMGLOGMBKLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E026640)

inline static constexpr unsigned int BMGLOGMBKLF_TypeDefinitionIndex = 30954;

	class BMGLOGMBKLF : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KNLKJFIKFCG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMGLOGMBKLF")->GetStaticField(0x50450);
		}

		// static const ::System::Object PGLBLGGFDJF; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMGLOGMBKLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGLOGMBKLF*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGLOGMBKLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMGLOGMBKLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMGLOGMBKLF* Clone()
		{
			return ((::BMGLOGMBKLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMGLOGMBKLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMGLOGMBKLF*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMGLOGMBKLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGLOGMBKLF*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMGLOGMBKLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
