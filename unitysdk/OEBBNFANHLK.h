#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEBBNFANHLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEBBNFANHLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF59D0)
#define OEBBNFANHLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF5C50)
#define OEBBNFANHLK_CLBKKHODNAI_OFFSET UNITYSDK_OFFSET(0x1DDF54F0)
#define OEBBNFANHLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF5450)
#define OEBBNFANHLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF5410)
#define OEBBNFANHLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF5400)
#define OEBBNFANHLK_EPOODNCPMMM_OFFSET UNITYSDK_OFFSET(0x1DDF5500)
#define OEBBNFANHLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF5570)
#define OEBBNFANHLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF5510)
#define OEBBNFANHLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF5760)
#define OEBBNFANHLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF5390)
#define OEBBNFANHLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF5AD0)
#define OEBBNFANHLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF5A80)
#define OEBBNFANHLK_NELJKMIEDNA_OFFSET UNITYSDK_OFFSET(0x1DDF54E0)
#define OEBBNFANHLK_NFPGDBMFLEO_OFFSET UNITYSDK_OFFSET(0x1DDF54D0)
#define OEBBNFANHLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF53F0)
#define OEBBNFANHLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF5880)
#define OEBBNFANHLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF58E0)

inline static constexpr unsigned int OEBBNFANHLK_TypeDefinitionIndex = 25580;

	class OEBBNFANHLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double CIKKGACAMHD; // 0x18
		::System::UInt32 FNLBCPOJPFA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OEBBNFANHLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEBBNFANHLK*>**)UnitySDK::FromName("", "OEBBNFANHLK")->GetStaticField(0x12D90);
		}

		// static const ::System::Object DMKBEENJHII; // 0x0
		// static const ::System::Object HDFNJDADLEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEBBNFANHLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEBBNFANHLK*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEBBNFANHLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEBBNFANHLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEBBNFANHLK*>*(*)())((::PBYTE)hIl2Cpp + OEBBNFANHLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEBBNFANHLK* Clone()
		{
			return ((::OEBBNFANHLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFPGDBMFLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_NFPGDBMFLEO_OFFSET))(this);
		}

		::System::Void NELJKMIEDNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEBBNFANHLK_NELJKMIEDNA_OFFSET))(this, a1);
		}

		::System::Double CLBKKHODNAI()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_CLBKKHODNAI_OFFSET))(this);
		}

		::System::Void EPOODNCPMMM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OEBBNFANHLK_EPOODNCPMMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEBBNFANHLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEBBNFANHLK*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEBBNFANHLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEBBNFANHLK*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEBBNFANHLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
