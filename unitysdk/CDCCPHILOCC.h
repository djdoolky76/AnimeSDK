#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDCCPHILOCC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E052AA0)
#define CDCCPHILOCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E052DF0)
#define CDCCPHILOCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0530C0)
#define CDCCPHILOCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E052A40)
#define CDCCPHILOCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E052A10)
#define CDCCPHILOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E052A00)
#define CDCCPHILOCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E052BB0)
#define CDCCPHILOCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E052AD0)
#define CDCCPHILOCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E052C80)
#define CDCCPHILOCC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E052A90)
#define CDCCPHILOCC_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E052AC0)
#define CDCCPHILOCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0529C0)
#define CDCCPHILOCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E052F40)
#define CDCCPHILOCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E052F00)
#define CDCCPHILOCC_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E052AB0)
#define CDCCPHILOCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0529F0)
#define CDCCPHILOCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E052CB0)
#define CDCCPHILOCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E052D10)

inline static constexpr unsigned int CDCCPHILOCC_TypeDefinitionIndex = 25335;

	class CDCCPHILOCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 OEPOBIODAJH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CDCCPHILOCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDCCPHILOCC*>**)UnitySDK::FromName("", "CDCCPHILOCC")->GetStaticField(0xDFB0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDCCPHILOCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDCCPHILOCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDCCPHILOCC*>*(*)())((::PBYTE)hIl2Cpp + CDCCPHILOCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDCCPHILOCC* Clone()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCCPHILOCC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCCPHILOCC_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDCCPHILOCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDCCPHILOCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
