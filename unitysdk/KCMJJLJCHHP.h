#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMJJLJCHHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCMJJLJCHHP_BCKKLJNILIB_OFFSET UNITYSDK_OFFSET(0x1FB10D90)
#define KCMJJLJCHHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB112A0)
#define KCMJJLJCHHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB11650)
#define KCMJJLJCHHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB10CC0)
#define KCMJJLJCHHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB10C70)
#define KCMJJLJCHHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB10C60)
#define KCMJJLJCHHP_DFBIKPLKBBN_OFFSET UNITYSDK_OFFSET(0x1FB10D70)
#define KCMJJLJCHHP_EOGFJHMGJOM_OFFSET UNITYSDK_OFFSET(0x1FB10D50)
#define KCMJJLJCHHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB10EC0)
#define KCMJJLJCHHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB10E10)
#define KCMJJLJCHHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB10F30)
#define KCMJJLJCHHP_IGLGNAOMDNE_OFFSET UNITYSDK_OFFSET(0x1FB10DD0)
#define KCMJJLJCHHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB10BF0)
#define KCMJJLJCHHP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1FB10DB0)
#define KCMJJLJCHHP_LOBLCGILKHL_OFFSET UNITYSDK_OFFSET(0x1FB10DE0)
#define KCMJJLJCHHP_MDGGAHMGLBH_OFFSET UNITYSDK_OFFSET(0x1FB10D80)
#define KCMJJLJCHHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB11580)
#define KCMJJLJCHHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB11510)
#define KCMJJLJCHHP_MFDEANFDEFK_OFFSET UNITYSDK_OFFSET(0x1FB10E00)
#define KCMJJLJCHHP_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1FB10DC0)
#define KCMJJLJCHHP_NGHCFNOHLML_OFFSET UNITYSDK_OFFSET(0x1FB10DF0)
#define KCMJJLJCHHP_NJMLKAKLOLI_OFFSET UNITYSDK_OFFSET(0x1FB10D60)
#define KCMJJLJCHHP_OIGLFKLNHDJ_OFFSET UNITYSDK_OFFSET(0x1FB10DA0)
#define KCMJJLJCHHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB10C50)
#define KCMJJLJCHHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB10F90)
#define KCMJJLJCHHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB10FF0)

inline static constexpr unsigned int KCMJJLJCHHP_TypeDefinitionIndex = 32807;

	class KCMJJLJCHHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BJCIIMJDDHD; // 0x18
		::System::Boolean CDFDONPAJCP; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 PDFOEHIGKGB; // 0x1C
		::System::Int64 LCOKNCEBFPB; // 0x20
		::System::UInt32 ELGCBHFMIIN; // 0x28
		::System::UInt32 NAAENDIEFEI; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::KCMJJLJCHHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCMJJLJCHHP*>**)UnitySDK::FromName("", "KCMJJLJCHHP")->GetStaticField(0x503D0);
		}

		// static const ::System::Object CDKJPKFNIDK; // 0x0
		// static const ::System::Object PBPMCBMABDF; // 0x0
		// static const ::System::Object HABKMHNBEDK; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		// static const ::System::Object KNAALDAEDPK; // 0x0
		// static const ::System::Object HBDKEILGLLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCMJJLJCHHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMJJLJCHHP*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMJJLJCHHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCMJJLJCHHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCMJJLJCHHP*>*(*)())((::PBYTE)hIl2Cpp + KCMJJLJCHHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCMJJLJCHHP* Clone()
		{
			return ((::KCMJJLJCHHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_CLONE_OFFSET))(this);
		}

		::System::Int64 EOGFJHMGJOM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_EOGFJHMGJOM_OFFSET))(this);
		}

		::System::Void NJMLKAKLOLI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_NJMLKAKLOLI_OFFSET))(this, a1);
		}

		::System::UInt32 DFBIKPLKBBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_DFBIKPLKBBN_OFFSET))(this);
		}

		::System::Void MDGGAHMGLBH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_MDGGAHMGLBH_OFFSET))(this, a1);
		}

		::System::Boolean BCKKLJNILIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_BCKKLJNILIB_OFFSET))(this);
		}

		::System::Void OIGLFKLNHDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_OIGLFKLNHDJ_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::UInt32 IGLGNAOMDNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_IGLGNAOMDNE_OFFSET))(this);
		}

		::System::Void LOBLCGILKHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_LOBLCGILKHL_OFFSET))(this, a1);
		}

		::System::UInt32 NGHCFNOHLML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_NGHCFNOHLML_OFFSET))(this);
		}

		::System::Void MFDEANFDEFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_MFDEANFDEFK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCMJJLJCHHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCMJJLJCHHP*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCMJJLJCHHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMJJLJCHHP*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCMJJLJCHHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
