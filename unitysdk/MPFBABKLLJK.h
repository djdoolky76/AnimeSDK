#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPFBABKLLJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPFBABKLLJK_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1EAB7120)
#define MPFBABKLLJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB7450)
#define MPFBABKLLJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7720)
#define MPFBABKLLJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB70A0)
#define MPFBABKLLJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB7070)
#define MPFBABKLLJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7060)
#define MPFBABKLLJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB7210)
#define MPFBABKLLJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB7130)
#define MPFBABKLLJK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAB7100)
#define MPFBABKLLJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB72E0)
#define MPFBABKLLJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB7020)
#define MPFBABKLLJK_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1EAB7110)
#define MPFBABKLLJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB75A0)
#define MPFBABKLLJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB7560)
#define MPFBABKLLJK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAB70F0)
#define MPFBABKLLJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7050)
#define MPFBABKLLJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB7310)
#define MPFBABKLLJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB7370)

inline static constexpr unsigned int MPFBABKLLJK_TypeDefinitionIndex = 30956;

	class MPFBABKLLJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNLKJFIKFCG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MPFBABKLLJK")->GetStaticField(0x5B5F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PGLBLGGFDJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPFBABKLLJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPFBABKLLJK*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFBABKLLJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MPFBABKLLJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPFBABKLLJK* Clone()
		{
			return ((::MPFBABKLLJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPFBABKLLJK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPFBABKLLJK_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPFBABKLLJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPFBABKLLJK*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPFBABKLLJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPFBABKLLJK*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPFBABKLLJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
