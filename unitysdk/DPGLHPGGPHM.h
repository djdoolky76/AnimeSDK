#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCOEGNBGJFC;
class DPGLHPGGPHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPGLHPGGPHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F769620)
#define DPGLHPGGPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7699F0)
#define DPGLHPGGPHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F769010)
#define DPGLHPGGPHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F768F80)
#define DPGLHPGGPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F768F70)
#define DPGLHPGGPHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7692A0)
#define DPGLHPGGPHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F769110)
#define DPGLHPGGPHM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F7690E0)
#define DPGLHPGGPHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F769430)
#define DPGLHPGGPHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F768F30)
#define DPGLHPGGPHM_LMFBPCHBKIC_OFFSET UNITYSDK_OFFSET(0x1F7690B0)
#define DPGLHPGGPHM_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1F769100)
#define DPGLHPGGPHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F769820)
#define DPGLHPGGPHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F769780)
#define DPGLHPGGPHM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F7690D0)
#define DPGLHPGGPHM_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1F7690F0)
#define DPGLHPGGPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F768F60)
#define DPGLHPGGPHM_PNEJBGJKMBM_OFFSET UNITYSDK_OFFSET(0x1F7690C0)
#define DPGLHPGGPHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F769480)
#define DPGLHPGGPHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7694E0)

inline static constexpr unsigned int DPGLHPGGPHM_TypeDefinitionIndex = 34252;

	class DPGLHPGGPHM : public ::System::Object
	{
	public:
		::BCOEGNBGJFC* FMGGDEOHIMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KCMIMKALMNK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DPGLHPGGPHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPGLHPGGPHM*>**)UnitySDK::FromName("", "DPGLHPGGPHM")->GetStaticField(0x3A920);
		}

		// static const ::System::Object KFLAOAEMKJM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EHMKMJNLNHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPGLHPGGPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGLHPGGPHM*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGLHPGGPHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPGLHPGGPHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPGLHPGGPHM*>*(*)())((::PBYTE)hIl2Cpp + DPGLHPGGPHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPGLHPGGPHM* Clone()
		{
			return ((::DPGLHPGGPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_CLONE_OFFSET))(this);
		}

		::BCOEGNBGJFC* LMFBPCHBKIC()
		{
			return ((::BCOEGNBGJFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_LMFBPCHBKIC_OFFSET))(this);
		}

		::System::Void PNEJBGJKMBM(::BCOEGNBGJFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCOEGNBGJFC*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_PNEJBGJKMBM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPGLHPGGPHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPGLHPGGPHM*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPGLHPGGPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGLHPGGPHM*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPGLHPGGPHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
