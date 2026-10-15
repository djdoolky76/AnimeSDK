#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
class GAEBCDPICNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAEBCDPICNH_APIFCJPPAKM_OFFSET UNITYSDK_OFFSET(0x1E417830)
#define GAEBCDPICNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E417DE0)
#define GAEBCDPICNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4180A0)
#define GAEBCDPICNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E417790)
#define GAEBCDPICNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E417730)
#define GAEBCDPICNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E417720)
#define GAEBCDPICNH_EKNBGHIKMOO_OFFSET UNITYSDK_OFFSET(0x1E417870)
#define GAEBCDPICNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E417940)
#define GAEBCDPICNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4178A0)
#define GAEBCDPICNH_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1E417840)
#define GAEBCDPICNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E417A60)
#define GAEBCDPICNH_GKJCHGLKLFD_OFFSET UNITYSDK_OFFSET(0x1E417800)
#define GAEBCDPICNH_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0x1E417890)
#define GAEBCDPICNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4176E0)
#define GAEBCDPICNH_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0x1E417880)
#define GAEBCDPICNH_KFHFLEDANCO_OFFSET UNITYSDK_OFFSET(0x1E417820)
#define GAEBCDPICNH_KGBOJMLAKCG_OFFSET UNITYSDK_OFFSET(0x1E417860)
#define GAEBCDPICNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E417FB0)
#define GAEBCDPICNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E417F00)
#define GAEBCDPICNH_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1E417850)
#define GAEBCDPICNH_OAGIHCDJECK_OFFSET UNITYSDK_OFFSET(0x1E417810)
#define GAEBCDPICNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E417710)
#define GAEBCDPICNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E417AD0)
#define GAEBCDPICNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E417B30)

inline static constexpr unsigned int GAEBCDPICNH_TypeDefinitionIndex = 26152;

	class GAEBCDPICNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CIOMBHPBEDG* OKIHOBBKOIB; // 0x18
		::FKNKNLGMACL CNKEBBBFBDC; // 0x20
		::System::Boolean DJMLNIINEPP; // 0x24
		::System::Boolean AIHHNNCBHNP; // 0x25
		::System::Boolean KDMKAOBIIEK; // 0x26
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAEBCDPICNH")->GetStaticField(0x1F60);
		}

		// static const ::System::Object NBECCPJOGDD; // 0x0
		// static const ::System::Object FDMFDFDLEPL; // 0x0
		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object MGFEPAKFINJ; // 0x0
		// static const ::System::Object ACMKCHGNLAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAEBCDPICNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAEBCDPICNH*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEBCDPICNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAEBCDPICNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAEBCDPICNH* Clone()
		{
			return ((::GAEBCDPICNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_CLONE_OFFSET))(this);
		}

		::System::Boolean GKJCHGLKLFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_GKJCHGLKLFD_OFFSET))(this);
		}

		::System::Void OAGIHCDJECK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAEBCDPICNH_OAGIHCDJECK_OFFSET))(this, a1);
		}

		::System::Boolean KFHFLEDANCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_KFHFLEDANCO_OFFSET))(this);
		}

		::System::Void APIFCJPPAKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAEBCDPICNH_APIFCJPPAKM_OFFSET))(this, a1);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + GAEBCDPICNH_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::Boolean KGBOJMLAKCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_KGBOJMLAKCG_OFFSET))(this);
		}

		::System::Void EKNBGHIKMOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAEBCDPICNH_EKNBGHIKMOO_OFFSET))(this, a1);
		}

		::CIOMBHPBEDG* KCEDLPGDJLN()
		{
			return ((::CIOMBHPBEDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::CIOMBHPBEDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOMBHPBEDG*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAEBCDPICNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAEBCDPICNH*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAEBCDPICNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAEBCDPICNH*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAEBCDPICNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
