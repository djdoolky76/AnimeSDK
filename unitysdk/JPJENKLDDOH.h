#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPJENKLDDOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPJENKLDDOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D6A70)
#define JPJENKLDDOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D6EE0)
#define JPJENKLDDOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D65C0)
#define JPJENKLDDOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D6510)
#define JPJENKLDDOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D64C0)
#define JPJENKLDDOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D66C0)
#define JPJENKLDDOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D6690)
#define JPJENKLDDOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7D6600)
#define JPJENKLDDOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D6760)
#define JPJENKLDDOH_HHNPOPJJNJF_OFFSET UNITYSDK_OFFSET(0x1E7D6650)
#define JPJENKLDDOH_HNNEDPKPOFL_OFFSET UNITYSDK_OFFSET(0x1E7D6640)
#define JPJENKLDDOH_ICHLINJKMFO_OFFSET UNITYSDK_OFFSET(0x1E7D6630)
#define JPJENKLDDOH_IFLGFLGEHNL_OFFSET UNITYSDK_OFFSET(0x1E7D6620)
#define JPJENKLDDOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D6480)
#define JPJENKLDDOH_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x1E7D6670)
#define JPJENKLDDOH_KNKDDPADCAI_OFFSET UNITYSDK_OFFSET(0x1E7D6660)
#define JPJENKLDDOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D6DA0)
#define JPJENKLDDOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D6D10)
#define JPJENKLDDOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7D65F0)
#define JPJENKLDDOH_PAMMLLPCMJG_OFFSET UNITYSDK_OFFSET(0x1E7D6610)
#define JPJENKLDDOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D64B0)
#define JPJENKLDDOH_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x1E7D6680)
#define JPJENKLDDOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D67D0)
#define JPJENKLDDOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D6830)

	class JPJENKLDDOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IODNCLJCCJC; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* JHKMLPFFOIE; // 0x20
		::System::UInt32 NLCKKDCPKEL; // 0x28
		::System::UInt32 MAEGCIDJDDD; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 KMJKJFJEDBF; // 0x34
		static ::System::Object** StaticGet_OLPKAOGGLAG()
		{
			return (::System::Object**)UnitySDK::FromName("", "JPJENKLDDOH")->GetStaticField(0xBD30);
		}

		static ::System::Object** StaticGet_HIGIAOPOIHE()
		{
			return (::System::Object**)UnitySDK::FromName("", "JPJENKLDDOH")->GetStaticField(0xBD38);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPJENKLDDOH")->GetStaticField(0xBD40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FIBMDNNPJJC; // 0x0
		// static const ::System::Object GPECHENKGJC; // 0x0
		// static const ::System::Object FKOCHNDLMGO; // 0x0
		// static const ::System::Object DKHALLHCBKJ; // 0x0
		// static const ::System::Object EEDDEINLCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPJENKLDDOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPJENKLDDOH*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPJENKLDDOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPJENKLDDOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPJENKLDDOH* Clone()
		{
			return ((::JPJENKLDDOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPJENKLDDOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PAMMLLPCMJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_PAMMLLPCMJG_OFFSET))(this);
		}

		::System::Void IFLGFLGEHNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPJENKLDDOH_IFLGFLGEHNL_OFFSET))(this, a1);
		}

		::System::UInt32 ICHLINJKMFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_ICHLINJKMFO_OFFSET))(this);
		}

		::System::Void HNNEDPKPOFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPJENKLDDOH_HNNEDPKPOFL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* HHNPOPJJNJF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_HHNPOPJJNJF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KNKDDPADCAI()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_KNKDDPADCAI_OFFSET))(this);
		}

		::System::UInt32 KGLIPAJLDMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPJENKLDDOH_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPJENKLDDOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPJENKLDDOH*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPJENKLDDOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPJENKLDDOH*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPJENKLDDOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
