#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHDAMJJFOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEHDAMJJFOE_BNOCIMHIBHD_OFFSET UNITYSDK_OFFSET(0x1E065DE0)
#define CEHDAMJJFOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E066150)
#define CEHDAMJJFOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0664D0)
#define CEHDAMJJFOE_CFOLEBCJMHB_OFFSET UNITYSDK_OFFSET(0x1E065E10)
#define CEHDAMJJFOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E065D60)
#define CEHDAMJJFOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E065D20)
#define CEHDAMJJFOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E065D10)
#define CEHDAMJJFOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E065EC0)
#define CEHDAMJJFOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E065E40)
#define CEHDAMJJFOE_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E065E20)
#define CEHDAMJJFOE_GCIHKJCCAJF_OFFSET UNITYSDK_OFFSET(0x1E065DF0)
#define CEHDAMJJFOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E065F90)
#define CEHDAMJJFOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E065CA0)
#define CEHDAMJJFOE_JJKDKKCIFDI_OFFSET UNITYSDK_OFFSET(0x1E065E00)
#define CEHDAMJJFOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E066330)
#define CEHDAMJJFOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0662E0)
#define CEHDAMJJFOE_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E065E30)
#define CEHDAMJJFOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E065D00)
#define CEHDAMJJFOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E065FC0)
#define CEHDAMJJFOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E066020)

inline static constexpr unsigned int CEHDAMJJFOE_TypeDefinitionIndex = 29330;

	class CEHDAMJJFOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		::System::UInt32 AAAJBCDBFFN; // 0x1C
		::System::UInt32 CAMJKLBKJOC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CEHDAMJJFOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEHDAMJJFOE*>**)UnitySDK::FromName("", "CEHDAMJJFOE")->GetStaticField(0xFF50);
		}

		// static const ::System::Object PPBEDNBJCLF; // 0x0
		// static const ::System::Object PHCPHPHCAHJ; // 0x0
		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEHDAMJJFOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEHDAMJJFOE*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEHDAMJJFOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEHDAMJJFOE*>*(*)())((::PBYTE)hIl2Cpp + CEHDAMJJFOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEHDAMJJFOE* Clone()
		{
			return ((::CEHDAMJJFOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNOCIMHIBHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_BNOCIMHIBHD_OFFSET))(this);
		}

		::System::Void GCIHKJCCAJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_GCIHKJCCAJF_OFFSET))(this, a1);
		}

		::System::UInt32 JJKDKKCIFDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_JJKDKKCIFDI_OFFSET))(this);
		}

		::System::Void CFOLEBCJMHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CFOLEBCJMHB_OFFSET))(this, a1);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEHDAMJJFOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEHDAMJJFOE*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEHDAMJJFOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEHDAMJJFOE*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEHDAMJJFOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
