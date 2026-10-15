#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPAGBAALHMP;
class GACMFAOEKMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GACMFAOEKMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E415B70)
#define GACMFAOEKMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E415F10)
#define GACMFAOEKMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4155D0)
#define GACMFAOEKMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E415540)
#define GACMFAOEKMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E415530)
#define GACMFAOEKMP_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E415690)
#define GACMFAOEKMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E415760)
#define GACMFAOEKMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4156F0)
#define GACMFAOEKMP_FBMPMAIEJNP_OFFSET UNITYSDK_OFFSET(0x1E4156E0)
#define GACMFAOEKMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E415900)
#define GACMFAOEKMP_GFFGGKFNOAJ_OFFSET UNITYSDK_OFFSET(0x1E4156D0)
#define GACMFAOEKMP_IANJBOHCFPD_OFFSET UNITYSDK_OFFSET(0x1E4156C0)
#define GACMFAOEKMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4154F0)
#define GACMFAOEKMP_MCFNIIKKJKF_OFFSET UNITYSDK_OFFSET(0x1E415680)
#define GACMFAOEKMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E415E50)
#define GACMFAOEKMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E415D80)
#define GACMFAOEKMP_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1E415670)
#define GACMFAOEKMP_NBKHCALDECK_OFFSET UNITYSDK_OFFSET(0x1E4156B0)
#define GACMFAOEKMP_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E4156A0)
#define GACMFAOEKMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E415520)
#define GACMFAOEKMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E415980)
#define GACMFAOEKMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4159E0)

inline static constexpr unsigned int GACMFAOEKMP_TypeDefinitionIndex = 30855;

	class GACMFAOEKMP : public ::System::Object
	{
	public:
		::BPAGBAALHMP* POGCEMLPKIN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 MFDIFJCMBCL; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x28
		::System::UInt32 LEMEEGJMPCH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GACMFAOEKMP")->GetStaticField(0x1380);
		}

		// static const ::System::Object FJDILKCJAIK; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object ICEDMMOEDFG; // 0x0
		// static const ::System::Object HHKAEOPIILH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GACMFAOEKMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GACMFAOEKMP*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GACMFAOEKMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GACMFAOEKMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GACMFAOEKMP* Clone()
		{
			return ((::GACMFAOEKMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_CLONE_OFFSET))(this);
		}

		::System::UInt64 MHLKGONEGDG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_MHLKGONEGDG_OFFSET))(this);
		}

		::System::Void MCFNIIKKJKF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GACMFAOEKMP_MCFNIIKKJKF_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GACMFAOEKMP_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 NBKHCALDECK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_NBKHCALDECK_OFFSET))(this);
		}

		::System::Void IANJBOHCFPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GACMFAOEKMP_IANJBOHCFPD_OFFSET))(this, a1);
		}

		::BPAGBAALHMP* GFFGGKFNOAJ()
		{
			return ((::BPAGBAALHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_GFFGGKFNOAJ_OFFSET))(this);
		}

		::System::Void FBMPMAIEJNP(::BPAGBAALHMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPAGBAALHMP*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_FBMPMAIEJNP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GACMFAOEKMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GACMFAOEKMP*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GACMFAOEKMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GACMFAOEKMP*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GACMFAOEKMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
