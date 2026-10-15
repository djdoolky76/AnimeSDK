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

#define DBGDANBJNMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15B3E0)
#define DBGDANBJNMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15B760)
#define DBGDANBJNMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15AFC0)
#define DBGDANBJNMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15AF80)
#define DBGDANBJNMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15AF70)
#define DBGDANBJNMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15B150)
#define DBGDANBJNMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15B070)
#define DBGDANBJNMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E15B040)
#define DBGDANBJNMM_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E15B060)
#define DBGDANBJNMM_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E15B020)
#define DBGDANBJNMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15B220)
#define DBGDANBJNMM_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E15B010)
#define DBGDANBJNMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15AF30)
#define DBGDANBJNMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15B5C0)
#define DBGDANBJNMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15B570)
#define DBGDANBJNMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E15B030)
#define DBGDANBJNMM_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E15B050)
#define DBGDANBJNMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15AF60)
#define DBGDANBJNMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15B250)
#define DBGDANBJNMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15B2B0)

inline static constexpr unsigned int DBGDANBJNMM_TypeDefinitionIndex = 31247;

	class DBGDANBJNMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AFFBGDFNCBG; // 0x1C
		::System::UInt32 EHCFPHJABDL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBGDANBJNMM*>**)UnitySDK::FromName("", "DBGDANBJNMM")->GetStaticField(0x25C30);
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
