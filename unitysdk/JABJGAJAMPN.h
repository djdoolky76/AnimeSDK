#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABJGAJAMPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JABJGAJAMPN_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1FEEBBD0)
#define JABJGAJAMPN_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1FEEBBB0)
#define JABJGAJAMPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEEBF20)
#define JABJGAJAMPN_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1FEEBBE0)
#define JABJGAJAMPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEEC2A0)
#define JABJGAJAMPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEEBB30)
#define JABJGAJAMPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEEBAF0)
#define JABJGAJAMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEBAE0)
#define JABJGAJAMPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEEBC90)
#define JABJGAJAMPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEEBC10)
#define JABJGAJAMPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEEBD60)
#define JABJGAJAMPN_GLKDMGKPMKK_OFFSET UNITYSDK_OFFSET(0x1FEEBC00)
#define JABJGAJAMPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEEBA70)
#define JABJGAJAMPN_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1FEEBBC0)
#define JABJGAJAMPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEEC100)
#define JABJGAJAMPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEEC0B0)
#define JABJGAJAMPN_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x1FEEBBF0)
#define JABJGAJAMPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEEBAD0)
#define JABJGAJAMPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEEBD90)
#define JABJGAJAMPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEEBDF0)

inline static constexpr unsigned int JABJGAJAMPN_TypeDefinitionIndex = 30023;

	class JABJGAJAMPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAGAKAIKGCM; // 0x18
		::System::UInt32 CKEEENCFNLE; // 0x1C
		::System::UInt32 IDDLDFAPGBE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JABJGAJAMPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JABJGAJAMPN*>**)UnitySDK::FromName("", "JABJGAJAMPN")->GetStaticField(0x56270);
		}

		// static const ::System::Object MGPGDLIJKLM; // 0x0
		// static const ::System::Object GOGOMALLEOM; // 0x0
		// static const ::System::Object BGEAMGMALCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JABJGAJAMPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABJGAJAMPN*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABJGAJAMPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JABJGAJAMPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JABJGAJAMPN*>*(*)())((::PBYTE)hIl2Cpp + JABJGAJAMPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JABJGAJAMPN* Clone()
		{
			return ((::JABJGAJAMPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABJGAJAMPN_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::UInt32 AENILPKCOAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_AENILPKCOAO_OFFSET))(this);
		}

		::System::Void CBKAEJJLNNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABJGAJAMPN_CBKAEJJLNNH_OFFSET))(this, a1);
		}

		::System::UInt32 NKDINAILHGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_NKDINAILHGG_OFFSET))(this);
		}

		::System::Void GLKDMGKPMKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABJGAJAMPN_GLKDMGKPMKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JABJGAJAMPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JABJGAJAMPN*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABJGAJAMPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JABJGAJAMPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABJGAJAMPN*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JABJGAJAMPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
