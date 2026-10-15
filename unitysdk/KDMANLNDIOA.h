#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
class KDMANLNDIOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDMANLNDIOA_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E802A40)
#define KDMANLNDIOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E802F10)
#define KDMANLNDIOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8032D0)
#define KDMANLNDIOA_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E802A50)
#define KDMANLNDIOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8029A0)
#define KDMANLNDIOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E802910)
#define KDMANLNDIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E802900)
#define KDMANLNDIOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E802C00)
#define KDMANLNDIOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E802A80)
#define KDMANLNDIOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E802A70)
#define KDMANLNDIOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E802D80)
#define KDMANLNDIOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8028C0)
#define KDMANLNDIOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8030D0)
#define KDMANLNDIOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E802FE0)
#define KDMANLNDIOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E802A60)
#define KDMANLNDIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8028F0)
#define KDMANLNDIOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E802DD0)
#define KDMANLNDIOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E802E30)

inline static constexpr unsigned int KDMANLNDIOA_TypeDefinitionIndex = 35113;

	class KDMANLNDIOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>**)UnitySDK::FromName("", "KDMANLNDIOA")->GetStaticField(0x11240);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDMANLNDIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMANLNDIOA*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMANLNDIOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>*(*)())((::PBYTE)hIl2Cpp + KDMANLNDIOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDMANLNDIOA* Clone()
		{
			return ((::KDMANLNDIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CLONE_OFFSET))(this);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMANLNDIOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDMANLNDIOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDMANLNDIOA*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDMANLNDIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMANLNDIOA*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
