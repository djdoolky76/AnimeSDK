#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNKJOONKGOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HNKJOONKGOK_AEFDIIMBEOI_OFFSET UNITYSDK_OFFSET(0x1E5B2480)
#define HNKJOONKGOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B2A10)
#define HNKJOONKGOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2DE0)
#define HNKJOONKGOK_CKIFFFCFPDA_OFFSET UNITYSDK_OFFSET(0x1E5B2490)
#define HNKJOONKGOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B23E0)
#define HNKJOONKGOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B2370)
#define HNKJOONKGOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2360)
#define HNKJOONKGOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B2650)
#define HNKJOONKGOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B24C0)
#define HNKJOONKGOK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5B24B0)
#define HNKJOONKGOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B27E0)
#define HNKJOONKGOK_IENMFHALCIC_OFFSET UNITYSDK_OFFSET(0x1E5B2470)
#define HNKJOONKGOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B2320)
#define HNKJOONKGOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B2C00)
#define HNKJOONKGOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B2B60)
#define HNKJOONKGOK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5B24A0)
#define HNKJOONKGOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2350)
#define HNKJOONKGOK_POKCANMKPBC_OFFSET UNITYSDK_OFFSET(0x1E5B2460)
#define HNKJOONKGOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B2870)
#define HNKJOONKGOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B28D0)

inline static constexpr unsigned int HNKJOONKGOK_TypeDefinitionIndex = 26072;

	class HNKJOONKGOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* AMMENNLHHMA; // 0x18
		::System::UInt32 CLHJJFPJKJN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HNKJOONKGOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNKJOONKGOK*>**)UnitySDK::FromName("", "HNKJOONKGOK")->GetStaticField(0x3B9C0);
		}

		// static const ::System::Object CPFEBLJMAIC; // 0x0
		// static const ::System::Object OCBMLOFJIHA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNKJOONKGOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNKJOONKGOK*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKJOONKGOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNKJOONKGOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNKJOONKGOK*>*(*)())((::PBYTE)hIl2Cpp + HNKJOONKGOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNKJOONKGOK* Clone()
		{
			return ((::HNKJOONKGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 POKCANMKPBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_POKCANMKPBC_OFFSET))(this);
		}

		::System::Void IENMFHALCIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNKJOONKGOK_IENMFHALCIC_OFFSET))(this, a1);
		}

		::Proto::ItemList* AEFDIIMBEOI()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_AEFDIIMBEOI_OFFSET))(this);
		}

		::System::Void CKIFFFCFPDA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_CKIFFFCFPDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNKJOONKGOK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNKJOONKGOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNKJOONKGOK*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNKJOONKGOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNKJOONKGOK*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNKJOONKGOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
