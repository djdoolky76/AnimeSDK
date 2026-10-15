#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBFCLKMPMAL_DNDPODEOKBL.h"
#include "unitysdk/System/Object.h"
class IBFCLKMPMAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class Object; }
namespace System { class String; }

#define IBFCLKMPMAL_AMDKENIDFJK_OFFSET UNITYSDK_OFFSET(0x1E5E6040)
#define IBFCLKMPMAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E6950)
#define IBFCLKMPMAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7040)
#define IBFCLKMPMAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E6120)
#define IBFCLKMPMAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E5DA0)
#define IBFCLKMPMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5D90)
#define IBFCLKMPMAL_EGBHHHBDMLD_OFFSET UNITYSDK_OFFSET(0x1E5E5FC0)
#define IBFCLKMPMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E61A0)
#define IBFCLKMPMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E6170)
#define IBFCLKMPMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E6570)
#define IBFCLKMPMAL_HOGABAGMGCI_OFFSET UNITYSDK_OFFSET(0x1E5E6150)
#define IBFCLKMPMAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E5D50)
#define IBFCLKMPMAL_KIINIPPOGPH_OFFSET UNITYSDK_OFFSET(0x1E5E6160)
#define IBFCLKMPMAL_KOGGEMPPLCG_OFFSET UNITYSDK_OFFSET(0x1E5E6070)
#define IBFCLKMPMAL_LIKCOAONLKH_OFFSET UNITYSDK_OFFSET(0x1E5E60F0)
#define IBFCLKMPMAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E6DF0)
#define IBFCLKMPMAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E6BB0)
#define IBFCLKMPMAL_MINDMFMLNPK_OFFSET UNITYSDK_OFFSET(0x1E5E5F60)
#define IBFCLKMPMAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5D80)
#define IBFCLKMPMAL_PIILOGGBHGK_OFFSET UNITYSDK_OFFSET(0x1E5E5FA0)
#define IBFCLKMPMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E6690)
#define IBFCLKMPMAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E66F0)

inline static constexpr unsigned int IBFCLKMPMAL_TypeDefinitionIndex = 34106;

	class IBFCLKMPMAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* LHJMKGCJMLF; // 0x18
		::IBFCLKMPMAL_DNDPODEOKBL MKJNEOOMFCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IBFCLKMPMAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBFCLKMPMAL*>**)UnitySDK::FromName("", "IBFCLKMPMAL")->GetStaticField(0x35900);
		}

		// static const ::System::Object DIFIPJBCPDC; // 0x0
		// static const ::System::Object CGLGMIGHHNG; // 0x0
		// static const ::System::Object DPFLPCEENME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBFCLKMPMAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBFCLKMPMAL*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFCLKMPMAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBFCLKMPMAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBFCLKMPMAL*>*(*)())((::PBYTE)hIl2Cpp + IBFCLKMPMAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBFCLKMPMAL* Clone()
		{
			return ((::IBFCLKMPMAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_CLONE_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* MINDMFMLNPK()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_MINDMFMLNPK_OFFSET))(this);
		}

		::System::Void PIILOGGBHGK(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_PIILOGGBHGK_OFFSET))(this, a1);
		}

		::System::UInt32 EGBHHHBDMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_EGBHHHBDMLD_OFFSET))(this);
		}

		::System::Void AMDKENIDFJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_AMDKENIDFJK_OFFSET))(this, a1);
		}

		::System::UInt32 KOGGEMPPLCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_KOGGEMPPLCG_OFFSET))(this);
		}

		::System::Void LIKCOAONLKH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_LIKCOAONLKH_OFFSET))(this, a1);
		}

		::IBFCLKMPMAL_DNDPODEOKBL HOGABAGMGCI()
		{
			return ((::IBFCLKMPMAL_DNDPODEOKBL(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_HOGABAGMGCI_OFFSET))(this);
		}

		::System::Void KIINIPPOGPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_KIINIPPOGPH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBFCLKMPMAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBFCLKMPMAL*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBFCLKMPMAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBFCLKMPMAL*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBFCLKMPMAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
