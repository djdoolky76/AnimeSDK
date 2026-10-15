#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLECNCOBKCJ;
class NCFKHDIKCNI;
class OHABCOEGDEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHABCOEGDEH_BCKKLJNILIB_OFFSET UNITYSDK_OFFSET(0x1DE2E280)
#define OHABCOEGDEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE2EA40)
#define OHABCOEGDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2F090)
#define OHABCOEGDEH_CKANBEJFJJM_OFFSET UNITYSDK_OFFSET(0x1DE2E270)
#define OHABCOEGDEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE2E1C0)
#define OHABCOEGDEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE2E040)
#define OHABCOEGDEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2DFF0)
#define OHABCOEGDEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE2E320)
#define OHABCOEGDEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE2E2C0)
#define OHABCOEGDEH_FJGPHFGJMAB_OFFSET UNITYSDK_OFFSET(0x1DE2E240)
#define OHABCOEGDEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE2E4A0)
#define OHABCOEGDEH_HNMCPKGPFKO_OFFSET UNITYSDK_OFFSET(0x1DE2E210)
#define OHABCOEGDEH_IEDABECBCEJ_OFFSET UNITYSDK_OFFSET(0x1DE2E250)
#define OHABCOEGDEH_INENLEAPBHP_OFFSET UNITYSDK_OFFSET(0x1DE2E220)
#define OHABCOEGDEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE2DF80)
#define OHABCOEGDEH_JMEBHHPALCC_OFFSET UNITYSDK_OFFSET(0x1DE2E2B0)
#define OHABCOEGDEH_LCAKOPHEGCE_OFFSET UNITYSDK_OFFSET(0x1DE2E260)
#define OHABCOEGDEH_LINMPMINGGO_OFFSET UNITYSDK_OFFSET(0x1DE2E2A0)
#define OHABCOEGDEH_LIPJFEJPBIL_OFFSET UNITYSDK_OFFSET(0x1DE2E230)
#define OHABCOEGDEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE2EE70)
#define OHABCOEGDEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE2EC50)
#define OHABCOEGDEH_OIGLFKLNHDJ_OFFSET UNITYSDK_OFFSET(0x1DE2E290)
#define OHABCOEGDEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE2DFE0)
#define OHABCOEGDEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE2E730)
#define OHABCOEGDEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE2E790)

inline static constexpr unsigned int OHABCOEGDEH_TypeDefinitionIndex = 31884;

	class OHABCOEGDEH : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* MOLKHOAFFLH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>* PMKELJOCKNH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::NCFKHDIKCNI* CDAHEPJCMEL; // 0x28
		::System::UInt32 GECBDIOMIFF; // 0x30
		::System::UInt32 LIGJAGENICG; // 0x34
		::System::Boolean BJCIIMJDDHD; // 0x38
		static ::Google::Protobuf::MessageParser_1<::OHABCOEGDEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHABCOEGDEH*>**)UnitySDK::FromName("", "OHABCOEGDEH")->GetStaticField(0x190D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GLECNCOBKCJ*>** StaticGet_BNAEGAGLJJD()
		{
			return (::Google::Protobuf::FieldCodec_1<::GLECNCOBKCJ*>**)UnitySDK::FromName("", "OHABCOEGDEH")->GetStaticField(0x190D8);
		}

		// static const ::System::Object ICLJDLJMMLB; // 0x0
		// static const ::System::Object JMLBKMKHMNK; // 0x0
		// static const ::System::Object OLIJAFFMKBB; // 0x0
		// static const ::System::Object PAAJFGOJCBM; // 0x0
		// static const ::System::Object HABKMHNBEDK; // 0x0
		// static const ::System::Object POCECAAOJLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHABCOEGDEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHABCOEGDEH*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHABCOEGDEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHABCOEGDEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHABCOEGDEH*>*(*)())((::PBYTE)hIl2Cpp + OHABCOEGDEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHABCOEGDEH* Clone()
		{
			return ((::OHABCOEGDEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_CLONE_OFFSET))(this);
		}

		::NCFKHDIKCNI* HNMCPKGPFKO()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_HNMCPKGPFKO_OFFSET))(this);
		}

		::System::Void INENLEAPBHP(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_INENLEAPBHP_OFFSET))(this, a1);
		}

		::System::UInt32 LIPJFEJPBIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_LIPJFEJPBIL_OFFSET))(this);
		}

		::System::Void FJGPHFGJMAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHABCOEGDEH_FJGPHFGJMAB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>* IEDABECBCEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_IEDABECBCEJ_OFFSET))(this);
		}

		::System::UInt32 LCAKOPHEGCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_LCAKOPHEGCE_OFFSET))(this);
		}

		::System::Void CKANBEJFJJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHABCOEGDEH_CKANBEJFJJM_OFFSET))(this, a1);
		}

		::System::Boolean BCKKLJNILIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_BCKKLJNILIB_OFFSET))(this);
		}

		::System::Void OIGLFKLNHDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHABCOEGDEH_OIGLFKLNHDJ_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* LINMPMINGGO()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_LINMPMINGGO_OFFSET))(this);
		}

		::System::Void JMEBHHPALCC(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_JMEBHHPALCC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHABCOEGDEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHABCOEGDEH*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHABCOEGDEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHABCOEGDEH*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHABCOEGDEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
