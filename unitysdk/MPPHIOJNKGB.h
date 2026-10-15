#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPPHIOJNKGB;
class PNCNGIAMLCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPPHIOJNKGB_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EA8F1C0)
#define MPPHIOJNKGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8F680)
#define MPPHIOJNKGB_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1EA8F190)
#define MPPHIOJNKGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8FAE0)
#define MPPHIOJNKGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8F0C0)
#define MPPHIOJNKGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8F040)
#define MPPHIOJNKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F030)
#define MPPHIOJNKGB_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1EA8F1A0)
#define MPPHIOJNKGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8F300)
#define MPPHIOJNKGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8F1D0)
#define MPPHIOJNKGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8F490)
#define MPPHIOJNKGB_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EA8F1B0)
#define MPPHIOJNKGB_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1EA8F170)
#define MPPHIOJNKGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8EFC0)
#define MPPHIOJNKGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8F8C0)
#define MPPHIOJNKGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8F7E0)
#define MPPHIOJNKGB_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1EA8F180)
#define MPPHIOJNKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F020)
#define MPPHIOJNKGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8F4E0)
#define MPPHIOJNKGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8F540)

inline static constexpr unsigned int MPPHIOJNKGB_TypeDefinitionIndex = 27665;

	class MPPHIOJNKGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PNCNGIAMLCA* MNJNMPKLFAI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::UInt32 NBFPOGFBMFE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MPPHIOJNKGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPPHIOJNKGB*>**)UnitySDK::FromName("", "MPPHIOJNKGB")->GetStaticField(0x20AA0);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPPHIOJNKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPPHIOJNKGB*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPPHIOJNKGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPPHIOJNKGB*>*(*)())((::PBYTE)hIl2Cpp + MPPHIOJNKGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPPHIOJNKGB* Clone()
		{
			return ((::MPPHIOJNKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CLONE_OFFSET))(this);
		}

		::PNCNGIAMLCA* JIFPIGBJFEH()
		{
			return ((::PNCNGIAMLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PNCNGIAMLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPPHIOJNKGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPPHIOJNKGB*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPPHIOJNKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPPHIOJNKGB*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPPHIOJNKGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
