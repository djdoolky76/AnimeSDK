#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class JNAOCJBLPPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNAOCJBLPPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FFFAF00)
#define JNAOCJBLPPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFFB220)
#define JNAOCJBLPPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFFAA30)
#define JNAOCJBLPPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFFA9F0)
#define JNAOCJBLPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFFA9E0)
#define JNAOCJBLPPC_ECBCBKNCGHC_OFFSET UNITYSDK_OFFSET(0x1FFFAAC0)
#define JNAOCJBLPPC_EEMCJKDKIOP_OFFSET UNITYSDK_OFFSET(0x1FFFAAE0)
#define JNAOCJBLPPC_EIOGEBGMJEI_OFFSET UNITYSDK_OFFSET(0x1FFFAAA0)
#define JNAOCJBLPPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFFAB70)
#define JNAOCJBLPPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFFAB10)
#define JNAOCJBLPPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FFFAB00)
#define JNAOCJBLPPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFFAC60)
#define JNAOCJBLPPC_GFNBDKJJOCC_OFFSET UNITYSDK_OFFSET(0x1FFFAA90)
#define JNAOCJBLPPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FFFA9A0)
#define JNAOCJBLPPC_JNECLJNJFKM_OFFSET UNITYSDK_OFFSET(0x1FFFAAB0)
#define JNAOCJBLPPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FFFB170)
#define JNAOCJBLPPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FFFB120)
#define JNAOCJBLPPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FFFAAF0)
#define JNAOCJBLPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FFFA9D0)
#define JNAOCJBLPPC_PODBMCPAPGC_OFFSET UNITYSDK_OFFSET(0x1FFFAAD0)
#define JNAOCJBLPPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFFACB0)
#define JNAOCJBLPPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FFFAD10)

inline static constexpr unsigned int JNAOCJBLPPC_TypeDefinitionIndex = 32995;

	class JNAOCJBLPPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KANHAPIFLOM; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::HNOHHOEPFHC GMJGJGNPOEC; // 0x20
		::System::Byte _padding1[0x4];
		::System::Int64 IPBKMFIBBIB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::JNAOCJBLPPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNAOCJBLPPC*>**)UnitySDK::FromName("", "JNAOCJBLPPC")->GetStaticField(0x66DF0);
		}

		// static const ::System::Object OPKAOFANLJI; // 0x0
		// static const ::System::Object LMODDNCFPKN; // 0x0
		// static const ::System::Object JJALDILEIIF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNAOCJBLPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNAOCJBLPPC*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAOCJBLPPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNAOCJBLPPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNAOCJBLPPC*>*(*)())((::PBYTE)hIl2Cpp + JNAOCJBLPPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNAOCJBLPPC* Clone()
		{
			return ((::JNAOCJBLPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_CLONE_OFFSET))(this);
		}

		::System::Boolean GFNBDKJJOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_GFNBDKJJOCC_OFFSET))(this);
		}

		::System::Void EIOGEBGMJEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_EIOGEBGMJEI_OFFSET))(this, a1);
		}

		::HNOHHOEPFHC JNECLJNJFKM()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_JNECLJNJFKM_OFFSET))(this);
		}

		::System::Void ECBCBKNCGHC(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_ECBCBKNCGHC_OFFSET))(this, a1);
		}

		::System::Int64 PODBMCPAPGC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_PODBMCPAPGC_OFFSET))(this);
		}

		::System::Void EEMCJKDKIOP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_EEMCJKDKIOP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNAOCJBLPPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNAOCJBLPPC*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNAOCJBLPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNAOCJBLPPC*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNAOCJBLPPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
