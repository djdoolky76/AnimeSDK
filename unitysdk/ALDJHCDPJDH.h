#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDJHCDPJDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ALDJHCDPJDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D6CD0)
#define ALDJHCDPJDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D6FF0)
#define ALDJHCDPJDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D6730)
#define ALDJHCDPJDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D66C0)
#define ALDJHCDPJDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D66B0)
#define ALDJHCDPJDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D6970)
#define ALDJHCDPJDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D67F0)
#define ALDJHCDPJDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3D67E0)
#define ALDJHCDPJDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D6AF0)
#define ALDJHCDPJDH_ILGGMHKCGDM_OFFSET UNITYSDK_OFFSET(0x1E3D67C0)
#define ALDJHCDPJDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D6670)
#define ALDJHCDPJDH_MALNDCCGLIJ_OFFSET UNITYSDK_OFFSET(0x1E3D67B0)
#define ALDJHCDPJDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D6E30)
#define ALDJHCDPJDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D6DA0)
#define ALDJHCDPJDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3D67D0)
#define ALDJHCDPJDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D66A0)
#define ALDJHCDPJDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D6B90)
#define ALDJHCDPJDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D6BF0)

inline static constexpr unsigned int ALDJHCDPJDH_TypeDefinitionIndex = 27399;

	class ALDJHCDPJDH : public ::System::Object
	{
	public:
		::Proto::ItemList* ILPNOOFIGGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ALDJHCDPJDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALDJHCDPJDH*>**)UnitySDK::FromName("", "ALDJHCDPJDH")->GetStaticField(0x37EA0);
		}

		// static const ::System::Object KJFLFOKAENK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALDJHCDPJDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALDJHCDPJDH*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDJHCDPJDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALDJHCDPJDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALDJHCDPJDH*>*(*)())((::PBYTE)hIl2Cpp + ALDJHCDPJDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALDJHCDPJDH* Clone()
		{
			return ((::ALDJHCDPJDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* MALNDCCGLIJ()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_MALNDCCGLIJ_OFFSET))(this);
		}

		::System::Void ILGGMHKCGDM(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_ILGGMHKCGDM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALDJHCDPJDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDJHCDPJDH*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALDJHCDPJDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALDJHCDPJDH*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALDJHCDPJDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
