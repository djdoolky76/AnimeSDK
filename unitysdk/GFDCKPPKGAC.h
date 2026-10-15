#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMDCEDDJGDD.h"
#include "unitysdk/System/Object.h"
class GFDCKPPKGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFDCKPPKGAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E462CB0)
#define GFDCKPPKGAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E462FE0)
#define GFDCKPPKGAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4627A0)
#define GFDCKPPKGAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E462760)
#define GFDCKPPKGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E462750)
#define GFDCKPPKGAC_DOOIFNDMECH_OFFSET UNITYSDK_OFFSET(0x1E462810)
#define GFDCKPPKGAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E462980)
#define GFDCKPPKGAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E462880)
#define GFDCKPPKGAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E462A80)
#define GFDCKPPKGAC_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E462870)
#define GFDCKPPKGAC_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E462860)
#define GFDCKPPKGAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E462710)
#define GFDCKPPKGAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E462E30)
#define GFDCKPPKGAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E462DE0)
#define GFDCKPPKGAC_NEIIJKIMNJJ_OFFSET UNITYSDK_OFFSET(0x1E462800)
#define GFDCKPPKGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E462740)
#define GFDCKPPKGAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E462B50)
#define GFDCKPPKGAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E462BB0)

inline static constexpr unsigned int GFDCKPPKGAC_TypeDefinitionIndex = 32116;

	class GFDCKPPKGAC : public ::System::Object
	{
	public:
		::System::String* POPGGFHHDOE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PMDCEDDJGDD GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFDCKPPKGAC")->GetStaticField(0x130A0);
		}

		// static const ::System::Object CJMBAOCCLIJ; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFDCKPPKGAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFDCKPPKGAC* Clone()
		{
			return ((::GFDCKPPKGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_CLONE_OFFSET))(this);
		}

		::System::String* NEIIJKIMNJJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_NEIIJKIMNJJ_OFFSET))(this);
		}

		::System::Void DOOIFNDMECH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_DOOIFNDMECH_OFFSET))(this, a1);
		}

		::PMDCEDDJGDD JBIOGKPHKKC()
		{
			return ((::PMDCEDDJGDD(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::PMDCEDDJGDD a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMDCEDDJGDD))((::PBYTE)hIl2Cpp + GFDCKPPKGAC_IGMALHMOLNF_OFFSET))(this, a1);
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
