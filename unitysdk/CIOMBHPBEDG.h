#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFBCFAIOIEK.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
class FCKNFOKENDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIOMBHPBEDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D7BB0)
#define CIOMBHPBEDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7F00)
#define CIOMBHPBEDG_CKDBNMKAHIC_OFFSET UNITYSDK_OFFSET(0x1E0D76E0)
#define CIOMBHPBEDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D75F0)
#define CIOMBHPBEDG_COJIOLBGBKJ_OFFSET UNITYSDK_OFFSET(0x1E0D76B0)
#define CIOMBHPBEDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D7570)
#define CIOMBHPBEDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7560)
#define CIOMBHPBEDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D78A0)
#define CIOMBHPBEDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D76F0)
#define CIOMBHPBEDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D7A20)
#define CIOMBHPBEDG_INIJNBGAGAP_OFFSET UNITYSDK_OFFSET(0x1E0D76D0)
#define CIOMBHPBEDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D74F0)
#define CIOMBHPBEDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D7D50)
#define CIOMBHPBEDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D7CC0)
#define CIOMBHPBEDG_OBLENJKEMOG_OFFSET UNITYSDK_OFFSET(0x1E0D76C0)
#define CIOMBHPBEDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7550)
#define CIOMBHPBEDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D7A60)
#define CIOMBHPBEDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D7AC0)

inline static constexpr unsigned int CIOMBHPBEDG_TypeDefinitionIndex = 25256;

	class CIOMBHPBEDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FCKNFOKENDN* MOFJDAHGHJM; // 0x18
		::BFBCFAIOIEK NMOKBGIAPKK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CIOMBHPBEDG")->GetStaticField(0x189E0);
		}

		// static const ::System::Object NJEHFFGLKOE; // 0x0
		// static const ::System::Object INIIODPAACA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIOMBHPBEDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOMBHPBEDG*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CIOMBHPBEDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIOMBHPBEDG* Clone()
		{
			return ((::CIOMBHPBEDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CLONE_OFFSET))(this);
		}

		::BFBCFAIOIEK COJIOLBGBKJ()
		{
			return ((::BFBCFAIOIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_COJIOLBGBKJ_OFFSET))(this);
		}

		::System::Void OBLENJKEMOG(::BFBCFAIOIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBCFAIOIEK))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_OBLENJKEMOG_OFFSET))(this, a1);
		}

		::FCKNFOKENDN* INIJNBGAGAP()
		{
			return ((::FCKNFOKENDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_INIJNBGAGAP_OFFSET))(this);
		}

		::System::Void CKDBNMKAHIC(::FCKNFOKENDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCKNFOKENDN*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CKDBNMKAHIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIOMBHPBEDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIOMBHPBEDG*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIOMBHPBEDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOMBHPBEDG*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIOMBHPBEDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
