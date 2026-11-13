#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMDCEDDJGDD.h"
#include "unitysdk/System/Object.h"
class GFDCKPPKGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFDCKPPKGAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200762B0)
#define GFDCKPPKGAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x200765C0)
#define GFDCKPPKGAC_CLONE_OFFSET UNITYSDK_OFFSET(0x20075DC0)
#define GFDCKPPKGAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20075D80)
#define GFDCKPPKGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x20075D70)
#define GFDCKPPKGAC_DOOIFNDMECH_OFFSET UNITYSDK_OFFSET(0x20075E50)
#define GFDCKPPKGAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20075FA0)
#define GFDCKPPKGAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x20075EA0)
#define GFDCKPPKGAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200760A0)
#define GFDCKPPKGAC_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x20075E30)
#define GFDCKPPKGAC_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x20075E20)
#define GFDCKPPKGAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20075D30)
#define GFDCKPPKGAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20076410)
#define GFDCKPPKGAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200763C0)
#define GFDCKPPKGAC_NEIIJKIMNJJ_OFFSET UNITYSDK_OFFSET(0x20075E40)
#define GFDCKPPKGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20075D60)
#define GFDCKPPKGAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20076150)
#define GFDCKPPKGAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x200761B0)

inline static constexpr unsigned int GFDCKPPKGAC_TypeDefinitionIndex = 33029;

	class GFDCKPPKGAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* POPGGFHHDOE; // 0x18
		::PMDCEDDJGDD GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GFDCKPPKGAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFDCKPPKGAC*>**)UnitySDK::FromName("", "GFDCKPPKGAC")->GetStaticField(0xA720);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object CJMBAOCCLIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFDCKPPKGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDCKPPKGAC*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFDCKPPKGAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFDCKPPKGAC*>*(*)())((::PBYTE)hIl2Cpp + GFDCKPPKGAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFDCKPPKGAC* Clone()
		{
			return ((::GFDCKPPKGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CLONE_OFFSET))(this);
		}

		::PMDCEDDJGDD JBIOGKPHKKC()
		{
			return ((::PMDCEDDJGDD(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::PMDCEDDJGDD a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMDCEDDJGDD))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::String* NEIIJKIMNJJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_NEIIJKIMNJJ_OFFSET))(this);
		}

		::System::Void DOOIFNDMECH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_DOOIFNDMECH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFDCKPPKGAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFDCKPPKGAC*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFDCKPPKGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDCKPPKGAC*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
