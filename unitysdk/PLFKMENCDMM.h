#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLFKMENCDMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLFKMENCDMM_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1DF71DD0)
#define PLFKMENCDMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF72550)
#define PLFKMENCDMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF728F0)
#define PLFKMENCDMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF71CE0)
#define PLFKMENCDMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF71C30)
#define PLFKMENCDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF71BE0)
#define PLFKMENCDMM_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1DF71DB0)
#define PLFKMENCDMM_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1DF71D30)
#define PLFKMENCDMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF71E40)
#define PLFKMENCDMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF71DE0)
#define PLFKMENCDMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF71FF0)
#define PLFKMENCDMM_HFCFAKOCGKJ_OFFSET UNITYSDK_OFFSET(0x1DF71D70)
#define PLFKMENCDMM_HOGAGJBHCJO_OFFSET UNITYSDK_OFFSET(0x1DF71DA0)
#define PLFKMENCDMM_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1DF71D50)
#define PLFKMENCDMM_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1DF71DC0)
#define PLFKMENCDMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF71B70)
#define PLFKMENCDMM_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1DF71D60)
#define PLFKMENCDMM_LJHNGPOCJNB_OFFSET UNITYSDK_OFFSET(0x1DF71D90)
#define PLFKMENCDMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF72780)
#define PLFKMENCDMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF72700)
#define PLFKMENCDMM_PBJINIHBFDG_OFFSET UNITYSDK_OFFSET(0x1DF71D80)
#define PLFKMENCDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF71BD0)
#define PLFKMENCDMM_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1DF71D40)
#define PLFKMENCDMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF72200)
#define PLFKMENCDMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF72260)

inline static constexpr unsigned int PLFKMENCDMM_TypeDefinitionIndex = 29621;

	class PLFKMENCDMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELBGFDFFBPH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Double AHNEBPEHFLP; // 0x20
		::System::UInt32 NNLJKKAEICI; // 0x28
		::System::UInt32 PPNELLDGNPC; // 0x2C
		::System::Boolean LODBOJJAPKO; // 0x30
		::System::Boolean ECKKOPIIGIG; // 0x31
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PLFKMENCDMM")->GetStaticField(0x14000);
		}

		static ::Google::Protobuf::MessageParser_1<::PLFKMENCDMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLFKMENCDMM*>**)UnitySDK::FromName("", "PLFKMENCDMM")->GetStaticField(0x14008);
		}

		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object MELOPNPCNIH; // 0x0
		// static const ::System::Object GJJKNIILFDM; // 0x0
		// static const ::System::Object OBKLBDFIEAH; // 0x0
		// static const ::System::Object JBKGNCCMBND; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLFKMENCDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLFKMENCDMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLFKMENCDMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLFKMENCDMM*>*(*)())((::PBYTE)hIl2Cpp + PLFKMENCDMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLFKMENCDMM* Clone()
		{
			return ((::PLFKMENCDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLFKMENCDMM_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::Double IHDPOPKDFKO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_IHDPOPKDFKO_OFFSET))(this);
		}

		::System::Void LAGHFAAHOBL(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PLFKMENCDMM_LAGHFAAHOBL_OFFSET))(this, a1);
		}

		::System::Boolean HFCFAKOCGKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_HFCFAKOCGKJ_OFFSET))(this);
		}

		::System::Void PBJINIHBFDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLFKMENCDMM_PBJINIHBFDG_OFFSET))(this, a1);
		}

		::System::Boolean LJHNGPOCJNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_LJHNGPOCJNB_OFFSET))(this);
		}

		::System::Void HOGAGJBHCJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLFKMENCDMM_HOGAGJBHCJO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_DCKAMLHKADM_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLFKMENCDMM_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLFKMENCDMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLFKMENCDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLFKMENCDMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
