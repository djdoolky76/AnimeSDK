#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEMFNGCOBO_PMKGFGKFOEN.h"
#include "unitysdk/System/Object.h"
class OEEMFNGCOBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEEMFNGCOBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFCB30)
#define OEEMFNGCOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD120)
#define OEEMFNGCOBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFC450)
#define OEEMFNGCOBO_CPCPCIHKPFK_OFFSET UNITYSDK_OFFSET(0x1DDFC4B0)
#define OEEMFNGCOBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFC190)
#define OEEMFNGCOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC180)
#define OEEMFNGCOBO_DFJPBEOAMMG_OFFSET UNITYSDK_OFFSET(0x1DDFC370)
#define OEEMFNGCOBO_EGLNOELNEMD_OFFSET UNITYSDK_OFFSET(0x1DDFC3A0)
#define OEEMFNGCOBO_EHLJOHBIGAF_OFFSET UNITYSDK_OFFSET(0x1DDFC4A0)
#define OEEMFNGCOBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFC4F0)
#define OEEMFNGCOBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFC4C0)
#define OEEMFNGCOBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDFC490)
#define OEEMFNGCOBO_FAJNEFOFDLB_OFFSET UNITYSDK_OFFSET(0x1DDFC420)
#define OEEMFNGCOBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFC7E0)
#define OEEMFNGCOBO_JGAMBLMOOOK_OFFSET UNITYSDK_OFFSET(0x1DDFC2F0)
#define OEEMFNGCOBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFC140)
#define OEEMFNGCOBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFCF40)
#define OEEMFNGCOBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFCDD0)
#define OEEMFNGCOBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDFC480)
#define OEEMFNGCOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC170)
#define OEEMFNGCOBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFC8A0)
#define OEEMFNGCOBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFC900)

inline static constexpr unsigned int OEEMFNGCOBO_TypeDefinitionIndex = 26223;

	class OEEMFNGCOBO : public ::System::Object
	{
	public:
		::System::Object* CBGCMMFDPND; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OEEMFNGCOBO_PMKGFGKFOEN MBOLMOGEOLA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OEEMFNGCOBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEEMFNGCOBO*>**)UnitySDK::FromName("", "OEEMFNGCOBO")->GetStaticField(0x13650);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IKGCBOAGDDH; // 0x0
		// static const ::System::Object HOIAIELDIFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEEMFNGCOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEMFNGCOBO*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEEMFNGCOBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEEMFNGCOBO*>*(*)())((::PBYTE)hIl2Cpp + OEEMFNGCOBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEEMFNGCOBO* Clone()
		{
			return ((::OEEMFNGCOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JGAMBLMOOOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_JGAMBLMOOOK_OFFSET))(this);
		}

		::System::Void DFJPBEOAMMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_DFJPBEOAMMG_OFFSET))(this, a1);
		}

		::System::UInt32 EGLNOELNEMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_EGLNOELNEMD_OFFSET))(this);
		}

		::System::Void FAJNEFOFDLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_FAJNEFOFDLB_OFFSET))(this, a1);
		}

		::OEEMFNGCOBO_PMKGFGKFOEN EHLJOHBIGAF()
		{
			return ((::OEEMFNGCOBO_PMKGFGKFOEN(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_EHLJOHBIGAF_OFFSET))(this);
		}

		::System::Void CPCPCIHKPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CPCPCIHKPFK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEEMFNGCOBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEEMFNGCOBO*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEEMFNGCOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEMFNGCOBO*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEEMFNGCOBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
