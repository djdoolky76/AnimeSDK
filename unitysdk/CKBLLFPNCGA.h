#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKBLLFPNCGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CKBLLFPNCGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3BA200)
#define CKBLLFPNCGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3BA600)
#define CKBLLFPNCGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3B99F0)
#define CKBLLFPNCGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3B9950)
#define CKBLLFPNCGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B9940)
#define CKBLLFPNCGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3B9D30)
#define CKBLLFPNCGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3B9B00)
#define CKBLLFPNCGA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F3B9AB0)
#define CKBLLFPNCGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3B9F60)
#define CKBLLFPNCGA_HOEDDPJIFEA_OFFSET UNITYSDK_OFFSET(0x1F3B9AC0)
#define CKBLLFPNCGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3B9900)
#define CKBLLFPNCGA_KHKFJIPGACH_OFFSET UNITYSDK_OFFSET(0x1F3B9AD0)
#define CKBLLFPNCGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3BA3F0)
#define CKBLLFPNCGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3BA300)
#define CKBLLFPNCGA_NGLBOFDNLHP_OFFSET UNITYSDK_OFFSET(0x1F3B9AE0)
#define CKBLLFPNCGA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F3B9AA0)
#define CKBLLFPNCGA_OJDBNKODLGO_OFFSET UNITYSDK_OFFSET(0x1F3B9AF0)
#define CKBLLFPNCGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3B9930)
#define CKBLLFPNCGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3BA060)
#define CKBLLFPNCGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3BA0C0)

inline static constexpr unsigned int CKBLLFPNCGA_TypeDefinitionIndex = 31140;

	class CKBLLFPNCGA : public ::System::Object
	{
	public:
		::Proto::ItemList* KKEDCHNKCFG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* HNFDMLGJMBA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CKBLLFPNCGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKBLLFPNCGA*>**)UnitySDK::FromName("", "CKBLLFPNCGA")->GetStaticField(0x13DC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NMMNAECOFDF; // 0x0
		// static const ::System::Object CHEECMBFBFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKBLLFPNCGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKBLLFPNCGA*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBLLFPNCGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKBLLFPNCGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKBLLFPNCGA*>*(*)())((::PBYTE)hIl2Cpp + CKBLLFPNCGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKBLLFPNCGA* Clone()
		{
			return ((::CKBLLFPNCGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* HOEDDPJIFEA()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_HOEDDPJIFEA_OFFSET))(this);
		}

		::System::Void KHKFJIPGACH(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_KHKFJIPGACH_OFFSET))(this, a1);
		}

		::Proto::ItemList* NGLBOFDNLHP()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_NGLBOFDNLHP_OFFSET))(this);
		}

		::System::Void OJDBNKODLGO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_OJDBNKODLGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKBLLFPNCGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKBLLFPNCGA*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKBLLFPNCGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKBLLFPNCGA*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKBLLFPNCGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
