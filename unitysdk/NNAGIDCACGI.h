#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGIDCACGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNAGIDCACGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEDB6E0)
#define NNAGIDCACGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEDBA80)
#define NNAGIDCACGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEDB2C0)
#define NNAGIDCACGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEDB280)
#define NNAGIDCACGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEDB270)
#define NNAGIDCACGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEDB450)
#define NNAGIDCACGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEDB370)
#define NNAGIDCACGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FEDB360)
#define NNAGIDCACGI_FBDKEAIFHIL_OFFSET UNITYSDK_OFFSET(0x1FEDB330)
#define NNAGIDCACGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEDB520)
#define NNAGIDCACGI_ICIMDGPPLGN_OFFSET UNITYSDK_OFFSET(0x1FEDB340)
#define NNAGIDCACGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEDB230)
#define NNAGIDCACGI_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1FEDB320)
#define NNAGIDCACGI_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1FEDB310)
#define NNAGIDCACGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEDB8C0)
#define NNAGIDCACGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEDB870)
#define NNAGIDCACGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FEDB350)
#define NNAGIDCACGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEDB260)
#define NNAGIDCACGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEDB550)
#define NNAGIDCACGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEDB5B0)

inline static constexpr unsigned int NNAGIDCACGI_TypeDefinitionIndex = 27968;

	class NNAGIDCACGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MJGHODIGFNF; // 0x1C
		::System::UInt32 ANAADAMGEKG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NNAGIDCACGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNAGIDCACGI*>**)UnitySDK::FromName("", "NNAGIDCACGI")->GetStaticField(0x50460);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		// static const ::System::Object PMKNKLCBDBJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNAGIDCACGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAGIDCACGI*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAGIDCACGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNAGIDCACGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNAGIDCACGI*>*(*)())((::PBYTE)hIl2Cpp + NNAGIDCACGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNAGIDCACGI* Clone()
		{
			return ((::NNAGIDCACGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNAGIDCACGI_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::UInt32 FBDKEAIFHIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_FBDKEAIFHIL_OFFSET))(this);
		}

		::System::Void ICIMDGPPLGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNAGIDCACGI_ICIMDGPPLGN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNAGIDCACGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNAGIDCACGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNAGIDCACGI*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNAGIDCACGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAGIDCACGI*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNAGIDCACGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
