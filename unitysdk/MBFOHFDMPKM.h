#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBFOHFDMPKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBFOHFDMPKM_ADFCKBFGFOO_OFFSET UNITYSDK_OFFSET(0x1E9E4BF0)
#define MBFOHFDMPKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E5230)
#define MBFOHFDMPKM_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E9E4BD0)
#define MBFOHFDMPKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E5590)
#define MBFOHFDMPKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E4B70)
#define MBFOHFDMPKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E4B30)
#define MBFOHFDMPKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4B20)
#define MBFOHFDMPKM_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E9E4BE0)
#define MBFOHFDMPKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E4C80)
#define MBFOHFDMPKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E4C50)
#define MBFOHFDMPKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E4E90)
#define MBFOHFDMPKM_JGHCHNDKDJJ_OFFSET UNITYSDK_OFFSET(0x1E9E4C00)
#define MBFOHFDMPKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E4AE0)
#define MBFOHFDMPKM_KAHGBNPEKLF_OFFSET UNITYSDK_OFFSET(0x1E9E4C30)
#define MBFOHFDMPKM_KCFNEHJKGJM_OFFSET UNITYSDK_OFFSET(0x1E9E4C20)
#define MBFOHFDMPKM_LGFBJONKPJF_OFFSET UNITYSDK_OFFSET(0x1E9E4C40)
#define MBFOHFDMPKM_LHILHCALJPF_OFFSET UNITYSDK_OFFSET(0x1E9E4C10)
#define MBFOHFDMPKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E54F0)
#define MBFOHFDMPKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E5480)
#define MBFOHFDMPKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4B10)
#define MBFOHFDMPKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E4FF0)
#define MBFOHFDMPKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E5050)

inline static constexpr unsigned int MBFOHFDMPKM_TypeDefinitionIndex = 26049;

	class MBFOHFDMPKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 IJPFFIOLCCK; // 0x18
		::System::Int64 PIAHOGJEOPN; // 0x20
		::System::Double CKCDBGALABG; // 0x28
		::System::UInt32 NBFPOGFBMFE; // 0x30
		static ::Google::Protobuf::MessageParser_1<::MBFOHFDMPKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBFOHFDMPKM*>**)UnitySDK::FromName("", "MBFOHFDMPKM")->GetStaticField(0x44570);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object PMJNMGBMPKE; // 0x0
		// static const ::System::Object EDFBCMPNJMO; // 0x0
		// static const ::System::Object MDGLKOBOLHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBFOHFDMPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFOHFDMPKM*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBFOHFDMPKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBFOHFDMPKM*>*(*)())((::PBYTE)hIl2Cpp + MBFOHFDMPKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBFOHFDMPKM* Clone()
		{
			return ((::MBFOHFDMPKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Int64 ADFCKBFGFOO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_ADFCKBFGFOO_OFFSET))(this);
		}

		::System::Void JGHCHNDKDJJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_JGHCHNDKDJJ_OFFSET))(this, a1);
		}

		::System::Double LHILHCALJPF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_LHILHCALJPF_OFFSET))(this);
		}

		::System::Void KCFNEHJKGJM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_KCFNEHJKGJM_OFFSET))(this, a1);
		}

		::System::UInt64 KAHGBNPEKLF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_KAHGBNPEKLF_OFFSET))(this);
		}

		::System::Void LGFBJONKPJF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_LGFBJONKPJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBFOHFDMPKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBFOHFDMPKM*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBFOHFDMPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFOHFDMPKM*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBFOHFDMPKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
