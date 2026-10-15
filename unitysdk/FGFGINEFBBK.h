#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFGINEFBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGFGINEFBBK_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E37B620)
#define FGFGINEFBBK_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E37B610)
#define FGFGINEFBBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E37BAE0)
#define FGFGINEFBBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37BEF0)
#define FGFGINEFBBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E37B550)
#define FGFGINEFBBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E37B500)
#define FGFGINEFBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37B4F0)
#define FGFGINEFBBK_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E37B600)
#define FGFGINEFBBK_EJPMLLFLHNL_OFFSET UNITYSDK_OFFSET(0x1E37B660)
#define FGFGINEFBBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E37B750)
#define FGFGINEFBBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E37B6A0)
#define FGFGINEFBBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E37B7B0)
#define FGFGINEFBBK_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E37B690)
#define FGFGINEFBBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E37B480)
#define FGFGINEFBBK_JPMPFFEFBCN_OFFSET UNITYSDK_OFFSET(0x1E37B670)
#define FGFGINEFBBK_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E37B630)
#define FGFGINEFBBK_KKPIBHDCMFH_OFFSET UNITYSDK_OFFSET(0x1E37B5E0)
#define FGFGINEFBBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E37BE20)
#define FGFGINEFBBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E37BDB0)
#define FGFGINEFBBK_OGMDNAKBMAB_OFFSET UNITYSDK_OFFSET(0x1E37B650)
#define FGFGINEFBBK_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E37B680)
#define FGFGINEFBBK_PBIFNOLFEOC_OFFSET UNITYSDK_OFFSET(0x1E37B640)
#define FGFGINEFBBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E37B4E0)
#define FGFGINEFBBK_PGKNGMFFCIM_OFFSET UNITYSDK_OFFSET(0x1E37B5F0)
#define FGFGINEFBBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E37B800)
#define FGFGINEFBBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E37B860)

inline static constexpr unsigned int FGFGINEFBBK_TypeDefinitionIndex = 32298;

	class FGFGINEFBBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 LBOIMLHFKNC; // 0x18
		::System::UInt32 OEPOBIODAJH; // 0x20
		::System::Boolean OIJKLJFJJKP; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 PIPNDPPEGII; // 0x28
		::System::UInt32 FOBLPJCIGJE; // 0x2C
		::System::UInt32 PLKGEBACJMA; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGFGINEFBBK")->GetStaticField(0x37460);
		}

		// static const ::System::Object HIKBCOMOOKG; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object FMHEGHMLCOF; // 0x0
		// static const ::System::Object IDPCNAGHKNL; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGFGINEFBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFGINEFBBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGFGINEFBBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGFGINEFBBK* Clone()
		{
			return ((::FGFGINEFBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_CLONE_OFFSET))(this);
		}

		::System::Boolean KKPIBHDCMFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_KKPIBHDCMFH_OFFSET))(this);
		}

		::System::Void PGKNGMFFCIM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGFGINEFBBK_PGKNGMFFCIM_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGFGINEFBBK_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGFGINEFBBK_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Int64 PBIFNOLFEOC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_PBIFNOLFEOC_OFFSET))(this);
		}

		::System::Void OGMDNAKBMAB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FGFGINEFBBK_OGMDNAKBMAB_OFFSET))(this, a1);
		}

		::System::UInt32 EJPMLLFLHNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_EJPMLLFLHNL_OFFSET))(this);
		}

		::System::Void JPMPFFEFBCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGFGINEFBBK_JPMPFFEFBCN_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGFGINEFBBK_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGFGINEFBBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGFGINEFBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGFGINEFBBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
