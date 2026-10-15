#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEGGFFOMKI;
class NEAMMJICKGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEAMMJICKGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC1910)
#define NEAMMJICKGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1CB0)
#define NEAMMJICKGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC1350)
#define NEAMMJICKGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC12D0)
#define NEAMMJICKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC12C0)
#define NEAMMJICKGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC15A0)
#define NEAMMJICKGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC1420)
#define NEAMMJICKGD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAC13F0)
#define NEAMMJICKGD_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1EAC1410)
#define NEAMMJICKGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC1720)
#define NEAMMJICKGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC1280)
#define NEAMMJICKGD_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1EAC1400)
#define NEAMMJICKGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC1AC0)
#define NEAMMJICKGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC19E0)
#define NEAMMJICKGD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAC13E0)
#define NEAMMJICKGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC12B0)
#define NEAMMJICKGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC17D0)
#define NEAMMJICKGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC1830)

inline static constexpr unsigned int NEAMMJICKGD_TypeDefinitionIndex = 27092;

	class NEAMMJICKGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DFEGGFFOMKI* GDLOOLAHGPP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NEAMMJICKGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEAMMJICKGD*>**)UnitySDK::FromName("", "NEAMMJICKGD")->GetStaticField(0x60220);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JDLHDMKEFKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEAMMJICKGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEAMMJICKGD*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEAMMJICKGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEAMMJICKGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEAMMJICKGD*>*(*)())((::PBYTE)hIl2Cpp + NEAMMJICKGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEAMMJICKGD* Clone()
		{
			return ((::NEAMMJICKGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAMMJICKGD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::DFEGGFFOMKI* KAFMPINCMJJ()
		{
			return ((::DFEGGFFOMKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::DFEGGFFOMKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFEGGFFOMKI*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEAMMJICKGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEAMMJICKGD*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEAMMJICKGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEAMMJICKGD*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEAMMJICKGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
