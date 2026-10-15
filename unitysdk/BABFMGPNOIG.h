#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABFMGPNOIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BABFMGPNOIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E781070)
#define BABFMGPNOIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E781340)
#define BABFMGPNOIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E780CC0)
#define BABFMGPNOIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E780C90)
#define BABFMGPNOIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E780C80)
#define BABFMGPNOIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E780E30)
#define BABFMGPNOIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E780D50)
#define BABFMGPNOIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E780F00)
#define BABFMGPNOIG_HCPGAMJEGMB_OFFSET UNITYSDK_OFFSET(0x1E780D30)
#define BABFMGPNOIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E780C40)
#define BABFMGPNOIG_JMEHLOIMKAE_OFFSET UNITYSDK_OFFSET(0x1E780D10)
#define BABFMGPNOIG_KDEGKNLDHJM_OFFSET UNITYSDK_OFFSET(0x1E780D40)
#define BABFMGPNOIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7811C0)
#define BABFMGPNOIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E781180)
#define BABFMGPNOIG_MODFGNFHPPN_OFFSET UNITYSDK_OFFSET(0x1E780D20)
#define BABFMGPNOIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E780C70)
#define BABFMGPNOIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E780F30)
#define BABFMGPNOIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E780F90)

inline static constexpr unsigned int BABFMGPNOIG_TypeDefinitionIndex = 29962;

	class BABFMGPNOIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EJNCMIEKEND; // 0x18
		::System::UInt32 NLPHDINMAPM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BABFMGPNOIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BABFMGPNOIG*>**)UnitySDK::FromName("", "BABFMGPNOIG")->GetStaticField(0x4B2A0);
		}

		// static const ::System::Object FNLPGJOMMBC; // 0x0
		// static const ::System::Object LGNHOEMIIGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BABFMGPNOIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BABFMGPNOIG*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABFMGPNOIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BABFMGPNOIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BABFMGPNOIG*>*(*)())((::PBYTE)hIl2Cpp + BABFMGPNOIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BABFMGPNOIG* Clone()
		{
			return ((::BABFMGPNOIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_CLONE_OFFSET))(this);
		}

		::System::UInt32 JMEHLOIMKAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_JMEHLOIMKAE_OFFSET))(this);
		}

		::System::Void MODFGNFHPPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BABFMGPNOIG_MODFGNFHPPN_OFFSET))(this, a1);
		}

		::System::UInt32 HCPGAMJEGMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_HCPGAMJEGMB_OFFSET))(this);
		}

		::System::Void KDEGKNLDHJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BABFMGPNOIG_KDEGKNLDHJM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BABFMGPNOIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BABFMGPNOIG*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BABFMGPNOIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BABFMGPNOIG*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BABFMGPNOIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
