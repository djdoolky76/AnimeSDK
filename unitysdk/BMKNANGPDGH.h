#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMKNANGPDGH;
class ONKDAPOKGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMKNANGPDGH_AHFAEHPHLCG_OFFSET UNITYSDK_OFFSET(0x1E02B4D0)
#define BMKNANGPDGH_BDJMAOHLPHG_OFFSET UNITYSDK_OFFSET(0x1E02B520)
#define BMKNANGPDGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E02B970)
#define BMKNANGPDGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02BDD0)
#define BMKNANGPDGH_CECIPMNOKJE_OFFSET UNITYSDK_OFFSET(0x1E02B4F0)
#define BMKNANGPDGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E02B480)
#define BMKNANGPDGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E02B3C0)
#define BMKNANGPDGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02B370)
#define BMKNANGPDGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E02B5C0)
#define BMKNANGPDGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E02B560)
#define BMKNANGPDGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E02B660)
#define BMKNANGPDGH_GGEFPHLDMDF_OFFSET UNITYSDK_OFFSET(0x1E02B530)
#define BMKNANGPDGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E02B300)
#define BMKNANGPDGH_KHNAHEFGMMD_OFFSET UNITYSDK_OFFSET(0x1E02B500)
#define BMKNANGPDGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E02BCC0)
#define BMKNANGPDGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E02BBF0)
#define BMKNANGPDGH_MHHDJFGPIDP_OFFSET UNITYSDK_OFFSET(0x1E02B4E0)
#define BMKNANGPDGH_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E02B550)
#define BMKNANGPDGH_NJKGKKLHCOD_OFFSET UNITYSDK_OFFSET(0x1E02B540)
#define BMKNANGPDGH_PBOACCHKGHB_OFFSET UNITYSDK_OFFSET(0x1E02B510)
#define BMKNANGPDGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E02B360)
#define BMKNANGPDGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E02B6F0)
#define BMKNANGPDGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E02B750)

	class BMKNANGPDGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* CBFGBDBJHID; // 0x18
		::System::UInt32 CJELHPADAOM; // 0x20
		::System::UInt32 KHDFCHDDAGG; // 0x24
		::System::UInt32 GGPOMKMILEN; // 0x28
		::System::UInt32 FBGKAJCJFFE; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BMKNANGPDGH")->GetStaticField(0x17F60);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMKNANGPDGH")->GetStaticField(0x17F68);
		}

		// static const ::System::Object ANHPCFEGPMD; // 0x0
		// static const ::System::Object ALGOCKMHFHH; // 0x0
		// static const ::System::Object HOKCAKMNBAO; // 0x0
		// static const ::System::Object CGCECNACJED; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMKNANGPDGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMKNANGPDGH*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKNANGPDGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMKNANGPDGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMKNANGPDGH* Clone()
		{
			return ((::BMKNANGPDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AHFAEHPHLCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_AHFAEHPHLCG_OFFSET))(this);
		}

		::System::Void MHHDJFGPIDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMKNANGPDGH_MHHDJFGPIDP_OFFSET))(this, a1);
		}

		::System::UInt32 CECIPMNOKJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_CECIPMNOKJE_OFFSET))(this);
		}

		::System::Void KHNAHEFGMMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMKNANGPDGH_KHNAHEFGMMD_OFFSET))(this, a1);
		}

		::System::UInt32 PBOACCHKGHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_PBOACCHKGHB_OFFSET))(this);
		}

		::System::Void BDJMAOHLPHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMKNANGPDGH_BDJMAOHLPHG_OFFSET))(this, a1);
		}

		::System::UInt32 GGEFPHLDMDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_GGEFPHLDMDF_OFFSET))(this);
		}

		::System::Void NJKGKKLHCOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMKNANGPDGH_NJKGKKLHCOD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMKNANGPDGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMKNANGPDGH*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMKNANGPDGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMKNANGPDGH*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMKNANGPDGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
