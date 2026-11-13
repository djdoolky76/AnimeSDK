#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDJKLJDMJHO;
class JBOBHIPHGPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDJKLJDMJHO_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x204BC3D0)
#define CDJKLJDMJHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204BC8A0)
#define CDJKLJDMJHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x204BCCA0)
#define CDJKLJDMJHO_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x204BC3E0)
#define CDJKLJDMJHO_CLONE_OFFSET UNITYSDK_OFFSET(0x204BC330)
#define CDJKLJDMJHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204BC2A0)
#define CDJKLJDMJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x204BC290)
#define CDJKLJDMJHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204BC590)
#define CDJKLJDMJHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x204BC410)
#define CDJKLJDMJHO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x204BC400)
#define CDJKLJDMJHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204BC710)
#define CDJKLJDMJHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204BC250)
#define CDJKLJDMJHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204BCAB0)
#define CDJKLJDMJHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204BC970)
#define CDJKLJDMJHO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x204BC3F0)
#define CDJKLJDMJHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204BC280)
#define CDJKLJDMJHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204BC760)
#define CDJKLJDMJHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x204BC7C0)

inline static constexpr unsigned int CDJKLJDMJHO_TypeDefinitionIndex = 31571;

	class CDJKLJDMJHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JBOBHIPHGPB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CDJKLJDMJHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDJKLJDMJHO*>**)UnitySDK::FromName("", "CDJKLJDMJHO")->GetStaticField(0x62230);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDJKLJDMJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDJKLJDMJHO*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDJKLJDMJHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDJKLJDMJHO*>*(*)())((::PBYTE)hIl2Cpp + CDJKLJDMJHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDJKLJDMJHO* Clone()
		{
			return ((::CDJKLJDMJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CLONE_OFFSET))(this);
		}

		::JBOBHIPHGPB* BGEMDHNDOBP()
		{
			return ((::JBOBHIPHGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::JBOBHIPHGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDJKLJDMJHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDJKLJDMJHO*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDJKLJDMJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDJKLJDMJHO*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDJKLJDMJHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
