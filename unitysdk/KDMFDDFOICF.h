#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMFDDFOICF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDMFDDFOICF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E804340)
#define KDMFDDFOICF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8045A0)
#define KDMFDDFOICF_CEPMGNPPEIJ_OFFSET UNITYSDK_OFFSET(0x1E803FC0)
#define KDMFDDFOICF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E803F50)
#define KDMFDDFOICF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E803F10)
#define KDMFDDFOICF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E803F00)
#define KDMFDDFOICF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8040C0)
#define KDMFDDFOICF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E803FE0)
#define KDMFDDFOICF_FIKLGPLLNFI_OFFSET UNITYSDK_OFFSET(0x1E803FA0)
#define KDMFDDFOICF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8041A0)
#define KDMFDDFOICF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E803EC0)
#define KDMFDDFOICF_JLBFCOCKFNM_OFFSET UNITYSDK_OFFSET(0x1E803FB0)
#define KDMFDDFOICF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E804420)
#define KDMFDDFOICF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8043E0)
#define KDMFDDFOICF_OGLNANPNINP_OFFSET UNITYSDK_OFFSET(0x1E803FD0)
#define KDMFDDFOICF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E803EF0)
#define KDMFDDFOICF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8041D0)
#define KDMFDDFOICF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E804230)

inline static constexpr unsigned int KDMFDDFOICF_TypeDefinitionIndex = 26912;

	class KDMFDDFOICF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean MGHJOOLPLKO; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GIJAABDJGDA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KDMFDDFOICF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDMFDDFOICF*>**)UnitySDK::FromName("", "KDMFDDFOICF")->GetStaticField(0x11360);
		}

		// static const ::System::Object GADBEOGJMCH; // 0x0
		// static const ::System::Object GKKIGDJJNAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDMFDDFOICF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMFDDFOICF*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMFDDFOICF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDMFDDFOICF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDMFDDFOICF*>*(*)())((::PBYTE)hIl2Cpp + KDMFDDFOICF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDMFDDFOICF* Clone()
		{
			return ((::KDMFDDFOICF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FIKLGPLLNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_FIKLGPLLNFI_OFFSET))(this);
		}

		::System::Void JLBFCOCKFNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMFDDFOICF_JLBFCOCKFNM_OFFSET))(this, a1);
		}

		::System::Boolean CEPMGNPPEIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_CEPMGNPPEIJ_OFFSET))(this);
		}

		::System::Void OGLNANPNINP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMFDDFOICF_OGLNANPNINP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDMFDDFOICF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDMFDDFOICF*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDMFDDFOICF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMFDDFOICF*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDMFDDFOICF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
