#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEOAJCCJIAI.h"
#include "unitysdk/System/Object.h"
class CAGELADNAOL;
class GKNMMJHBFEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GKNMMJHBFEM_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E4BB510)
#define GKNMMJHBFEM_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E4BB540)
#define GKNMMJHBFEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BBB40)
#define GKNMMJHBFEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BC110)
#define GKNMMJHBFEM_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E4BB520)
#define GKNMMJHBFEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BB4C0)
#define GKNMMJHBFEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BB3D0)
#define GKNMMJHBFEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BB390)
#define GKNMMJHBFEM_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E4BB530)
#define GKNMMJHBFEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BB5D0)
#define GKNMMJHBFEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BB5A0)
#define GKNMMJHBFEM_FLBBKCLCCNN_OFFSET UNITYSDK_OFFSET(0x1E4BB590)
#define GKNMMJHBFEM_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E4BB500)
#define GKNMMJHBFEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BB740)
#define GKNMMJHBFEM_IAPIBMCIPGD_OFFSET UNITYSDK_OFFSET(0x1E4BB550)
#define GKNMMJHBFEM_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E4BB580)
#define GKNMMJHBFEM_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E4BB4F0)
#define GKNMMJHBFEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BB350)
#define GKNMMJHBFEM_JPFAELCMCPM_OFFSET UNITYSDK_OFFSET(0x1E4BB560)
#define GKNMMJHBFEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BBFA0)
#define GKNMMJHBFEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BBE80)
#define GKNMMJHBFEM_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E4BB570)
#define GKNMMJHBFEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BB380)
#define GKNMMJHBFEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BB840)
#define GKNMMJHBFEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BB8A0)

inline static constexpr unsigned int GKNMMJHBFEM_TypeDefinitionIndex = 32382;

	class GKNMMJHBFEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* BOODOGENLJC; // 0x18
		::Proto::ItemList* DALKEINMPBH; // 0x20
		::System::UInt64 HFNGGLECOHF; // 0x28
		::KEOAJCCJIAI AFHHMCKLLAJ; // 0x30
		::System::UInt32 PLKGEBACJMA; // 0x34
		::System::UInt32 MGPCOLIAECE; // 0x38
		static ::Google::Protobuf::MessageParser_1<::GKNMMJHBFEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKNMMJHBFEM*>**)UnitySDK::FromName("", "GKNMMJHBFEM")->GetStaticField(0x1E2D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CAGELADNAOL*>** StaticGet_JIOPMDOLJGA()
		{
			return (::Google::Protobuf::FieldCodec_1<::CAGELADNAOL*>**)UnitySDK::FromName("", "GKNMMJHBFEM")->GetStaticField(0x1E2D8);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object AOENBKAMJMA; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object PADIHFGJFIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKNMMJHBFEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNMMJHBFEM*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKNMMJHBFEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKNMMJHBFEM*>*(*)())((::PBYTE)hIl2Cpp + GKNMMJHBFEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKNMMJHBFEM* Clone()
		{
			return ((::GKNMMJHBFEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CLONE_OFFSET))(this);
		}

		::KEOAJCCJIAI JBENBABCOGB()
		{
			return ((::KEOAJCCJIAI(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::KEOAJCCJIAI a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEOAJCCJIAI))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt64 IAPIBMCIPGD()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_IAPIBMCIPGD_OFFSET))(this);
		}

		::System::Void JPFAELCMCPM(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_JPFAELCMCPM_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* FLBBKCLCCNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_FLBBKCLCCNN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKNMMJHBFEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKNMMJHBFEM*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKNMMJHBFEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNMMJHBFEM*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKNMMJHBFEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
