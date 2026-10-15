#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOCPGOBJFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELOCPGOBJFM_BCECGGBFEHK_OFFSET UNITYSDK_OFFSET(0x1E2D7500)
#define ELOCPGOBJFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D7970)
#define ELOCPGOBJFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7BA0)
#define ELOCPGOBJFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D74A0)
#define ELOCPGOBJFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D7460)
#define ELOCPGOBJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7450)
#define ELOCPGOBJFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D75E0)
#define ELOCPGOBJFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D7570)
#define ELOCPGOBJFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D76E0)
#define ELOCPGOBJFM_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E2D7520)
#define ELOCPGOBJFM_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E2D7540)
#define ELOCPGOBJFM_ICMCGHDHBMJ_OFFSET UNITYSDK_OFFSET(0x1E2D74F0)
#define ELOCPGOBJFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D7410)
#define ELOCPGOBJFM_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E2D7560)
#define ELOCPGOBJFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D7AF0)
#define ELOCPGOBJFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D7AA0)
#define ELOCPGOBJFM_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E2D7510)
#define ELOCPGOBJFM_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E2D7550)
#define ELOCPGOBJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7440)
#define ELOCPGOBJFM_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E2D7530)
#define ELOCPGOBJFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D7710)
#define ELOCPGOBJFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D7770)

	class ELOCPGOBJFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean FCDHKKAHONG; // 0x18
		::System::Boolean BBJIDLMAPDF; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 BCLKCLDFMOA; // 0x1C
		::System::UInt32 CGCDBPPFNIC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELOCPGOBJFM")->GetStaticField(0x51840);
		}

		// static const ::System::Object GDNKJDNMILL; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELOCPGOBJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELOCPGOBJFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELOCPGOBJFM* Clone()
		{
			return ((::ELOCPGOBJFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CLONE_OFFSET))(this);
		}

		::System::Boolean ICMCGHDHBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_ICMCGHDHBMJ_OFFSET))(this);
		}

		::System::Void BCECGGBFEHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_BCECGGBFEHK_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 PJLEOJKPGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELOCPGOBJFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELOCPGOBJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
