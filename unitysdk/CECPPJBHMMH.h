#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CECPPJBHMMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CECPPJBHMMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3547C0)
#define CECPPJBHMMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F354AD0)
#define CECPPJBHMMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F354340)
#define CECPPJBHMMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F354300)
#define CECPPJBHMMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3542F0)
#define CECPPJBHMMH_ECPPACKHEMO_OFFSET UNITYSDK_OFFSET(0x1F3543C0)
#define CECPPJBHMMH_EJFJKEEKDJJ_OFFSET UNITYSDK_OFFSET(0x1F3543B0)
#define CECPPJBHMMH_EJNOADIMPCN_OFFSET UNITYSDK_OFFSET(0x1F354390)
#define CECPPJBHMMH_EOLHOJALBHG_OFFSET UNITYSDK_OFFSET(0x1F3543A0)
#define CECPPJBHMMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3544E0)
#define CECPPJBHMMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3543F0)
#define CECPPJBHMMH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F3543E0)
#define CECPPJBHMMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3545C0)
#define CECPPJBHMMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3542B0)
#define CECPPJBHMMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F354930)
#define CECPPJBHMMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3548E0)
#define CECPPJBHMMH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F3543D0)
#define CECPPJBHMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3542E0)
#define CECPPJBHMMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3545F0)
#define CECPPJBHMMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F354650)

inline static constexpr unsigned int CECPPJBHMMH_TypeDefinitionIndex = 30516;

	class CECPPJBHMMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean CEFANFEAKOO; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 LONCJONKFBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CECPPJBHMMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CECPPJBHMMH*>**)UnitySDK::FromName("", "CECPPJBHMMH")->GetStaticField(0x5D850);
		}

		// static const ::System::Object JPIOIAGIJCN; // 0x0
		// static const ::System::Object NAGEGHAOEII; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CECPPJBHMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CECPPJBHMMH*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECPPJBHMMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CECPPJBHMMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CECPPJBHMMH*>*(*)())((::PBYTE)hIl2Cpp + CECPPJBHMMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CECPPJBHMMH* Clone()
		{
			return ((::CECPPJBHMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJNOADIMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_EJNOADIMPCN_OFFSET))(this);
		}

		::System::Void EOLHOJALBHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CECPPJBHMMH_EOLHOJALBHG_OFFSET))(this, a1);
		}

		::System::Boolean EJFJKEEKDJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_EJFJKEEKDJJ_OFFSET))(this);
		}

		::System::Void ECPPACKHEMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CECPPJBHMMH_ECPPACKHEMO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CECPPJBHMMH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CECPPJBHMMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CECPPJBHMMH*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CECPPJBHMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CECPPJBHMMH*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CECPPJBHMMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
