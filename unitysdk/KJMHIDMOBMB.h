#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMHIDMOBMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJMHIDMOBMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86F7C0)
#define KJMHIDMOBMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86FC70)
#define KJMHIDMOBMB_CIBMCHELNIM_OFFSET UNITYSDK_OFFSET(0x1E86F1C0)
#define KJMHIDMOBMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86F140)
#define KJMHIDMOBMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86F090)
#define KJMHIDMOBMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86F040)
#define KJMHIDMOBMB_DIBCDPMFOMA_OFFSET UNITYSDK_OFFSET(0x1E86F220)
#define KJMHIDMOBMB_DKLJPEMBAEN_OFFSET UNITYSDK_OFFSET(0x1E86F230)
#define KJMHIDMOBMB_DMHJKBIIJMF_OFFSET UNITYSDK_OFFSET(0x1E86F1A0)
#define KJMHIDMOBMB_EACKJOOGINC_OFFSET UNITYSDK_OFFSET(0x1E86F210)
#define KJMHIDMOBMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86F310)
#define KJMHIDMOBMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86F240)
#define KJMHIDMOBMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86F3A0)
#define KJMHIDMOBMB_HCPGAMJEGMB_OFFSET UNITYSDK_OFFSET(0x1E86F1E0)
#define KJMHIDMOBMB_HFMFAJNDGBF_OFFSET UNITYSDK_OFFSET(0x1E86F1B0)
#define KJMHIDMOBMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86EFD0)
#define KJMHIDMOBMB_KDEGKNLDHJM_OFFSET UNITYSDK_OFFSET(0x1E86F1F0)
#define KJMHIDMOBMB_LGEGGADIHME_OFFSET UNITYSDK_OFFSET(0x1E86F200)
#define KJMHIDMOBMB_LOIFPIDCOBB_OFFSET UNITYSDK_OFFSET(0x1E86F1D0)
#define KJMHIDMOBMB_MAAFKMKBIII_OFFSET UNITYSDK_OFFSET(0x1E86F190)
#define KJMHIDMOBMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86FB20)
#define KJMHIDMOBMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86FAA0)
#define KJMHIDMOBMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86F030)
#define KJMHIDMOBMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86F4C0)
#define KJMHIDMOBMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86F520)

inline static constexpr unsigned int KJMHIDMOBMB_TypeDefinitionIndex = 29910;

	class KJMHIDMOBMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEDOOIEBNBO; // 0x18
		::System::UInt32 EJNCMIEKEND; // 0x20
		::System::UInt32 OCOEMBCBOKJ; // 0x24
		::System::UInt64 GKPFEOAKHHG; // 0x28
		::System::UInt32 MPBJDFNLAEN; // 0x30
		::System::Boolean ILINDIKMMFM; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ELEBPECBAKB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KJMHIDMOBMB")->GetStaticField(0x1CC60);
		}

		static ::Google::Protobuf::MessageParser_1<::KJMHIDMOBMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJMHIDMOBMB*>**)UnitySDK::FromName("", "KJMHIDMOBMB")->GetStaticField(0x1CC68);
		}

		// static const ::System::Object NHJIBOGBAFA; // 0x0
		// static const ::System::Object NENCKFCOEHC; // 0x0
		// static const ::System::Object OPMIEFGNPBG; // 0x0
		// static const ::System::Object LGNHOEMIIGI; // 0x0
		// static const ::System::Object FCJJKMIOMEI; // 0x0
		// static const ::System::Object ELKIOPABEIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJMHIDMOBMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMHIDMOBMB*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJMHIDMOBMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJMHIDMOBMB*>*(*)())((::PBYTE)hIl2Cpp + KJMHIDMOBMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJMHIDMOBMB* Clone()
		{
			return ((::KJMHIDMOBMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MAAFKMKBIII()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_MAAFKMKBIII_OFFSET))(this);
		}

		::System::Boolean DMHJKBIIJMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_DMHJKBIIJMF_OFFSET))(this);
		}

		::System::Void HFMFAJNDGBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_HFMFAJNDGBF_OFFSET))(this, a1);
		}

		::System::UInt32 CIBMCHELNIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CIBMCHELNIM_OFFSET))(this);
		}

		::System::Void LOIFPIDCOBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_LOIFPIDCOBB_OFFSET))(this, a1);
		}

		::System::UInt32 HCPGAMJEGMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_HCPGAMJEGMB_OFFSET))(this);
		}

		::System::Void KDEGKNLDHJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_KDEGKNLDHJM_OFFSET))(this, a1);
		}

		::System::UInt32 LGEGGADIHME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_LGEGGADIHME_OFFSET))(this);
		}

		::System::Void EACKJOOGINC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_EACKJOOGINC_OFFSET))(this, a1);
		}

		::System::UInt64 DIBCDPMFOMA()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_DIBCDPMFOMA_OFFSET))(this);
		}

		::System::Void DKLJPEMBAEN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_DKLJPEMBAEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJMHIDMOBMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJMHIDMOBMB*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJMHIDMOBMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMHIDMOBMB*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJMHIDMOBMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
