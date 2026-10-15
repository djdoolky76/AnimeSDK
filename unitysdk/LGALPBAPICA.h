#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGALPBAPICA;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGALPBAPICA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E948980)
#define LGALPBAPICA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E948D00)
#define LGALPBAPICA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E948350)
#define LGALPBAPICA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E948300)
#define LGALPBAPICA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9482F0)
#define LGALPBAPICA_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E9483D0)
#define LGALPBAPICA_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E9483E0)
#define LGALPBAPICA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9485A0)
#define LGALPBAPICA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E948410)
#define LGALPBAPICA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E948400)
#define LGALPBAPICA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E948730)
#define LGALPBAPICA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9482B0)
#define LGALPBAPICA_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1E9483B0)
#define LGALPBAPICA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E948B50)
#define LGALPBAPICA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E948AD0)
#define LGALPBAPICA_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1E9483C0)
#define LGALPBAPICA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9483F0)
#define LGALPBAPICA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9482E0)
#define LGALPBAPICA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9487E0)
#define LGALPBAPICA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E948840)

inline static constexpr unsigned int LGALPBAPICA_TypeDefinitionIndex = 30519;

	class LGALPBAPICA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MEGGDDIDHFM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LGALPBAPICA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGALPBAPICA*>**)UnitySDK::FromName("", "LGALPBAPICA")->GetStaticField(0x3D500);
		}

		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGALPBAPICA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGALPBAPICA*))((::PBYTE)hIl2Cpp + LGALPBAPICA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGALPBAPICA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGALPBAPICA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGALPBAPICA*>*(*)())((::PBYTE)hIl2Cpp + LGALPBAPICA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGALPBAPICA* Clone()
		{
			return ((::LGALPBAPICA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGALPBAPICA_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + LGALPBAPICA_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGALPBAPICA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGALPBAPICA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGALPBAPICA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGALPBAPICA*))((::PBYTE)hIl2Cpp + LGALPBAPICA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGALPBAPICA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGALPBAPICA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGALPBAPICA*))((::PBYTE)hIl2Cpp + LGALPBAPICA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGALPBAPICA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
