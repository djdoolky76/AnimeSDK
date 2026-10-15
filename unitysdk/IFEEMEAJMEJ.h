#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFEEMEAJMEJ_NMBJEDCNHOI.h"
#include "unitysdk/System/Object.h"
class IFEEMEAJMEJ;
class OELLEKNNEMK;
class PFNJCDINMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFEEMEAJMEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E617660)
#define IFEEMEAJMEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E617DF0)
#define IFEEMEAJMEJ_CEHKBFMPEAO_OFFSET UNITYSDK_OFFSET(0x1E616C70)
#define IFEEMEAJMEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E616DE0)
#define IFEEMEAJMEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E616AC0)
#define IFEEMEAJMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E616AB0)
#define IFEEMEAJMEJ_DGNGPKEFJEG_OFFSET UNITYSDK_OFFSET(0x1E616D60)
#define IFEEMEAJMEJ_EDNHCAFGMNG_OFFSET UNITYSDK_OFFSET(0x1E616CF0)
#define IFEEMEAJMEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E616E60)
#define IFEEMEAJMEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E616E30)
#define IFEEMEAJMEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E617240)
#define IFEEMEAJMEJ_ICIJCHKBAEE_OFFSET UNITYSDK_OFFSET(0x1E616DC0)
#define IFEEMEAJMEJ_ICPNOIONFFO_OFFSET UNITYSDK_OFFSET(0x1E616E10)
#define IFEEMEAJMEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E616A70)
#define IFEEMEAJMEJ_KPIKOLEGENM_OFFSET UNITYSDK_OFFSET(0x1E616D20)
#define IFEEMEAJMEJ_LKGJNPJDDOJ_OFFSET UNITYSDK_OFFSET(0x1E616D80)
#define IFEEMEAJMEJ_LMDPCGCPNOL_OFFSET UNITYSDK_OFFSET(0x1E616E20)
#define IFEEMEAJMEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E617AB0)
#define IFEEMEAJMEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E617820)
#define IFEEMEAJMEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E616AA0)
#define IFEEMEAJMEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6173F0)
#define IFEEMEAJMEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E617450)

inline static constexpr unsigned int IFEEMEAJMEJ_TypeDefinitionIndex = 25919;

	class IFEEMEAJMEJ : public ::System::Object
	{
	public:
		::System::Object* KGKNPPHMGKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IFEEMEAJMEJ_NMBJEDCNHOI OLBJLCGPCKM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IFEEMEAJMEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFEEMEAJMEJ*>**)UnitySDK::FromName("", "IFEEMEAJMEJ")->GetStaticField(0x4A300);
		}

		// static const ::System::Object FNHENNCPKAA; // 0x0
		// static const ::System::Object EOMFFNCEAOK; // 0x0
		// static const ::System::Object FJBGDOJEBMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFEEMEAJMEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEEMEAJMEJ*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFEEMEAJMEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFEEMEAJMEJ*>*(*)())((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFEEMEAJMEJ* Clone()
		{
			return ((::IFEEMEAJMEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CEHKBFMPEAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CEHKBFMPEAO_OFFSET))(this);
		}

		::System::Void EDNHCAFGMNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_EDNHCAFGMNG_OFFSET))(this, a1);
		}

		::PFNJCDINMLA* KPIKOLEGENM()
		{
			return ((::PFNJCDINMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_KPIKOLEGENM_OFFSET))(this);
		}

		::System::Void DGNGPKEFJEG(::PFNJCDINMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFNJCDINMLA*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_DGNGPKEFJEG_OFFSET))(this, a1);
		}

		::OELLEKNNEMK* LKGJNPJDDOJ()
		{
			return ((::OELLEKNNEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_LKGJNPJDDOJ_OFFSET))(this);
		}

		::System::Void ICIJCHKBAEE(::OELLEKNNEMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELLEKNNEMK*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_ICIJCHKBAEE_OFFSET))(this, a1);
		}

		::IFEEMEAJMEJ_NMBJEDCNHOI ICPNOIONFFO()
		{
			return ((::IFEEMEAJMEJ_NMBJEDCNHOI(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_ICPNOIONFFO_OFFSET))(this);
		}

		::System::Void LMDPCGCPNOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_LMDPCGCPNOL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFEEMEAJMEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFEEMEAJMEJ*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFEEMEAJMEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEEMEAJMEJ*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
