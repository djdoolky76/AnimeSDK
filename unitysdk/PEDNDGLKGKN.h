#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class PEDNDGLKGKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEDNDGLKGKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF14D40)
#define PEDNDGLKGKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15050)
#define PEDNDGLKGKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF14980)
#define PEDNDGLKGKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF14950)
#define PEDNDGLKGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF14940)
#define PEDNDGLKGKN_ECBCBKNCGHC_OFFSET UNITYSDK_OFFSET(0x1DF14A00)
#define PEDNDGLKGKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF14AF0)
#define PEDNDGLKGKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF14A10)
#define PEDNDGLKGKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF149E0)
#define PEDNDGLKGKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF14BC0)
#define PEDNDGLKGKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF14900)
#define PEDNDGLKGKN_JNECLJNJFKM_OFFSET UNITYSDK_OFFSET(0x1DF149F0)
#define PEDNDGLKGKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF14ED0)
#define PEDNDGLKGKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF14E90)
#define PEDNDGLKGKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF149D0)
#define PEDNDGLKGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF14930)
#define PEDNDGLKGKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF14BF0)
#define PEDNDGLKGKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF14C50)

inline static constexpr unsigned int PEDNDGLKGKN_TypeDefinitionIndex = 32078;

	class PEDNDGLKGKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::HNOHHOEPFHC GMJGJGNPOEC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PEDNDGLKGKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEDNDGLKGKN*>**)UnitySDK::FromName("", "PEDNDGLKGKN")->GetStaticField(0x38350);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LMODDNCFPKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEDNDGLKGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEDNDGLKGKN*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEDNDGLKGKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEDNDGLKGKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEDNDGLKGKN*>*(*)())((::PBYTE)hIl2Cpp + PEDNDGLKGKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEDNDGLKGKN* Clone()
		{
			return ((::PEDNDGLKGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HNOHHOEPFHC JNECLJNJFKM()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_JNECLJNJFKM_OFFSET))(this);
		}

		::System::Void ECBCBKNCGHC(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_ECBCBKNCGHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEDNDGLKGKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEDNDGLKGKN*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEDNDGLKGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEDNDGLKGKN*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEDNDGLKGKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
