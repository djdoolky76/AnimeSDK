#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JONNKENDDPG;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JONNKENDDPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77F9F0)
#define JONNKENDDPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77FDB0)
#define JONNKENDDPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77F3F0)
#define JONNKENDDPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77F360)
#define JONNKENDDPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77F350)
#define JONNKENDDPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77F680)
#define JONNKENDDPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77F4F0)
#define JONNKENDDPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E77F4E0)
#define JONNKENDDPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77F810)
#define JONNKENDDPG_IOBIJNKBMIN_OFFSET UNITYSDK_OFFSET(0x1E77F4C0)
#define JONNKENDDPG_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E77F490)
#define JONNKENDDPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77F310)
#define JONNKENDDPG_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E77F4A0)
#define JONNKENDDPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77FBE0)
#define JONNKENDDPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77FB40)
#define JONNKENDDPG_NJIDMPKENKB_OFFSET UNITYSDK_OFFSET(0x1E77F4B0)
#define JONNKENDDPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E77F4D0)
#define JONNKENDDPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77F340)
#define JONNKENDDPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77F850)
#define JONNKENDDPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77F8B0)

inline static constexpr unsigned int JONNKENDDPG_TypeDefinitionIndex = 31071;

	class JONNKENDDPG : public ::System::Object
	{
	public:
		::NEMIDPFEJFL* LLHLKDFMFMN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 KBBFPCGLDCN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JONNKENDDPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JONNKENDDPG*>**)UnitySDK::FromName("", "JONNKENDDPG")->GetStaticField(0x690F0);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object PDPIOIFCHBK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JONNKENDDPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JONNKENDDPG*))((::PBYTE)hIl2Cpp + JONNKENDDPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JONNKENDDPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JONNKENDDPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JONNKENDDPG*>*(*)())((::PBYTE)hIl2Cpp + JONNKENDDPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JONNKENDDPG* Clone()
		{
			return ((::JONNKENDDPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JONNKENDDPG_KAADEPADNMH_OFFSET))(this, a1);
		}

		::NEMIDPFEJFL* NJIDMPKENKB()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_NJIDMPKENKB_OFFSET))(this);
		}

		::System::Void IOBIJNKBMIN(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + JONNKENDDPG_IOBIJNKBMIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JONNKENDDPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JONNKENDDPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JONNKENDDPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JONNKENDDPG*))((::PBYTE)hIl2Cpp + JONNKENDDPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JONNKENDDPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JONNKENDDPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JONNKENDDPG*))((::PBYTE)hIl2Cpp + JONNKENDDPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JONNKENDDPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
