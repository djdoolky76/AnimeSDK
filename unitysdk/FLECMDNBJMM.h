#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class FLECMDNBJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLECMDNBJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B8D70)
#define FLECMDNBJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B9080)
#define FLECMDNBJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B89B0)
#define FLECMDNBJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B8980)
#define FLECMDNBJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B8970)
#define FLECMDNBJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B8B20)
#define FLECMDNBJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B8A40)
#define FLECMDNBJMM_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1E3B8A00)
#define FLECMDNBJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B8BF0)
#define FLECMDNBJMM_IGIFHDNDHMH_OFFSET UNITYSDK_OFFSET(0x1E3B8A30)
#define FLECMDNBJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B8930)
#define FLECMDNBJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B8F00)
#define FLECMDNBJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B8EC0)
#define FLECMDNBJMM_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1E3B8A10)
#define FLECMDNBJMM_OGIOEDIJGLH_OFFSET UNITYSDK_OFFSET(0x1E3B8A20)
#define FLECMDNBJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B8960)
#define FLECMDNBJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B8C20)
#define FLECMDNBJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B8C80)

inline static constexpr unsigned int FLECMDNBJMM_TypeDefinitionIndex = 26178;

	class FLECMDNBJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FKNKNLGMACL CNKEBBBFBDC; // 0x18
		::System::UInt32 JIMIHJLDNHA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FLECMDNBJMM")->GetStaticField(0x64290);
		}

		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object JFJBHJHHILJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLECMDNBJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLECMDNBJMM*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLECMDNBJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FLECMDNBJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLECMDNBJMM* Clone()
		{
			return ((::FLECMDNBJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_CLONE_OFFSET))(this);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + FLECMDNBJMM_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::UInt32 OGIOEDIJGLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_OGIOEDIJGLH_OFFSET))(this);
		}

		::System::Void IGIFHDNDHMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLECMDNBJMM_IGIFHDNDHMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLECMDNBJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLECMDNBJMM*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLECMDNBJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLECMDNBJMM*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLECMDNBJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
