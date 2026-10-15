#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPPICAMLGNB;
class GGHOBPBFFOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPPICAMLGNB_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E052040)
#define BPPICAMLGNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0524E0)
#define BPPICAMLGNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0528A0)
#define BPPICAMLGNB_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E052050)
#define BPPICAMLGNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E051F90)
#define BPPICAMLGNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E051F10)
#define BPPICAMLGNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E051F00)
#define BPPICAMLGNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0521E0)
#define BPPICAMLGNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E052060)
#define BPPICAMLGNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E052030)
#define BPPICAMLGNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E052360)
#define BPPICAMLGNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E051EC0)
#define BPPICAMLGNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0526A0)
#define BPPICAMLGNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0525B0)
#define BPPICAMLGNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E052020)
#define BPPICAMLGNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E051EF0)
#define BPPICAMLGNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0523A0)
#define BPPICAMLGNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E052400)

inline static constexpr unsigned int BPPICAMLGNB_TypeDefinitionIndex = 35109;

	class BPPICAMLGNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPPICAMLGNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPPICAMLGNB*>**)UnitySDK::FromName("", "BPPICAMLGNB")->GetStaticField(0x55C50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAHAEFHMLHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPPICAMLGNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPPICAMLGNB*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPPICAMLGNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPPICAMLGNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPPICAMLGNB*>*(*)())((::PBYTE)hIl2Cpp + BPPICAMLGNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPPICAMLGNB* Clone()
		{
			return ((::BPPICAMLGNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPPICAMLGNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPPICAMLGNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPPICAMLGNB*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPPICAMLGNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPPICAMLGNB*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPPICAMLGNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
