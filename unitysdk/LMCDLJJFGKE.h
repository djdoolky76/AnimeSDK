#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMCDLJJFGKE;
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

#define LMCDLJJFGKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E974E80)
#define LMCDLJJFGKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E975170)
#define LMCDLJJFGKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E974830)
#define LMCDLJJFGKE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E974870)
#define LMCDLJJFGKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E974770)
#define LMCDLJJFGKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E974720)
#define LMCDLJJFGKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9749E0)
#define LMCDLJJFGKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9748B0)
#define LMCDLJJFGKE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9748A0)
#define LMCDLJJFGKE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E974880)
#define LMCDLJJFGKE_FLEFMNOKFOD_OFFSET UNITYSDK_OFFSET(0x1E974860)
#define LMCDLJJFGKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E974B90)
#define LMCDLJJFGKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9746E0)
#define LMCDLJJFGKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E975050)
#define LMCDLJJFGKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E974FA0)
#define LMCDLJJFGKE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E974890)
#define LMCDLJJFGKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E974710)
#define LMCDLJJFGKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E974CF0)
#define LMCDLJJFGKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E974D50)

inline static constexpr unsigned int LMCDLJJFGKE_TypeDefinitionIndex = 33215;

	class LMCDLJJFGKE : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HKHEHMHJLHG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LMCDLJJFGKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMCDLJJFGKE*>**)UnitySDK::FromName("", "LMCDLJJFGKE")->GetStaticField(0x3D520);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CDEGKLBGDHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LMCDLJJFGKE")->GetStaticField(0x3D528);
		}

		// static const ::System::Object CIDMLNHEGNG; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMCDLJJFGKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMCDLJJFGKE*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMCDLJJFGKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMCDLJJFGKE*>*(*)())((::PBYTE)hIl2Cpp + LMCDLJJFGKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMCDLJJFGKE* Clone()
		{
			return ((::LMCDLJJFGKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLEFMNOKFOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_FLEFMNOKFOD_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMCDLJJFGKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMCDLJJFGKE*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMCDLJJFGKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMCDLJJFGKE*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMCDLJJFGKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
