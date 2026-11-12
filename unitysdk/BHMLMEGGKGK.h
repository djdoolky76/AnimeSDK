#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMLMEGGKGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHMLMEGGKGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F00A2E0)
#define BHMLMEGGKGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F00A490)
#define BHMLMEGGKGK_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1F009E00)
#define BHMLMEGGKGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F009DC0)
#define BHMLMEGGKGK_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x1F009E30)
#define BHMLMEGGKGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F009D20)
#define BHMLMEGGKGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F009CD0)
#define BHMLMEGGKGK_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1F009DF0)
#define BHMLMEGGKGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F009ED0)
#define BHMLMEGGKGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F009E40)
#define BHMLMEGGKGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F009FE0)
#define BHMLMEGGKGK_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x1F009E20)
#define BHMLMEGGKGK_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1F009E10)
#define BHMLMEGGKGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F009C90)
#define BHMLMEGGKGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F00A3C0)
#define BHMLMEGGKGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F00A360)
#define BHMLMEGGKGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F009CC0)
#define BHMLMEGGKGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F00A0E0)
#define BHMLMEGGKGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F00A140)

inline static constexpr unsigned int BHMLMEGGKGK_TypeDefinitionIndex = 31046;

	class BHMLMEGGKGK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean DKDLLJDGCCB; // 0x20
		::System::Boolean AIGHAPALCNE; // 0x21
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BHMLMEGGKGK")->GetStaticField(0x48F00);
		}

		static ::Google::Protobuf::MessageParser_1<::BHMLMEGGKGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHMLMEGGKGK*>**)UnitySDK::FromName("", "BHMLMEGGKGK")->GetStaticField(0x48F08);
		}

		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object HBDALMDHLKJ; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::BHMLMEGGKGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHMLMEGGKGK*>*(*)())((::PBYTE)hIl2Cpp + BHMLMEGGKGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHMLMEGGKGK* Clone()
		{
			return ((::BHMLMEGGKGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_EPFDENEPLOL_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHMLMEGGKGK_JBBMHOFGHGA_OFFSET))(this, a1);
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
