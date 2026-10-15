#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
class KLNNIAHJBCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLNNIAHJBCO_BBKJLBNDLBF_OFFSET UNITYSDK_OFFSET(0x1E893090)
#define KLNNIAHJBCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8935D0)
#define KLNNIAHJBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E893A00)
#define KLNNIAHJBCO_CJFKKBLGJDM_OFFSET UNITYSDK_OFFSET(0x1E8930A0)
#define KLNNIAHJBCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E892FB0)
#define KLNNIAHJBCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E892F30)
#define KLNNIAHJBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E892F20)
#define KLNNIAHJBCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E893200)
#define KLNNIAHJBCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8930D0)
#define KLNNIAHJBCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E893390)
#define KLNNIAHJBCO_HGHNCHBLHNA_OFFSET UNITYSDK_OFFSET(0x1E893070)
#define KLNNIAHJBCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E892EB0)
#define KLNNIAHJBCO_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1E8930C0)
#define KLNNIAHJBCO_LKKOGHIPPEH_OFFSET UNITYSDK_OFFSET(0x1E893080)
#define KLNNIAHJBCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8937F0)
#define KLNNIAHJBCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E893710)
#define KLNNIAHJBCO_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1E8930B0)
#define KLNNIAHJBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E892F10)
#define KLNNIAHJBCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E893430)
#define KLNNIAHJBCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E893490)

	class KLNNIAHJBCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CBNNMKNBLDI* FOFDNMNEBOI; // 0x18
		::System::UInt32 HEJGFHKDIDF; // 0x20
		::System::UInt32 CMNBOKHJEHN; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLNNIAHJBCO")->GetStaticField(0x21990);
		}

		// static const ::System::Object JNKKGHCPKBK; // 0x0
		// static const ::System::Object CJBEFPEBMEK; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLNNIAHJBCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLNNIAHJBCO* Clone()
		{
			return ((::KLNNIAHJBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HGHNCHBLHNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_HGHNCHBLHNA_OFFSET))(this);
		}

		::System::Void LKKOGHIPPEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_LKKOGHIPPEH_OFFSET))(this, a1);
		}

		::System::UInt32 BBKJLBNDLBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_BBKJLBNDLBF_OFFSET))(this);
		}

		::System::Void CJFKKBLGJDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLNNIAHJBCO_CJFKKBLGJDM_OFFSET))(this, a1);
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
