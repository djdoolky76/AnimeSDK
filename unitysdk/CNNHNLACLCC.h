#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNNHNLACLCC;
class PLPDNKNJBAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNNHNLACLCC_BECELDMGLPJ_OFFSET UNITYSDK_OFFSET(0x1E0DF020)
#define CNNHNLACLCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DF5A0)
#define CNNHNLACLCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFA60)
#define CNNHNLACLCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DEF70)
#define CNNHNLACLCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DEED0)
#define CNNHNLACLCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DEEC0)
#define CNNHNLACLCC_EOGFJHMGJOM_OFFSET UNITYSDK_OFFSET(0x1E0DF060)
#define CNNHNLACLCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DF210)
#define CNNHNLACLCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DF080)
#define CNNHNLACLCC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0DF050)
#define CNNHNLACLCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DF3A0)
#define CNNHNLACLCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DEE80)
#define CNNHNLACLCC_LAMNBPOCHBB_OFFSET UNITYSDK_OFFSET(0x1E0DF030)
#define CNNHNLACLCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DF800)
#define CNNHNLACLCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DF750)
#define CNNHNLACLCC_NJMLKAKLOLI_OFFSET UNITYSDK_OFFSET(0x1E0DF070)
#define CNNHNLACLCC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0DF040)
#define CNNHNLACLCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DEEB0)
#define CNNHNLACLCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DF400)
#define CNNHNLACLCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DF460)

inline static constexpr unsigned int CNNHNLACLCC_TypeDefinitionIndex = 31892;

	class CNNHNLACLCC : public ::System::Object
	{
	public:
		::PLPDNKNJBAA* PONEDNDIGKB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int64 LCOKNCEBFPB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CNNHNLACLCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNNHNLACLCC*>**)UnitySDK::FromName("", "CNNHNLACLCC")->GetStaticField(0x1D3A0);
		}

		// static const ::System::Object KJMDDOHBEON; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CDKJPKFNIDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNNHNLACLCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNNHNLACLCC*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNNHNLACLCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNNHNLACLCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNNHNLACLCC*>*(*)())((::PBYTE)hIl2Cpp + CNNHNLACLCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNNHNLACLCC* Clone()
		{
			return ((::CNNHNLACLCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_CLONE_OFFSET))(this);
		}

		::PLPDNKNJBAA* BECELDMGLPJ()
		{
			return ((::PLPDNKNJBAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_BECELDMGLPJ_OFFSET))(this);
		}

		::System::Void LAMNBPOCHBB(::PLPDNKNJBAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPDNKNJBAA*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_LAMNBPOCHBB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNNHNLACLCC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int64 EOGFJHMGJOM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_EOGFJHMGJOM_OFFSET))(this);
		}

		::System::Void NJMLKAKLOLI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CNNHNLACLCC_NJMLKAKLOLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNNHNLACLCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNNHNLACLCC*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNNHNLACLCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNNHNLACLCC*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNNHNLACLCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
