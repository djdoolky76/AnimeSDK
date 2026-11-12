#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGGDDAJLAEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGGDDAJLAEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F51B370)
#define AGGDDAJLAEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F51B5F0)
#define AGGDDAJLAEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F51ADF0)
#define AGGDDAJLAEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F51ADB0)
#define AGGDDAJLAEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F51ADA0)
#define AGGDDAJLAEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F51AF10)
#define AGGDDAJLAEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F51AEB0)
#define AGGDDAJLAEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F51B100)
#define AGGDDAJLAEB_IEELBOMGFMN_OFFSET UNITYSDK_OFFSET(0x1F51AE70)
#define AGGDDAJLAEB_IKJGDKMNABI_OFFSET UNITYSDK_OFFSET(0x1F51AE90)
#define AGGDDAJLAEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F51AD30)
#define AGGDDAJLAEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F51B470)
#define AGGDDAJLAEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F51B420)
#define AGGDDAJLAEB_MNJODDBMGCF_OFFSET UNITYSDK_OFFSET(0x1F51AE80)
#define AGGDDAJLAEB_MPOKENDLOCM_OFFSET UNITYSDK_OFFSET(0x1F51AEA0)
#define AGGDDAJLAEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F51AD90)
#define AGGDDAJLAEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F51B220)
#define AGGDDAJLAEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F51B280)

inline static constexpr unsigned int AGGDDAJLAEB_TypeDefinitionIndex = 29977;

	class AGGDDAJLAEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double IPFECLHKCGL; // 0x18
		::System::UInt32 JCOCBOBKOMA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AGGDDAJLAEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGGDDAJLAEB*>**)UnitySDK::FromName("", "AGGDDAJLAEB")->GetStaticField(0x3D2D0);
		}

		// static const ::System::Object IHIPPDJHJAK; // 0x0
		// static const ::System::Object DGJBFAEBAGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGGDDAJLAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGGDDAJLAEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGGDDAJLAEB*>*(*)())((::PBYTE)hIl2Cpp + AGGDDAJLAEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGGDDAJLAEB* Clone()
		{
			return ((::AGGDDAJLAEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IEELBOMGFMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_IEELBOMGFMN_OFFSET))(this);
		}

		::System::Void MNJODDBMGCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MNJODDBMGCF_OFFSET))(this, a1);
		}

		::System::Double IKJGDKMNABI()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_IKJGDKMNABI_OFFSET))(this);
		}

		::System::Void MPOKENDLOCM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MPOKENDLOCM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGGDDAJLAEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGGDDAJLAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
