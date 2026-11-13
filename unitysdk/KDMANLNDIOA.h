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

#define KDMANLNDIOA_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x203CC450)
#define KDMANLNDIOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203CC8F0)
#define KDMANLNDIOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x203CCCB0)
#define KDMANLNDIOA_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x203CC460)
#define KDMANLNDIOA_CLONE_OFFSET UNITYSDK_OFFSET(0x203CC3A0)
#define KDMANLNDIOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203CC320)
#define KDMANLNDIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x203CC310)
#define KDMANLNDIOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203CC5F0)
#define KDMANLNDIOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x203CC470)
#define KDMANLNDIOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203CC440)
#define KDMANLNDIOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203CC770)
#define KDMANLNDIOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203CC2D0)
#define KDMANLNDIOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203CCAB0)
#define KDMANLNDIOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203CC9C0)
#define KDMANLNDIOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203CC430)
#define KDMANLNDIOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203CC300)
#define KDMANLNDIOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203CC7B0)
#define KDMANLNDIOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x203CC810)

inline static constexpr unsigned int KDMANLNDIOA_TypeDefinitionIndex = 36041;

	class KDMANLNDIOA : public ::System::Object
	{
	public:
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDMANLNDIOA*>**)UnitySDK::FromName("", "KDMANLNDIOA")->GetStaticField(0x6F070);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAHAEFHMLHD; // 0x0
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

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMANLNDIOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + KDMANLNDIOA_CKPMCBGJBDA_OFFSET))(this, a1);
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
