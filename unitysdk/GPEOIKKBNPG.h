#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPEOIKKBNPG;
class MANINNKMFHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPEOIKKBNPG_ALHMOJMJOKN_OFFSET UNITYSDK_OFFSET(0x1E4F78C0)
#define GPEOIKKBNPG_CAEHAPGJBIP_OFFSET UNITYSDK_OFFSET(0x1E4F78B0)
#define GPEOIKKBNPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F7D90)
#define GPEOIKKBNPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F80A0)
#define GPEOIKKBNPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F7830)
#define GPEOIKKBNPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F77E0)
#define GPEOIKKBNPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F77D0)
#define GPEOIKKBNPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F7A50)
#define GPEOIKKBNPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F78D0)
#define GPEOIKKBNPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4F78A0)
#define GPEOIKKBNPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F7BD0)
#define GPEOIKKBNPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F7790)
#define GPEOIKKBNPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F7EF0)
#define GPEOIKKBNPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F7E60)
#define GPEOIKKBNPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4F7890)
#define GPEOIKKBNPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F77C0)
#define GPEOIKKBNPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F7C50)
#define GPEOIKKBNPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F7CB0)

inline static constexpr unsigned int GPEOIKKBNPG_TypeDefinitionIndex = 27443;

	class GPEOIKKBNPG : public ::System::Object
	{
	public:
		::MANINNKMFHG* FGOINBLCEJK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GPEOIKKBNPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPEOIKKBNPG*>**)UnitySDK::FromName("", "GPEOIKKBNPG")->GetStaticField(0x2B890);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DJMNEFOAEEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPEOIKKBNPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPEOIKKBNPG*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPEOIKKBNPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPEOIKKBNPG*>*(*)())((::PBYTE)hIl2Cpp + GPEOIKKBNPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPEOIKKBNPG* Clone()
		{
			return ((::GPEOIKKBNPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::MANINNKMFHG* CAEHAPGJBIP()
		{
			return ((::MANINNKMFHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CAEHAPGJBIP_OFFSET))(this);
		}

		::System::Void ALHMOJMJOKN(::MANINNKMFHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_ALHMOJMJOKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPEOIKKBNPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPEOIKKBNPG*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPEOIKKBNPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPEOIKKBNPG*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPEOIKKBNPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
