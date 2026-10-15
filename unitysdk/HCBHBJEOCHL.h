#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class HCBHBJEOCHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }
namespace System { class String; }

#define HCBHBJEOCHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E506710)
#define HCBHBJEOCHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506B70)
#define HCBHBJEOCHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E506020)
#define HCBHBJEOCHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E505F80)
#define HCBHBJEOCHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E505F70)
#define HCBHBJEOCHL_EHDKAEJOCNL_OFFSET UNITYSDK_OFFSET(0x1E506100)
#define HCBHBJEOCHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E506340)
#define HCBHBJEOCHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E506110)
#define HCBHBJEOCHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E506570)
#define HCBHBJEOCHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E505F30)
#define HCBHBJEOCHL_JNGDABPMGIA_OFFSET UNITYSDK_OFFSET(0x1E5060F0)
#define HCBHBJEOCHL_KOIENAAEFCG_OFFSET UNITYSDK_OFFSET(0x1E5060D0)
#define HCBHBJEOCHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5068F0)
#define HCBHBJEOCHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5067A0)
#define HCBHBJEOCHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E505F60)
#define HCBHBJEOCHL_PCPMACGCCCB_OFFSET UNITYSDK_OFFSET(0x1E5060E0)
#define HCBHBJEOCHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5065D0)
#define HCBHBJEOCHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E506630)

inline static constexpr unsigned int HCBHBJEOCHL_TypeDefinitionIndex = 28901;

	class HCBHBJEOCHL : public ::System::Object
	{
	public:
		::Proto::DisplayAvatarDetailInfo* CGKIABINGJC; // 0x10
		::EPBMGIOIHEI* LLNBEBKIOLH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HCBHBJEOCHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCBHBJEOCHL*>**)UnitySDK::FromName("", "HCBHBJEOCHL")->GetStaticField(0x11280);
		}

		// static const ::System::Object AMMCMDGEDLD; // 0x0
		// static const ::System::Object DLFLLLJJOKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBHBJEOCHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCBHBJEOCHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCBHBJEOCHL*>*(*)())((::PBYTE)hIl2Cpp + HCBHBJEOCHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCBHBJEOCHL* Clone()
		{
			return ((::HCBHBJEOCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_CLONE_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* KOIENAAEFCG()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_KOIENAAEFCG_OFFSET))(this);
		}

		::System::Void PCPMACGCCCB(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_PCPMACGCCCB_OFFSET))(this, a1);
		}

		::EPBMGIOIHEI* JNGDABPMGIA()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_JNGDABPMGIA_OFFSET))(this);
		}

		::System::Void EHDKAEJOCNL(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_EHDKAEJOCNL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCBHBJEOCHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCBHBJEOCHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
