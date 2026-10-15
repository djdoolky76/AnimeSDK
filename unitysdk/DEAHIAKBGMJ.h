#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEAHIAKBGMJ;
class GGHOBPBFFOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEAHIAKBGMJ_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E18D090)
#define DEAHIAKBGMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18D560)
#define DEAHIAKBGMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18D920)
#define DEAHIAKBGMJ_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E18D0A0)
#define DEAHIAKBGMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18CFF0)
#define DEAHIAKBGMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18CF60)
#define DEAHIAKBGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18CF50)
#define DEAHIAKBGMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18D250)
#define DEAHIAKBGMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18D0D0)
#define DEAHIAKBGMJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E18D0C0)
#define DEAHIAKBGMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18D3D0)
#define DEAHIAKBGMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18CF10)
#define DEAHIAKBGMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18D720)
#define DEAHIAKBGMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18D630)
#define DEAHIAKBGMJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E18D0B0)
#define DEAHIAKBGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18CF40)
#define DEAHIAKBGMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18D420)
#define DEAHIAKBGMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18D480)

	class DEAHIAKBGMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DEAHIAKBGMJ")->GetStaticField(0x2F890);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEAHIAKBGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEAHIAKBGMJ*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEAHIAKBGMJ* Clone()
		{
			return ((::DEAHIAKBGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CLONE_OFFSET))(this);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEAHIAKBGMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEAHIAKBGMJ*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEAHIAKBGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEAHIAKBGMJ*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
