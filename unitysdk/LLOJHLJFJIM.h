#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLOJHLJFJIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LLOJHLJFJIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E970BB0)
#define LLOJHLJFJIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E970F90)
#define LLOJHLJFJIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E970300)
#define LLOJHLJFJIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E970270)
#define LLOJHLJFJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E970250)
#define LLOJHLJFJIM_ENPDAJAELNO_OFFSET UNITYSDK_OFFSET(0x1E9703C0)
#define LLOJHLJFJIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9705F0)
#define LLOJHLJFJIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9704A0)
#define LLOJHLJFJIM_FEKAJCBJBPM_OFFSET UNITYSDK_OFFSET(0x1E970430)
#define LLOJHLJFJIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9707E0)
#define LLOJHLJFJIM_HNFDGCMOAJN_OFFSET UNITYSDK_OFFSET(0x1E970450)
#define LLOJHLJFJIM_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E9703B0)
#define LLOJHLJFJIM_JBPFOKKILJG_OFFSET UNITYSDK_OFFSET(0x1E970440)
#define LLOJHLJFJIM_JIAKDNOOJFI_OFFSET UNITYSDK_OFFSET(0x1E9703D0)
#define LLOJHLJFJIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E970210)
#define LLOJHLJFJIM_LECGPKPDEKG_OFFSET UNITYSDK_OFFSET(0x1E970420)
#define LLOJHLJFJIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E970E30)
#define LLOJHLJFJIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E970D60)
#define LLOJHLJFJIM_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E9703A0)
#define LLOJHLJFJIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E970240)
#define LLOJHLJFJIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E970990)
#define LLOJHLJFJIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9709F0)

inline static constexpr unsigned int LLOJHLJFJIM_TypeDefinitionIndex = 30160;

	class LLOJHLJFJIM : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::System::String* IKNDNPHGFGD; // 0x18
		::System::String* NHOFGPLLKLG; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt64 NJGCEBDGAGJ; // 0x30
		static ::Google::Protobuf::MessageParser_1<::LLOJHLJFJIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLOJHLJFJIM*>**)UnitySDK::FromName("", "LLOJHLJFJIM")->GetStaticField(0x3CC00);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object IMEINCEEOAF; // 0x0
		// static const ::System::Object IKMOKOHKAPK; // 0x0
		// static const ::System::Object AGPPFHDDMFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLOJHLJFJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLOJHLJFJIM*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOJHLJFJIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLOJHLJFJIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLOJHLJFJIM*>*(*)())((::PBYTE)hIl2Cpp + LLOJHLJFJIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLOJHLJFJIM* Clone()
		{
			return ((::LLOJHLJFJIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::String* ENPDAJAELNO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_ENPDAJAELNO_OFFSET))(this);
		}

		::System::Void JIAKDNOOJFI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_JIAKDNOOJFI_OFFSET))(this, a1);
		}

		::System::UInt64 LECGPKPDEKG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_LECGPKPDEKG_OFFSET))(this);
		}

		::System::Void FEKAJCBJBPM(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_FEKAJCBJBPM_OFFSET))(this, a1);
		}

		::System::String* JBPFOKKILJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_JBPFOKKILJG_OFFSET))(this);
		}

		::System::Void HNFDGCMOAJN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_HNFDGCMOAJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLOJHLJFJIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLOJHLJFJIM*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLOJHLJFJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLOJHLJFJIM*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLOJHLJFJIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
