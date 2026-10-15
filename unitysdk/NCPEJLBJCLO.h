#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHNNEFBOPIE;
class NCPEJLBJCLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCPEJLBJCLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE25B0)
#define NCPEJLBJCLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE29E0)
#define NCPEJLBJCLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE1F60)
#define NCPEJLBJCLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE1EE0)
#define NCPEJLBJCLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1ED0)
#define NCPEJLBJCLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE21E0)
#define NCPEJLBJCLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE2050)
#define NCPEJLBJCLO_GCGBNAGOLGB_OFFSET UNITYSDK_OFFSET(0x1EAE2020)
#define NCPEJLBJCLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE2370)
#define NCPEJLBJCLO_HLIENAEMAIF_OFFSET UNITYSDK_OFFSET(0x1EAE2010)
#define NCPEJLBJCLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE1E90)
#define NCPEJLBJCLO_KJILKDCCLNM_OFFSET UNITYSDK_OFFSET(0x1EAE2000)
#define NCPEJLBJCLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE27D0)
#define NCPEJLBJCLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE26F0)
#define NCPEJLBJCLO_PBBKIEFGJAP_OFFSET UNITYSDK_OFFSET(0x1EAE2040)
#define NCPEJLBJCLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1EC0)
#define NCPEJLBJCLO_PGAOGGNFFNG_OFFSET UNITYSDK_OFFSET(0x1EAE1FF0)
#define NCPEJLBJCLO_PPMPCAGMGLI_OFFSET UNITYSDK_OFFSET(0x1EAE2030)
#define NCPEJLBJCLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE2410)
#define NCPEJLBJCLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE2470)

inline static constexpr unsigned int NCPEJLBJCLO_TypeDefinitionIndex = 34194;

	class NCPEJLBJCLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MHNNEFBOPIE* NEDMGFEPOKH; // 0x18
		::System::UInt32 LMFIGBEHMJE; // 0x20
		::System::UInt32 HIIMBBHNIBD; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCPEJLBJCLO")->GetStaticField(0x5D3E0);
		}

		// static const ::System::Object HFNMBCJHMFM; // 0x0
		// static const ::System::Object BJOBGBIJHCD; // 0x0
		// static const ::System::Object GJEJNKBBMCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCPEJLBJCLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPEJLBJCLO*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPEJLBJCLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCPEJLBJCLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCPEJLBJCLO* Clone()
		{
			return ((::NCPEJLBJCLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGAOGGNFFNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_PGAOGGNFFNG_OFFSET))(this);
		}

		::System::Void KJILKDCCLNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_KJILKDCCLNM_OFFSET))(this, a1);
		}

		::System::UInt32 HLIENAEMAIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_HLIENAEMAIF_OFFSET))(this);
		}

		::System::Void GCGBNAGOLGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_GCGBNAGOLGB_OFFSET))(this, a1);
		}

		::MHNNEFBOPIE* PPMPCAGMGLI()
		{
			return ((::MHNNEFBOPIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_PPMPCAGMGLI_OFFSET))(this);
		}

		::System::Void PBBKIEFGJAP(::MHNNEFBOPIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_PBBKIEFGJAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCPEJLBJCLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCPEJLBJCLO*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCPEJLBJCLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPEJLBJCLO*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCPEJLBJCLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
