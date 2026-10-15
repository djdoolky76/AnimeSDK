#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COIMBCBMNIE;
class KIAGIOBGGNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIAGIOBGGNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E851490)
#define KIAGIOBGGNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E851980)
#define KIAGIOBGGNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E850F50)
#define KIAGIOBGGNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E850E20)
#define KIAGIOBGGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E850DD0)
#define KIAGIOBGGNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E851000)
#define KIAGIOBGGNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E850FD0)
#define KIAGIOBGGNK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E850FC0)
#define KIAGIOBGGNK_FFDHFNPBOID_OFFSET UNITYSDK_OFFSET(0x1E850F80)
#define KIAGIOBGGNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8511E0)
#define KIAGIOBGGNK_IEPOJOEILCA_OFFSET UNITYSDK_OFFSET(0x1E850FA0)
#define KIAGIOBGGNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E850D90)
#define KIAGIOBGGNK_LBONAPEGHAB_OFFSET UNITYSDK_OFFSET(0x1E850F90)
#define KIAGIOBGGNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E851730)
#define KIAGIOBGGNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E851600)
#define KIAGIOBGGNK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E850FB0)
#define KIAGIOBGGNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E850DC0)
#define KIAGIOBGGNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8512D0)
#define KIAGIOBGGNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E851330)

inline static constexpr unsigned int KIAGIOBGGNK_TypeDefinitionIndex = 31483;

	class KIAGIOBGGNK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::COIMBCBMNIE*>* EMDJNKJHMBE; // 0x10
		::COIMBCBMNIE* HDHPBKAGJMG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIAGIOBGGNK")->GetStaticField(0x18720);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GLDIIIMAMDJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KIAGIOBGGNK")->GetStaticField(0x18728);
		}

		// static const ::System::Object AKKLOLBKLFC; // 0x0
		// static const ::System::Object MMDLIOEFGMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIAGIOBGGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAGIOBGGNK*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAGIOBGGNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIAGIOBGGNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIAGIOBGGNK* Clone()
		{
			return ((::KIAGIOBGGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_CLONE_OFFSET))(this);
		}

		::COIMBCBMNIE* FFDHFNPBOID()
		{
			return ((::COIMBCBMNIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_FFDHFNPBOID_OFFSET))(this);
		}

		::System::Void LBONAPEGHAB(::COIMBCBMNIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COIMBCBMNIE*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_LBONAPEGHAB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::COIMBCBMNIE*>* IEPOJOEILCA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::COIMBCBMNIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_IEPOJOEILCA_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIAGIOBGGNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIAGIOBGGNK*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIAGIOBGGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAGIOBGGNK*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIAGIOBGGNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
