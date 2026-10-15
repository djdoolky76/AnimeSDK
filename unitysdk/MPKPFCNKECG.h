#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMDJAFAHKEL;
class BICCMEPJMDO;
class ENFDMFGIJDC;
class MPKPFCNKECG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPKPFCNKECG_BHLPEBAFOLL_OFFSET UNITYSDK_OFFSET(0x1EAB9D00)
#define MPKPFCNKECG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EABA2A0)
#define MPKPFCNKECG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABA8B0)
#define MPKPFCNKECG_CGKGICHNBHC_OFFSET UNITYSDK_OFFSET(0x1EAB9D10)
#define MPKPFCNKECG_CKIGNHKFOGN_OFFSET UNITYSDK_OFFSET(0x1EAB9D30)
#define MPKPFCNKECG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB9CA0)
#define MPKPFCNKECG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB9B40)
#define MPKPFCNKECG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB9A80)
#define MPKPFCNKECG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB9DB0)
#define MPKPFCNKECG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB9D50)
#define MPKPFCNKECG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB9F70)
#define MPKPFCNKECG_JGDKAHMIEDM_OFFSET UNITYSDK_OFFSET(0x1EAB9D20)
#define MPKPFCNKECG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB9A10)
#define MPKPFCNKECG_LBAKKLHFGFG_OFFSET UNITYSDK_OFFSET(0x1EAB9CF0)
#define MPKPFCNKECG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EABA650)
#define MPKPFCNKECG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EABA430)
#define MPKPFCNKECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB9A70)
#define MPKPFCNKECG_PNOIKPDCGPG_OFFSET UNITYSDK_OFFSET(0x1EAB9D40)
#define MPKPFCNKECG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABA070)
#define MPKPFCNKECG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EABA0D0)

	class MPKPFCNKECG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>* IAHFJPFDEKP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BICCMEPJMDO*>* IEKCMELCOMP; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::ENFDMFGIJDC*>* EDDBOMHAAHL; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::AMDJAFAHKEL* BEHGEAPHLHJ; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>* FNFLAMNJAOO; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_NJJGMPMPKHA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MPKPFCNKECG")->GetStaticField(0x5BA10);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DNINPKHJLFP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MPKPFCNKECG")->GetStaticField(0x5BA18);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MPKPFCNKECG")->GetStaticField(0x5BA20);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LDIGIAPEHMK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MPKPFCNKECG")->GetStaticField(0x5BA28);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FMCALLPGEOL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MPKPFCNKECG")->GetStaticField(0x5BA30);
		}

		// static const ::System::Object BHNEGMEJDBG; // 0x0
		// static const ::System::Object FFAIDJJPFAN; // 0x0
		// static const ::System::Object KMENDDAAPJJ; // 0x0
		// static const ::System::Object DCOILMKIALJ; // 0x0
		// static const ::System::Object BDOOMCGOGOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPKPFCNKECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPKPFCNKECG*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKPFCNKECG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MPKPFCNKECG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPKPFCNKECG* Clone()
		{
			return ((::MPKPFCNKECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CLONE_OFFSET))(this);
		}

		::AMDJAFAHKEL* LBAKKLHFGFG()
		{
			return ((::AMDJAFAHKEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_LBAKKLHFGFG_OFFSET))(this);
		}

		::System::Void BHLPEBAFOLL(::AMDJAFAHKEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDJAFAHKEL*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_BHLPEBAFOLL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>* CGKGICHNBHC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CGKGICHNBHC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BICCMEPJMDO*>* JGDKAHMIEDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BICCMEPJMDO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_JGDKAHMIEDM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>* CKIGNHKFOGN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMDJAFAHKEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CKIGNHKFOGN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ENFDMFGIJDC*>* PNOIKPDCGPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ENFDMFGIJDC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_PNOIKPDCGPG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPKPFCNKECG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPKPFCNKECG*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPFCNKECG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPKPFCNKECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPKPFCNKECG*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPKPFCNKECG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
