#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class NKEGPAOCGCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKEGPAOCGCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB57420)
#define NKEGPAOCGCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB57800)
#define NKEGPAOCGCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB56E20)
#define NKEGPAOCGCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB56DA0)
#define NKEGPAOCGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB56D90)
#define NKEGPAOCGCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB57060)
#define NKEGPAOCGCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB56F30)
#define NKEGPAOCGCJ_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1EB56F00)
#define NKEGPAOCGCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB571F0)
#define NKEGPAOCGCJ_IFKGDPPBDEJ_OFFSET UNITYSDK_OFFSET(0x1EB56ED0)
#define NKEGPAOCGCJ_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1EB56F20)
#define NKEGPAOCGCJ_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1EB56F10)
#define NKEGPAOCGCJ_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1EB56EF0)
#define NKEGPAOCGCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB56D20)
#define NKEGPAOCGCJ_JOAFKOHBCGK_OFFSET UNITYSDK_OFFSET(0x1EB56EE0)
#define NKEGPAOCGCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB57620)
#define NKEGPAOCGCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB57580)
#define NKEGPAOCGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB56D80)
#define NKEGPAOCGCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB57280)
#define NKEGPAOCGCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB572E0)

inline static constexpr unsigned int NKEGPAOCGCJ_TypeDefinitionIndex = 28036;

	class NKEGPAOCGCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* FALCONHOFNM; // 0x18
		::System::UInt32 EHCFPHJABDL; // 0x20
		::System::UInt32 AJPNGCJCMEB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::NKEGPAOCGCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKEGPAOCGCJ*>**)UnitySDK::FromName("", "NKEGPAOCGCJ")->GetStaticField(0x57BE0);
		}

		// static const ::System::Object FGDMAHNNGPI; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKEGPAOCGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKEGPAOCGCJ*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKEGPAOCGCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKEGPAOCGCJ*>*(*)())((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKEGPAOCGCJ* Clone()
		{
			return ((::NKEGPAOCGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* IFKGDPPBDEJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_IFKGDPPBDEJ_OFFSET))(this);
		}

		::System::Void JOAFKOHBCGK(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_JOAFKOHBCGK_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKEGPAOCGCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKEGPAOCGCJ*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKEGPAOCGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKEGPAOCGCJ*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
