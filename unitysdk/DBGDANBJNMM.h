#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGDANBJNMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBGDANBJNMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12DE60)
#define DBGDANBJNMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12E1E0)
#define DBGDANBJNMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12DA40)
#define DBGDANBJNMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12DA00)
#define DBGDANBJNMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12D9F0)
#define DBGDANBJNMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12DBD0)
#define DBGDANBJNMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12DAF0)
#define DBGDANBJNMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E12DAC0)
#define DBGDANBJNMM_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E12DAE0)
#define DBGDANBJNMM_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E12DAA0)
#define DBGDANBJNMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12DCA0)
#define DBGDANBJNMM_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E12DA90)
#define DBGDANBJNMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12D9B0)
#define DBGDANBJNMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12E040)
#define DBGDANBJNMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12DFF0)
#define DBGDANBJNMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E12DAB0)
#define DBGDANBJNMM_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E12DAD0)
#define DBGDANBJNMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12D9E0)
#define DBGDANBJNMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12DCD0)
#define DBGDANBJNMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12DD30)

inline static constexpr unsigned int DBGDANBJNMM_TypeDefinitionIndex = 31247;

	class DBGDANBJNMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 AFFBGDFNCBG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>**)UnitySDK::FromName("", "DBGDANBJNMM")->GetStaticField(0x227F0);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBGDANBJNMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGDANBJNMM*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGDANBJNMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>*(*)())((::PBYTE)hIl2Cpp + DBGDANBJNMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBGDANBJNMM* Clone()
		{
			return ((::DBGDANBJNMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBGDANBJNMM_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBGDANBJNMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBGDANBJNMM_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBGDANBJNMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBGDANBJNMM*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBGDANBJNMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGDANBJNMM*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBGDANBJNMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
