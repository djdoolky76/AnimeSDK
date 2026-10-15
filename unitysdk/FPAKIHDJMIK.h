#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
class FPAKIHDJMIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPAKIHDJMIK_AFLGDDKKHBM_OFFSET UNITYSDK_OFFSET(0x1E3D49B0)
#define FPAKIHDJMIK_BDJIGGNHKCM_OFFSET UNITYSDK_OFFSET(0x1E3D49C0)
#define FPAKIHDJMIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D4E70)
#define FPAKIHDJMIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D51A0)
#define FPAKIHDJMIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D4900)
#define FPAKIHDJMIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D4870)
#define FPAKIHDJMIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4860)
#define FPAKIHDJMIK_DIEFHGCKBGH_OFFSET UNITYSDK_OFFSET(0x1E3D49D0)
#define FPAKIHDJMIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D4B60)
#define FPAKIHDJMIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D49E0)
#define FPAKIHDJMIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D4CE0)
#define FPAKIHDJMIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D4820)
#define FPAKIHDJMIK_KAFJFOHNGMG_OFFSET UNITYSDK_OFFSET(0x1E3D49A0)
#define FPAKIHDJMIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D5010)
#define FPAKIHDJMIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D4F40)
#define FPAKIHDJMIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4850)
#define FPAKIHDJMIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D4D30)
#define FPAKIHDJMIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D4D90)

inline static constexpr unsigned int FPAKIHDJMIK_TypeDefinitionIndex = 28843;

	class FPAKIHDJMIK : public ::System::Object
	{
	public:
		::AHCLMAGAHPN* DOEMNNHGAJA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JKAEMNMFNBD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FPAKIHDJMIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPAKIHDJMIK*>**)UnitySDK::FromName("", "FPAKIHDJMIK")->GetStaticField(0x5EED0);
		}

		// static const ::System::Object PEEEELHGMDO; // 0x0
		// static const ::System::Object PMIOJMPCJKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPAKIHDJMIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPAKIHDJMIK*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPAKIHDJMIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPAKIHDJMIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPAKIHDJMIK*>*(*)())((::PBYTE)hIl2Cpp + FPAKIHDJMIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPAKIHDJMIK* Clone()
		{
			return ((::FPAKIHDJMIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_CLONE_OFFSET))(this);
		}

		::AHCLMAGAHPN* KAFJFOHNGMG()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_KAFJFOHNGMG_OFFSET))(this);
		}

		::System::Void AFLGDDKKHBM(::AHCLMAGAHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_AFLGDDKKHBM_OFFSET))(this, a1);
		}

		::System::UInt32 BDJIGGNHKCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_BDJIGGNHKCM_OFFSET))(this);
		}

		::System::Void DIEFHGCKBGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_DIEFHGCKBGH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPAKIHDJMIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPAKIHDJMIK*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPAKIHDJMIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPAKIHDJMIK*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPAKIHDJMIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
