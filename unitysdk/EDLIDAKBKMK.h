#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDLIDAKBKMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define EDLIDAKBKMK_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1E2620B0)
#define EDLIDAKBKMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2624F0)
#define EDLIDAKBKMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2628B0)
#define EDLIDAKBKMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E262040)
#define EDLIDAKBKMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E261FA0)
#define EDLIDAKBKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E261F60)
#define EDLIDAKBKMK_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E262090)
#define EDLIDAKBKMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E262110)
#define EDLIDAKBKMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2620E0)
#define EDLIDAKBKMK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2620D0)
#define EDLIDAKBKMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E262250)
#define EDLIDAKBKMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E261F20)
#define EDLIDAKBKMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2627C0)
#define EDLIDAKBKMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E262700)
#define EDLIDAKBKMK_MMFCFABFPJA_OFFSET UNITYSDK_OFFSET(0x1E262070)
#define EDLIDAKBKMK_NBGDJNEMIJN_OFFSET UNITYSDK_OFFSET(0x1E262080)
#define EDLIDAKBKMK_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E2620A0)
#define EDLIDAKBKMK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2620C0)
#define EDLIDAKBKMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E261F50)
#define EDLIDAKBKMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2622D0)
#define EDLIDAKBKMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E262330)

inline static constexpr unsigned int EDLIDAKBKMK_TypeDefinitionIndex = 27680;

	class EDLIDAKBKMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* BAKMJFEAFLM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 HOMOFBOHOEF; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)UnitySDK::FromName("", "EDLIDAKBKMK")->GetStaticField(0x40C30);
		}

		static ::Google::Protobuf::MessageParser_1<::EDLIDAKBKMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDLIDAKBKMK*>**)UnitySDK::FromName("", "EDLIDAKBKMK")->GetStaticField(0x40C38);
		}

		// static const ::System::Object OJHHIMKBKJH; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object CEPJFBBCEPP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDLIDAKBKMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDLIDAKBKMK*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDLIDAKBKMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDLIDAKBKMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDLIDAKBKMK*>*(*)())((::PBYTE)hIl2Cpp + EDLIDAKBKMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDLIDAKBKMK* Clone()
		{
			return ((::EDLIDAKBKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 MMFCFABFPJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_MMFCFABFPJA_OFFSET))(this);
		}

		::System::Void NBGDJNEMIJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_NBGDJNEMIJN_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_AIFLNGGOLIK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDLIDAKBKMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDLIDAKBKMK*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDLIDAKBKMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDLIDAKBKMK*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDLIDAKBKMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
