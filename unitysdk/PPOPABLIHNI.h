#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPOPABLIHNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPOPABLIHNI_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1DFB6F00)
#define PPOPABLIHNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB7230)
#define PPOPABLIHNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB7500)
#define PPOPABLIHNI_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x1DFB6ED0)
#define PPOPABLIHNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB6E80)
#define PPOPABLIHNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB6E50)
#define PPOPABLIHNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6E40)
#define PPOPABLIHNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB6FF0)
#define PPOPABLIHNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB6F10)
#define PPOPABLIHNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB70C0)
#define PPOPABLIHNI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1DFB6EF0)
#define PPOPABLIHNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB6E00)
#define PPOPABLIHNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB7380)
#define PPOPABLIHNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB7340)
#define PPOPABLIHNI_NIFANMHOKPP_OFFSET UNITYSDK_OFFSET(0x1DFB6EE0)
#define PPOPABLIHNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6E30)
#define PPOPABLIHNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB70F0)
#define PPOPABLIHNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB7150)

inline static constexpr unsigned int PPOPABLIHNI_TypeDefinitionIndex = 26657;

	class PPOPABLIHNI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCJHJHPJJIL; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PPOPABLIHNI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPOPABLIHNI*>**)UnitySDK::FromName("", "PPOPABLIHNI")->GetStaticField(0x47DA0);
		}

		// static const ::System::Object HFBCIKFOOPA; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPOPABLIHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPOPABLIHNI*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPOPABLIHNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPOPABLIHNI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPOPABLIHNI*>*(*)())((::PBYTE)hIl2Cpp + PPOPABLIHNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPOPABLIHNI* Clone()
		{
			return ((::PPOPABLIHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CHPAIEEKLGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Void NIFANMHOKPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPOPABLIHNI_NIFANMHOKPP_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPOPABLIHNI_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPOPABLIHNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPOPABLIHNI*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPOPABLIHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPOPABLIHNI*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPOPABLIHNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
