#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAIHLAKPABN;
class OEDHMAHDECC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAIHLAKPABN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E326260)
#define FAIHLAKPABN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E326790)
#define FAIHLAKPABN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E325AF0)
#define FAIHLAKPABN_CNMIOHHLPED_OFFSET UNITYSDK_OFFSET(0x1E325C90)
#define FAIHLAKPABN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E325A50)
#define FAIHLAKPABN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E325A40)
#define FAIHLAKPABN_ECPPACKHEMO_OFFSET UNITYSDK_OFFSET(0x1E325C30)
#define FAIHLAKPABN_EJFJKEEKDJJ_OFFSET UNITYSDK_OFFSET(0x1E325C20)
#define FAIHLAKPABN_EJNOADIMPCN_OFFSET UNITYSDK_OFFSET(0x1E325CA0)
#define FAIHLAKPABN_EOLHOJALBHG_OFFSET UNITYSDK_OFFSET(0x1E325CB0)
#define FAIHLAKPABN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E325D80)
#define FAIHLAKPABN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E325CC0)
#define FAIHLAKPABN_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1E325C50)
#define FAIHLAKPABN_GACICMLAJKF_OFFSET UNITYSDK_OFFSET(0x1E325C00)
#define FAIHLAKPABN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E325EB0)
#define FAIHLAKPABN_GHEKCHABMMK_OFFSET UNITYSDK_OFFSET(0x1E325BE0)
#define FAIHLAKPABN_GLNCNDOFACB_OFFSET UNITYSDK_OFFSET(0x1E325C60)
#define FAIHLAKPABN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3259D0)
#define FAIHLAKPABN_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1E325C40)
#define FAIHLAKPABN_LBDMOIIHMCN_OFFSET UNITYSDK_OFFSET(0x1E325C10)
#define FAIHLAKPABN_MCBJPDHALIA_OFFSET UNITYSDK_OFFSET(0x1E325C80)
#define FAIHLAKPABN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E326650)
#define FAIHLAKPABN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E326570)
#define FAIHLAKPABN_MKPBGECMMAF_OFFSET UNITYSDK_OFFSET(0x1E325C70)
#define FAIHLAKPABN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E325A30)
#define FAIHLAKPABN_PJMBFIAALJI_OFFSET UNITYSDK_OFFSET(0x1E325BF0)
#define FAIHLAKPABN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E325F20)
#define FAIHLAKPABN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E325F80)

inline static constexpr unsigned int FAIHLAKPABN_TypeDefinitionIndex = 29690;

	class FAIHLAKPABN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OEDHMAHDECC* GDLOOLAHGPP; // 0x18
		::System::UInt32 GHPODDOILHM; // 0x20
		::System::UInt32 LONCJONKFBI; // 0x24
		::System::UInt32 PFLKHLNOPII; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 AMNFFPLPFFA; // 0x30
		::System::UInt32 MFOHDJELADI; // 0x38
		::System::Boolean CEFANFEAKOO; // 0x3C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAIHLAKPABN")->GetStaticField(0x58150);
		}

		// static const ::System::Object OKENLPAIGBI; // 0x0
		// static const ::System::Object NNCIDOOJFBD; // 0x0
		// static const ::System::Object NAGEGHAOEII; // 0x0
		// static const ::System::Object JDLHDMKEFKL; // 0x0
		// static const ::System::Object PFOKFPCPGFB; // 0x0
		// static const ::System::Object KKIMIDAJBDE; // 0x0
		// static const ::System::Object JPIOIAGIJCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAIHLAKPABN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAIHLAKPABN*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIHLAKPABN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAIHLAKPABN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAIHLAKPABN* Clone()
		{
			return ((::FAIHLAKPABN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHEKCHABMMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_GHEKCHABMMK_OFFSET))(this);
		}

		::System::Void PJMBFIAALJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIHLAKPABN_PJMBFIAALJI_OFFSET))(this, a1);
		}

		::System::UInt32 GACICMLAJKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_GACICMLAJKF_OFFSET))(this);
		}

		::System::Void LBDMOIIHMCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIHLAKPABN_LBDMOIIHMCN_OFFSET))(this, a1);
		}

		::System::Boolean EJFJKEEKDJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_EJFJKEEKDJJ_OFFSET))(this);
		}

		::System::Void ECPPACKHEMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAIHLAKPABN_ECPPACKHEMO_OFFSET))(this, a1);
		}

		::OEDHMAHDECC* KAFMPINCMJJ()
		{
			return ((::OEDHMAHDECC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::OEDHMAHDECC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDHMAHDECC*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::System::Int64 GLNCNDOFACB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_GLNCNDOFACB_OFFSET))(this);
		}

		::System::Void MKPBGECMMAF(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FAIHLAKPABN_MKPBGECMMAF_OFFSET))(this, a1);
		}

		::System::UInt32 MCBJPDHALIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_MCBJPDHALIA_OFFSET))(this);
		}

		::System::Void CNMIOHHLPED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIHLAKPABN_CNMIOHHLPED_OFFSET))(this, a1);
		}

		::System::UInt32 EJNOADIMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_EJNOADIMPCN_OFFSET))(this);
		}

		::System::Void EOLHOJALBHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIHLAKPABN_EOLHOJALBHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAIHLAKPABN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAIHLAKPABN*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAIHLAKPABN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAIHLAKPABN*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAIHLAKPABN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
