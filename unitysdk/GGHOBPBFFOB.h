#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
class KDFPANILFOH;
class KDMEFGANLKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGHOBPBFFOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47CA50)
#define GGHOBPBFFOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47CFB0)
#define GGHOBPBFFOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47C300)
#define GGHOBPBFFOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47C1C0)
#define GGHOBPBFFOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47C160)
#define GGHOBPBFFOB_DNAIFBALHJA_OFFSET UNITYSDK_OFFSET(0x1E47C3A0)
#define GGHOBPBFFOB_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E47C350)
#define GGHOBPBFFOB_EKHKPDGOALG_OFFSET UNITYSDK_OFFSET(0x1E47C3D0)
#define GGHOBPBFFOB_EKMDONOOBCB_OFFSET UNITYSDK_OFFSET(0x1E47C390)
#define GGHOBPBFFOB_EOHMFPCPINM_OFFSET UNITYSDK_OFFSET(0x1E47C370)
#define GGHOBPBFFOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47C4A0)
#define GGHOBPBFFOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47C440)
#define GGHOBPBFFOB_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E47C360)
#define GGHOBPBFFOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47C610)
#define GGHOBPBFFOB_HAEFFIFMNCP_OFFSET UNITYSDK_OFFSET(0x1E47C380)
#define GGHOBPBFFOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47C0F0)
#define GGHOBPBFFOB_LPFAOFNKIIJ_OFFSET UNITYSDK_OFFSET(0x1E47C3B0)
#define GGHOBPBFFOB_MCFNIIKKJKF_OFFSET UNITYSDK_OFFSET(0x1E47C3F0)
#define GGHOBPBFFOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47CDD0)
#define GGHOBPBFFOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47CC70)
#define GGHOBPBFFOB_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1E47C3E0)
#define GGHOBPBFFOB_NOCAKCBNBGE_OFFSET UNITYSDK_OFFSET(0x1E47C3C0)
#define GGHOBPBFFOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47C150)
#define GGHOBPBFFOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47C730)
#define GGHOBPBFFOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47C790)

	class GGHOBPBFFOB : public ::System::Object
	{
	public:
		::KDFPANILFOH* EMBOGJHHDBP; // 0x10
		::System::String* MFDIFJCMBCL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>* MPJJCKAIAEA; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x30
		::System::UInt32 KMOKMCLCJMN; // 0x34
		::System::Boolean DEKGIAKGNME; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_CNLBHEFLNKJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GGHOBPBFFOB")->GetStaticField(0x15CD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GGHOBPBFFOB")->GetStaticField(0x15CD8);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object ENEJKEPABDG; // 0x0
		// static const ::System::Object HGLEECDODDB; // 0x0
		// static const ::System::Object BHKADDMLEKC; // 0x0
		// static const ::System::Object LPBONDIFLIL; // 0x0
		// static const ::System::Object FJDILKCJAIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHOBPBFFOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GGHOBPBFFOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGHOBPBFFOB* Clone()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 EOHMFPCPINM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EOHMFPCPINM_OFFSET))(this);
		}

		::System::Void HAEFFIFMNCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_HAEFFIFMNCP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>* EKMDONOOBCB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EKMDONOOBCB_OFFSET))(this);
		}

		::KDFPANILFOH* DNAIFBALHJA()
		{
			return ((::KDFPANILFOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_DNAIFBALHJA_OFFSET))(this);
		}

		::System::Void LPFAOFNKIIJ(::KDFPANILFOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFPANILFOH*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_LPFAOFNKIIJ_OFFSET))(this, a1);
		}

		::System::Boolean NOCAKCBNBGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_NOCAKCBNBGE_OFFSET))(this);
		}

		::System::Void EKHKPDGOALG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EKHKPDGOALG_OFFSET))(this, a1);
		}

		::System::String* MHLKGONEGDG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_MHLKGONEGDG_OFFSET))(this);
		}

		::System::Void MCFNIIKKJKF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_MCFNIIKKJKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGHOBPBFFOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGHOBPBFFOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
