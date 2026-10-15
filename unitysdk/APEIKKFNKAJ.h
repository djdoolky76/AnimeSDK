#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APEIKKFNKAJ;
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

#define APEIKKFNKAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E674490)
#define APEIKKFNKAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E674780)
#define APEIKKFNKAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E673E60)
#define APEIKKFNKAJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E673EC0)
#define APEIKKFNKAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E673DA0)
#define APEIKKFNKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E673D50)
#define APEIKKFNKAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E674000)
#define APEIKKFNKAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E673EE0)
#define APEIKKFNKAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E673EB0)
#define APEIKKFNKAJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E673ED0)
#define APEIKKFNKAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6741B0)
#define APEIKKFNKAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E673D10)
#define APEIKKFNKAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E674660)
#define APEIKKFNKAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6745B0)
#define APEIKKFNKAJ_NHPINJIIEGK_OFFSET UNITYSDK_OFFSET(0x1E673E90)
#define APEIKKFNKAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E673EA0)
#define APEIKKFNKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E673D40)
#define APEIKKFNKAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E674300)
#define APEIKKFNKAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E674360)

inline static constexpr unsigned int APEIKKFNKAJ_TypeDefinitionIndex = 27874;

	class APEIKKFNKAJ : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CCDAAEAOHJJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APNOCHBAAEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "APEIKKFNKAJ")->GetStaticField(0x41EB0);
		}

		static ::Google::Protobuf::MessageParser_1<::APEIKKFNKAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APEIKKFNKAJ*>**)UnitySDK::FromName("", "APEIKKFNKAJ")->GetStaticField(0x41EB8);
		}

		// static const ::System::Object CIBDNMCBMLC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APEIKKFNKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APEIKKFNKAJ*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APEIKKFNKAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APEIKKFNKAJ*>*(*)())((::PBYTE)hIl2Cpp + APEIKKFNKAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APEIKKFNKAJ* Clone()
		{
			return ((::APEIKKFNKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHPINJIIEGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_NHPINJIIEGK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APEIKKFNKAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APEIKKFNKAJ*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APEIKKFNKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APEIKKFNKAJ*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APEIKKFNKAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
