#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOGLECADPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMOGLECADPG_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E5D64D0)
#define HMOGLECADPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D69C0)
#define HMOGLECADPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6D40)
#define HMOGLECADPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D6440)
#define HMOGLECADPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D63F0)
#define HMOGLECADPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D63E0)
#define HMOGLECADPG_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E5D64A0)
#define HMOGLECADPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D6650)
#define HMOGLECADPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D6540)
#define HMOGLECADPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D6760)
#define HMOGLECADPG_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E5D64B0)
#define HMOGLECADPG_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E5D64C0)
#define HMOGLECADPG_HCPHCMPGDLE_OFFSET UNITYSDK_OFFSET(0x1E5D64E0)
#define HMOGLECADPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D63A0)
#define HMOGLECADPG_KPPNLCJKJAD_OFFSET UNITYSDK_OFFSET(0x1E5D64F0)
#define HMOGLECADPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D6B70)
#define HMOGLECADPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D6B10)
#define HMOGLECADPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D63D0)
#define HMOGLECADPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D6810)
#define HMOGLECADPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D6870)

inline static constexpr unsigned int HMOGLECADPG_TypeDefinitionIndex = 28983;

	class HMOGLECADPG : public ::System::Object
	{
	public:
		::System::String* LBGDMOBHJCE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EMHBAOIIKLC; // 0x20
		::System::UInt32 IBEBBFIHLLP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HMOGLECADPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMOGLECADPG*>**)UnitySDK::FromName("", "HMOGLECADPG")->GetStaticField(0x4AF90);
		}

		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object ANPOGEGPGFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMOGLECADPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOGLECADPG*))((::PBYTE)hIl2Cpp + HMOGLECADPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOGLECADPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMOGLECADPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMOGLECADPG*>*(*)())((::PBYTE)hIl2Cpp + HMOGLECADPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMOGLECADPG* Clone()
		{
			return ((::HMOGLECADPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJDIMEGMAKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMOGLECADPG_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMOGLECADPG_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::String* HCPHCMPGDLE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_HCPHCMPGDLE_OFFSET))(this);
		}

		::System::Void KPPNLCJKJAD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMOGLECADPG_KPPNLCJKJAD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMOGLECADPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMOGLECADPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMOGLECADPG*))((::PBYTE)hIl2Cpp + HMOGLECADPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMOGLECADPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMOGLECADPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOGLECADPG*))((::PBYTE)hIl2Cpp + HMOGLECADPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMOGLECADPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
