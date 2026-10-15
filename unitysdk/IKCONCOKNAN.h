#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGMCMAKMJDK;
class IKCONCOKNAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKCONCOKNAN_BDBDBFJOIMF_OFFSET UNITYSDK_OFFSET(0x1E69E400)
#define IKCONCOKNAN_BNPJBCEHJPK_OFFSET UNITYSDK_OFFSET(0x1E69E3E0)
#define IKCONCOKNAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69E7F0)
#define IKCONCOKNAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69EC50)
#define IKCONCOKNAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69E360)
#define IKCONCOKNAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69E2C0)
#define IKCONCOKNAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69E280)
#define IKCONCOKNAN_DPKHAPNBGIE_OFFSET UNITYSDK_OFFSET(0x1E69E3F0)
#define IKCONCOKNAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69E450)
#define IKCONCOKNAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69E420)
#define IKCONCOKNAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69E4F0)
#define IKCONCOKNAN_HNGGCDAPCOH_OFFSET UNITYSDK_OFFSET(0x1E69E3C0)
#define IKCONCOKNAN_INGEGDMLPMG_OFFSET UNITYSDK_OFFSET(0x1E69E3A0)
#define IKCONCOKNAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69E240)
#define IKCONCOKNAN_KACJKJJDAKD_OFFSET UNITYSDK_OFFSET(0x1E69E3D0)
#define IKCONCOKNAN_KNFAOOJKHGG_OFFSET UNITYSDK_OFFSET(0x1E69E410)
#define IKCONCOKNAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69EB50)
#define IKCONCOKNAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69EA80)
#define IKCONCOKNAN_NBFPDOGJDNL_OFFSET UNITYSDK_OFFSET(0x1E69E390)
#define IKCONCOKNAN_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0x1E69E3B0)
#define IKCONCOKNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69E270)
#define IKCONCOKNAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69E570)
#define IKCONCOKNAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69E5D0)

inline static constexpr unsigned int IKCONCOKNAN_TypeDefinitionIndex = 27295;

	class IKCONCOKNAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* IJBPFEJMAOB; // 0x18
		::System::UInt32 LNEKNIGIHNG; // 0x20
		::System::UInt32 OMEKGECGIEL; // 0x24
		::System::UInt32 GGFPDCGNHIN; // 0x28
		::System::UInt32 GKIMMCAPMLB; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKCONCOKNAN")->GetStaticField(0x55340);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EKGIINENDAM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IKCONCOKNAN")->GetStaticField(0x55348);
		}

		// static const ::System::Object BJBNMDKEFDM; // 0x0
		// static const ::System::Object BEEPPNBMIJL; // 0x0
		// static const ::System::Object DLAAOCPMHEH; // 0x0
		// static const ::System::Object ANCHPEBJKOH; // 0x0
		// static const ::System::Object DHJGMLPHMOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKCONCOKNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCONCOKNAN*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCONCOKNAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKCONCOKNAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKCONCOKNAN* Clone()
		{
			return ((::IKCONCOKNAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NBFPDOGJDNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_NBFPDOGJDNL_OFFSET))(this);
		}

		::System::Void INGEGDMLPMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCONCOKNAN_INGEGDMLPMG_OFFSET))(this, a1);
		}

		::System::UInt32 OBIIJABDNPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_OBIIJABDNPC_OFFSET))(this);
		}

		::System::Void HNGGCDAPCOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCONCOKNAN_HNGGCDAPCOH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* KACJKJJDAKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_KACJKJJDAKD_OFFSET))(this);
		}

		::System::UInt32 BNPJBCEHJPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_BNPJBCEHJPK_OFFSET))(this);
		}

		::System::Void DPKHAPNBGIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCONCOKNAN_DPKHAPNBGIE_OFFSET))(this, a1);
		}

		::System::UInt32 BDBDBFJOIMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_BDBDBFJOIMF_OFFSET))(this);
		}

		::System::Void KNFAOOJKHGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCONCOKNAN_KNFAOOJKHGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKCONCOKNAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKCONCOKNAN*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKCONCOKNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCONCOKNAN*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKCONCOKNAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
