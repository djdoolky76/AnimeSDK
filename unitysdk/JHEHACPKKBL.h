#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOBHIPHGPB;
class JHEHACPKKBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHEHACPKKBL_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E743FA0)
#define JHEHACPKKBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E744470)
#define JHEHACPKKBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E744870)
#define JHEHACPKKBL_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E743FB0)
#define JHEHACPKKBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E743F00)
#define JHEHACPKKBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E743E70)
#define JHEHACPKKBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E743E60)
#define JHEHACPKKBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E744160)
#define JHEHACPKKBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E743FE0)
#define JHEHACPKKBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E743FD0)
#define JHEHACPKKBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7442E0)
#define JHEHACPKKBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E743E20)
#define JHEHACPKKBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E744680)
#define JHEHACPKKBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E744540)
#define JHEHACPKKBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E743FC0)
#define JHEHACPKKBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E743E50)
#define JHEHACPKKBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E744330)
#define JHEHACPKKBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E744390)

inline static constexpr unsigned int JHEHACPKKBL_TypeDefinitionIndex = 30669;

	class JHEHACPKKBL : public ::System::Object
	{
	public:
		::JBOBHIPHGPB* NIBJKKOGKAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JHEHACPKKBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHEHACPKKBL*>**)UnitySDK::FromName("", "JHEHACPKKBL")->GetStaticField(0x61090);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHEHACPKKBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHEHACPKKBL*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHEHACPKKBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHEHACPKKBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHEHACPKKBL*>*(*)())((::PBYTE)hIl2Cpp + JHEHACPKKBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHEHACPKKBL* Clone()
		{
			return ((::JHEHACPKKBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_CLONE_OFFSET))(this);
		}

		::JBOBHIPHGPB* BGEMDHNDOBP()
		{
			return ((::JBOBHIPHGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::JBOBHIPHGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHEHACPKKBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHEHACPKKBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHEHACPKKBL*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHEHACPKKBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHEHACPKKBL*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHEHACPKKBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
