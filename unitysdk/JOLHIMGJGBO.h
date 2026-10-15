#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOLHIMGJGBO_MBDIFANIIOC.h"
#include "unitysdk/System/Object.h"
class CIOAOEGEIKH;
class DAMNNJKJOMM;
class GFDJLBJPNMC;
class JOLHIMGJGBO;
class JPKIDILKOAK;
class KOBGMGHMCLF;
class OHLNNOMJPNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOLHIMGJGBO_APEHPFIDDKC_OFFSET UNITYSDK_OFFSET(0x1E7A6E10)
#define JOLHIMGJGBO_BGNDKLCPGKL_OFFSET UNITYSDK_OFFSET(0x1E7A6F00)
#define JOLHIMGJGBO_BJBCAEAIJNE_OFFSET UNITYSDK_OFFSET(0x1E7A7080)
#define JOLHIMGJGBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A80E0)
#define JOLHIMGJGBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A93D0)
#define JOLHIMGJGBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A70A0)
#define JOLHIMGJGBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A6980)
#define JOLHIMGJGBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A6970)
#define JOLHIMGJGBO_DGKCGGJBOOJ_OFFSET UNITYSDK_OFFSET(0x1E7A6DB0)
#define JOLHIMGJGBO_EPGLGBMCGOH_OFFSET UNITYSDK_OFFSET(0x1E7A7100)
#define JOLHIMGJGBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A7170)
#define JOLHIMGJGBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A7110)
#define JOLHIMGJGBO_FAKPCNEIANJ_OFFSET UNITYSDK_OFFSET(0x1E7A6F80)
#define JOLHIMGJGBO_FILBKNLPAHP_OFFSET UNITYSDK_OFFSET(0x1E7A6EA0)
#define JOLHIMGJGBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A7770)
#define JOLHIMGJGBO_GPBMBLPCMJL_OFFSET UNITYSDK_OFFSET(0x1E7A7020)
#define JOLHIMGJGBO_IACEKAHBLBE_OFFSET UNITYSDK_OFFSET(0x1E7A6F20)
#define JOLHIMGJGBO_JALHACJBADJ_OFFSET UNITYSDK_OFFSET(0x1E7A7000)
#define JOLHIMGJGBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A6900)
#define JOLHIMGJGBO_KDHIHGCDFJM_OFFSET UNITYSDK_OFFSET(0x1E7A6E20)
#define JOLHIMGJGBO_KJDNMMOBLEN_OFFSET UNITYSDK_OFFSET(0x1E7A6FA0)
#define JOLHIMGJGBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A8DB0)
#define JOLHIMGJGBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A8460)
#define JOLHIMGJGBO_OFDJLLHPLKJ_OFFSET UNITYSDK_OFFSET(0x1E7A6E80)
#define JOLHIMGJGBO_OHDMJFAJFLI_OFFSET UNITYSDK_OFFSET(0x1E7A70F0)
#define JOLHIMGJGBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A6960)
#define JOLHIMGJGBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A7CC0)
#define JOLHIMGJGBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A7D20)

inline static constexpr unsigned int JOLHIMGJGBO_TypeDefinitionIndex = 25166;

	class JOLHIMGJGBO : public ::System::Object
	{
	public:
		::System::Object* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JOLHIMGJGBO_MBDIFANIIOC JFJLMHMPICH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOLHIMGJGBO")->GetStaticField(0x24E50);
		}

		// static const ::System::Object LHKEDKJOFGE; // 0x0
		// static const ::System::Object BGFKDMHLOFF; // 0x0
		// static const ::System::Object APGAHFHHGHJ; // 0x0
		// static const ::System::Object JDOOKGOMHDK; // 0x0
		// static const ::System::Object BGABLNBBBOL; // 0x0
		// static const ::System::Object MMLICOLBKKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOLHIMGJGBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOLHIMGJGBO*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLHIMGJGBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOLHIMGJGBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOLHIMGJGBO* Clone()
		{
			return ((::JOLHIMGJGBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_CLONE_OFFSET))(this);
		}

		::OHLNNOMJPNH* DGKCGGJBOOJ()
		{
			return ((::OHLNNOMJPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_DGKCGGJBOOJ_OFFSET))(this);
		}

		::System::Void APEHPFIDDKC(::OHLNNOMJPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_APEHPFIDDKC_OFFSET))(this, a1);
		}

		::CIOAOEGEIKH* KDHIHGCDFJM()
		{
			return ((::CIOAOEGEIKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_KDHIHGCDFJM_OFFSET))(this);
		}

		::System::Void OFDJLLHPLKJ(::CIOAOEGEIKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOAOEGEIKH*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_OFDJLLHPLKJ_OFFSET))(this, a1);
		}

		::JPKIDILKOAK* FILBKNLPAHP()
		{
			return ((::JPKIDILKOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_FILBKNLPAHP_OFFSET))(this);
		}

		::System::Void BGNDKLCPGKL(::JPKIDILKOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPKIDILKOAK*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_BGNDKLCPGKL_OFFSET))(this, a1);
		}

		::DAMNNJKJOMM* IACEKAHBLBE()
		{
			return ((::DAMNNJKJOMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_IACEKAHBLBE_OFFSET))(this);
		}

		::System::Void FAKPCNEIANJ(::DAMNNJKJOMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAMNNJKJOMM*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_FAKPCNEIANJ_OFFSET))(this, a1);
		}

		::KOBGMGHMCLF* KJDNMMOBLEN()
		{
			return ((::KOBGMGHMCLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_KJDNMMOBLEN_OFFSET))(this);
		}

		::System::Void JALHACJBADJ(::KOBGMGHMCLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBGMGHMCLF*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_JALHACJBADJ_OFFSET))(this, a1);
		}

		::GFDJLBJPNMC* GPBMBLPCMJL()
		{
			return ((::GFDJLBJPNMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_GPBMBLPCMJL_OFFSET))(this);
		}

		::System::Void BJBCAEAIJNE(::GFDJLBJPNMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDJLBJPNMC*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_BJBCAEAIJNE_OFFSET))(this, a1);
		}

		::JOLHIMGJGBO_MBDIFANIIOC OHDMJFAJFLI()
		{
			return ((::JOLHIMGJGBO_MBDIFANIIOC(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_OHDMJFAJFLI_OFFSET))(this);
		}

		::System::Void EPGLGBMCGOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_EPGLGBMCGOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOLHIMGJGBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOLHIMGJGBO*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOLHIMGJGBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOLHIMGJGBO*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOLHIMGJGBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
