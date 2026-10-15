#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMLMEGGKGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHMLMEGGKGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFBCA0)
#define BHMLMEGGKGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFBE50)
#define BHMLMEGGKGK_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1DDFB7B0)
#define BHMLMEGGKGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFB780)
#define BHMLMEGGKGK_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x1DDFB7F0)
#define BHMLMEGGKGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFB6E0)
#define BHMLMEGGKGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB690)
#define BHMLMEGGKGK_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1DDFB7D0)
#define BHMLMEGGKGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFB890)
#define BHMLMEGGKGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFB800)
#define BHMLMEGGKGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFB9A0)
#define BHMLMEGGKGK_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x1DDFB7E0)
#define BHMLMEGGKGK_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1DDFB7C0)
#define BHMLMEGGKGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFB650)
#define BHMLMEGGKGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFBD80)
#define BHMLMEGGKGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFBD20)
#define BHMLMEGGKGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB680)
#define BHMLMEGGKGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFBAA0)
#define BHMLMEGGKGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFBB00)

inline static constexpr unsigned int BHMLMEGGKGK_TypeDefinitionIndex = 30148;

	class BHMLMEGGKGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x18
		::System::Boolean AIGHAPALCNE; // 0x20
		::System::Boolean DKDLLJDGCCB; // 0x21
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHMLMEGGKGK")->GetStaticField(0x46CB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BHMLMEGGKGK")->GetStaticField(0x46CB8);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object DGBMBFCBOMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHMLMEGGKGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMLMEGGKGK*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHMLMEGGKGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHMLMEGGKGK* Clone()
		{
			return ((::BHMLMEGGKGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_EPFDENEPLOL_OFFSET))(this);
		}

		::System::Boolean GOBCLJFPCAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_GOBCLJFPCAF_OFFSET))(this);
		}

		::System::Void COOJCNNMGGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_COOJCNNMGGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHMLMEGGKGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHMLMEGGKGK*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHMLMEGGKGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMLMEGGKGK*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
