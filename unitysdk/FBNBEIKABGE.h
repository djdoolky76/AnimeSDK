#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class FBNBEIKABGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBNBEIKABGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30C930)
#define FBNBEIKABGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30CC50)
#define FBNBEIKABGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30C350)
#define FBNBEIKABGE_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E30C400)
#define FBNBEIKABGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30C2E0)
#define FBNBEIKABGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30C2D0)
#define FBNBEIKABGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30C5E0)
#define FBNBEIKABGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30C430)
#define FBNBEIKABGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30C760)
#define FBNBEIKABGE_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E30C3F0)
#define FBNBEIKABGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30C260)
#define FBNBEIKABGE_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E30C410)
#define FBNBEIKABGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30CA90)
#define FBNBEIKABGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30CA00)
#define FBNBEIKABGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30C2C0)
#define FBNBEIKABGE_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E30C420)
#define FBNBEIKABGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30C7F0)
#define FBNBEIKABGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30C850)

inline static constexpr unsigned int FBNBEIKABGE_TypeDefinitionIndex = 30126;

	class FBNBEIKABGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 MFMHPDFMGIN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FBNBEIKABGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBNBEIKABGE*>**)UnitySDK::FromName("", "FBNBEIKABGE")->GetStaticField(0x383A0);
		}

		// static const ::System::Object PJHHJKCAPFG; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBNBEIKABGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBNBEIKABGE*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNBEIKABGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBNBEIKABGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBNBEIKABGE*>*(*)())((::PBYTE)hIl2Cpp + FBNBEIKABGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBNBEIKABGE* Clone()
		{
			return ((::FBNBEIKABGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNBEIKABGE_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBNBEIKABGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBNBEIKABGE*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBNBEIKABGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBNBEIKABGE*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBNBEIKABGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
