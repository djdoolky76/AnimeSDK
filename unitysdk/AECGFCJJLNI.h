#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECGFCJJLNI;
class KPPJOPMMLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AECGFCJJLNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFECAA0)
#define AECGFCJJLNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFECE90)
#define AECGFCJJLNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFEC490)
#define AECGFCJJLNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFEC400)
#define AECGFCJJLNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEC3F0)
#define AECGFCJJLNI_DAMBBCHCGPA_OFFSET UNITYSDK_OFFSET(0x1EFEC5C0)
#define AECGFCJJLNI_DOFNKAFODAA_OFFSET UNITYSDK_OFFSET(0x1EFEC5A0)
#define AECGFCJJLNI_EICJLDDNKHK_OFFSET UNITYSDK_OFFSET(0x1EFEC5B0)
#define AECGFCJJLNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFEC700)
#define AECGFCJJLNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFEC5D0)
#define AECGFCJJLNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFEC880)
#define AECGFCJJLNI_HDNGHEOPBJD_OFFSET UNITYSDK_OFFSET(0x1EFEC570)
#define AECGFCJJLNI_JFIKHOIMGMO_OFFSET UNITYSDK_OFFSET(0x1EFEC590)
#define AECGFCJJLNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFEC380)
#define AECGFCJJLNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFECC40)
#define AECGFCJJLNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFECB80)
#define AECGFCJJLNI_NCKHPMJHFBG_OFFSET UNITYSDK_OFFSET(0x1EFEC580)
#define AECGFCJJLNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFEC3E0)
#define AECGFCJJLNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFEC8D0)
#define AECGFCJJLNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFEC930)

inline static constexpr unsigned int AECGFCJJLNI_TypeDefinitionIndex = 26278;

	class AECGFCJJLNI : public ::System::Object
	{
	public:
		::KPPJOPMMLOA* LICDHONANLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FIFPPGDNAPF; // 0x20
		::System::Boolean LBMJFDBMCFD; // 0x24
		static ::Google::Protobuf::MessageParser_1<::AECGFCJJLNI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AECGFCJJLNI*>**)UnitySDK::FromName("", "AECGFCJJLNI")->GetStaticField(0x38490);
		}

		// static const ::System::Object KFBCBGOHJGG; // 0x0
		// static const ::System::Object JIKOOJNKGHN; // 0x0
		// static const ::System::Object GEOMAHCIHMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AECGFCJJLNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AECGFCJJLNI*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AECGFCJJLNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AECGFCJJLNI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AECGFCJJLNI*>*(*)())((::PBYTE)hIl2Cpp + AECGFCJJLNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AECGFCJJLNI* Clone()
		{
			return ((::AECGFCJJLNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_CLONE_OFFSET))(this);
		}

		::System::UInt32 HDNGHEOPBJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_HDNGHEOPBJD_OFFSET))(this);
		}

		::System::Void NCKHPMJHFBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AECGFCJJLNI_NCKHPMJHFBG_OFFSET))(this, a1);
		}

		::System::Boolean JFIKHOIMGMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_JFIKHOIMGMO_OFFSET))(this);
		}

		::System::Void DOFNKAFODAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AECGFCJJLNI_DOFNKAFODAA_OFFSET))(this, a1);
		}

		::KPPJOPMMLOA* EICJLDDNKHK()
		{
			return ((::KPPJOPMMLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_EICJLDDNKHK_OFFSET))(this);
		}

		::System::Void DAMBBCHCGPA(::KPPJOPMMLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPJOPMMLOA*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_DAMBBCHCGPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AECGFCJJLNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AECGFCJJLNI*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AECGFCJJLNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AECGFCJJLNI*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AECGFCJJLNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
