#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHCHCCMCBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGHCHCCMCBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204A1480)
#define JGHCHCCMCBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x204A16A0)
#define JGHCHCCMCBM_CLONE_OFFSET UNITYSDK_OFFSET(0x204A1070)
#define JGHCHCCMCBM_CMEPKGCEMOM_OFFSET UNITYSDK_OFFSET(0x204A10F0)
#define JGHCHCCMCBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204A1040)
#define JGHCHCCMCBM_CTOR_OFFSET UNITYSDK_OFFSET(0x204A1030)
#define JGHCHCCMCBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204A1200)
#define JGHCHCCMCBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x204A1100)
#define JGHCHCCMCBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204A1370)
#define JGHCHCCMCBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204A0FC0)
#define JGHCHCCMCBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204A1540)
#define JGHCHCCMCBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204A1510)
#define JGHCHCCMCBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204A1020)
#define JGHCHCCMCBM_PPKAHJPPMCG_OFFSET UNITYSDK_OFFSET(0x204A10E0)
#define JGHCHCCMCBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204A13A0)
#define JGHCHCCMCBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x204A1400)

inline static constexpr unsigned int JGHCHCCMCBM_TypeDefinitionIndex = 30263;

	class JGHCHCCMCBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJNJHMPDPBF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGHCHCCMCBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGHCHCCMCBM*>**)UnitySDK::FromName("", "JGHCHCCMCBM")->GetStaticField(0x60270);
		}

		// static const ::System::Object GLLEDNPLHDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGHCHCCMCBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHCHCCMCBM*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGHCHCCMCBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGHCHCCMCBM*>*(*)())((::PBYTE)hIl2Cpp + JGHCHCCMCBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGHCHCCMCBM* Clone()
		{
			return ((::JGHCHCCMCBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPKAHJPPMCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_PPKAHJPPMCG_OFFSET))(this);
		}

		::System::Void CMEPKGCEMOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CMEPKGCEMOM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGHCHCCMCBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGHCHCCMCBM*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGHCHCCMCBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHCHCCMCBM*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGHCHCCMCBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
