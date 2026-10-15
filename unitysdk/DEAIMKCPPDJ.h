#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class DEAIMKCPPDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEAIMKCPPDJ_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E160760)
#define DEAIMKCPPDJ_AGGMJIMKJHH_OFFSET UNITYSDK_OFFSET(0x1E160770)
#define DEAIMKCPPDJ_AMAFNBNAGAH_OFFSET UNITYSDK_OFFSET(0x1E160780)
#define DEAIMKCPPDJ_AMGPCCBIJHG_OFFSET UNITYSDK_OFFSET(0x1E1607F0)
#define DEAIMKCPPDJ_BGLNKBIJNCF_OFFSET UNITYSDK_OFFSET(0x1E1607E0)
#define DEAIMKCPPDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E160EF0)
#define DEAIMKCPPDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1614C0)
#define DEAIMKCPPDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E160700)
#define DEAIMKCPPDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1605F0)
#define DEAIMKCPPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1605A0)
#define DEAIMKCPPDJ_EGNOAJGMHPB_OFFSET UNITYSDK_OFFSET(0x1E160790)
#define DEAIMKCPPDJ_EIDJCBPCIDF_OFFSET UNITYSDK_OFFSET(0x1E160740)
#define DEAIMKCPPDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E160830)
#define DEAIMKCPPDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E160800)
#define DEAIMKCPPDJ_FDBIMIKEHJF_OFFSET UNITYSDK_OFFSET(0x1E160730)
#define DEAIMKCPPDJ_FEBEPFJPPOC_OFFSET UNITYSDK_OFFSET(0x1E1607C0)
#define DEAIMKCPPDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E160A10)
#define DEAIMKCPPDJ_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E160750)
#define DEAIMKCPPDJ_IPCECOKEEDF_OFFSET UNITYSDK_OFFSET(0x1E1607A0)
#define DEAIMKCPPDJ_JGMCAOCNHFM_OFFSET UNITYSDK_OFFSET(0x1E1607D0)
#define DEAIMKCPPDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E160560)
#define DEAIMKCPPDJ_LODEHEGNODG_OFFSET UNITYSDK_OFFSET(0x1E1607B0)
#define DEAIMKCPPDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1612E0)
#define DEAIMKCPPDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1611C0)
#define DEAIMKCPPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E160590)
#define DEAIMKCPPDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E160BF0)
#define DEAIMKCPPDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E160C50)

inline static constexpr unsigned int DEAIMKCPPDJ_TypeDefinitionIndex = 30140;

	class DEAIMKCPPDJ : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* FAGNEGFAFPN; // 0x10
		::CAGKEDMHEOI* MFFKKBJJIAM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DLLEFGJEABF; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 BFOBOOGAHKB; // 0x30
		::System::UInt32 MGEDACJPGJA; // 0x34
		::System::UInt32 BNFAJJPCBEI; // 0x38
		::System::UInt32 FMHHDMCPCJE; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NGCEGOJIBBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DEAIMKCPPDJ")->GetStaticField(0x2A950);
		}

		static ::Google::Protobuf::MessageParser_1<::DEAIMKCPPDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEAIMKCPPDJ*>**)UnitySDK::FromName("", "DEAIMKCPPDJ")->GetStaticField(0x2A958);
		}

		// static const ::System::Object PEGMPHBKJOK; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object LPICLJOJIAH; // 0x0
		// static const ::System::Object LCBFDOBJKAE; // 0x0
		// static const ::System::Object GMNLNFNELLN; // 0x0
		// static const ::System::Object HBKGHGCGGBJ; // 0x0
		// static const ::System::Object KCBJIPMJBNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEAIMKCPPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEAIMKCPPDJ*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEAIMKCPPDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEAIMKCPPDJ*>*(*)())((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEAIMKCPPDJ* Clone()
		{
			return ((::DEAIMKCPPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FDBIMIKEHJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_FDBIMIKEHJF_OFFSET))(this);
		}

		::System::Void EIDJCBPCIDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_EIDJCBPCIDF_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* AGGMJIMKJHH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_AGGMJIMKJHH_OFFSET))(this);
		}

		::System::Void AMAFNBNAGAH(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_AMAFNBNAGAH_OFFSET))(this, a1);
		}

		::System::UInt32 EGNOAJGMHPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_EGNOAJGMHPB_OFFSET))(this);
		}

		::System::Void IPCECOKEEDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_IPCECOKEEDF_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* LODEHEGNODG()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_LODEHEGNODG_OFFSET))(this);
		}

		::System::Void FEBEPFJPPOC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_FEBEPFJPPOC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGMCAOCNHFM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_JGMCAOCNHFM_OFFSET))(this);
		}

		::System::UInt32 BGLNKBIJNCF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_BGLNKBIJNCF_OFFSET))(this);
		}

		::System::Void AMGPCCBIJHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_AMGPCCBIJHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEAIMKCPPDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEAIMKCPPDJ*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEAIMKCPPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEAIMKCPPDJ*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
