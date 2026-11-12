#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
class KLNNIAHJBCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLNNIAHJBCO_BBKJLBNDLBF_OFFSET UNITYSDK_OFFSET(0x1FBAE470)
#define KLNNIAHJBCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBAE9D0)
#define KLNNIAHJBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAEE00)
#define KLNNIAHJBCO_CJFKKBLGJDM_OFFSET UNITYSDK_OFFSET(0x1FBAE480)
#define KLNNIAHJBCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBAE3B0)
#define KLNNIAHJBCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBAE330)
#define KLNNIAHJBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAE320)
#define KLNNIAHJBCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBAE600)
#define KLNNIAHJBCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBAE4D0)
#define KLNNIAHJBCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBAE790)
#define KLNNIAHJBCO_HGHNCHBLHNA_OFFSET UNITYSDK_OFFSET(0x1FBAE490)
#define KLNNIAHJBCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBAE2B0)
#define KLNNIAHJBCO_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1FBAE4C0)
#define KLNNIAHJBCO_LKKOGHIPPEH_OFFSET UNITYSDK_OFFSET(0x1FBAE4A0)
#define KLNNIAHJBCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBAEBF0)
#define KLNNIAHJBCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBAEB10)
#define KLNNIAHJBCO_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1FBAE4B0)
#define KLNNIAHJBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBAE310)
#define KLNNIAHJBCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBAE830)
#define KLNNIAHJBCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBAE890)

inline static constexpr unsigned int KLNNIAHJBCO_TypeDefinitionIndex = 30824;

	class KLNNIAHJBCO : public ::System::Object
	{
	public:
		::CBNNMKNBLDI* FOFDNMNEBOI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CMNBOKHJEHN; // 0x20
		::System::UInt32 HEJGFHKDIDF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KLNNIAHJBCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLNNIAHJBCO*>**)UnitySDK::FromName("", "KLNNIAHJBCO")->GetStaticField(0x1A120);
		}

		// static const ::System::Object CJBEFPEBMEK; // 0x0
		// static const ::System::Object JNKKGHCPKBK; // 0x0
		// static const ::System::Object PEFBHJBLDLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLNNIAHJBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNNIAHJBCO*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLNNIAHJBCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLNNIAHJBCO*>*(*)())((::PBYTE)hIl2Cpp + KLNNIAHJBCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLNNIAHJBCO* Clone()
		{
			return ((::KLNNIAHJBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BBKJLBNDLBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_BBKJLBNDLBF_OFFSET))(this);
		}

		::System::Void CJFKKBLGJDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CJFKKBLGJDM_OFFSET))(this, a1);
		}

		::System::UInt32 HGHNCHBLHNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_HGHNCHBLHNA_OFFSET))(this);
		}

		::System::Void LKKOGHIPPEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_LKKOGHIPPEH_OFFSET))(this, a1);
		}

		::CBNNMKNBLDI* ODEGHBCBLEG()
		{
			return ((::CBNNMKNBLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_ODEGHBCBLEG_OFFSET))(this);
		}

		::System::Void KMKINFNDDJE(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_KMKINFNDDJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLNNIAHJBCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLNNIAHJBCO*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLNNIAHJBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNNIAHJBCO*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
