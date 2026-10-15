#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMDLKJHMED;
class OPGKKPEDKCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFMDLKJHMED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1DB40)
#define OFMDLKJHMED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1DF60)
#define OFMDLKJHMED_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1D4F0)
#define OFMDLKJHMED_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE1D5C0)
#define OFMDLKJHMED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1D460)
#define OFMDLKJHMED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1D450)
#define OFMDLKJHMED_EPMLBJKPIIO_OFFSET UNITYSDK_OFFSET(0x1DE1D610)
#define OFMDLKJHMED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1D770)
#define OFMDLKJHMED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1D640)
#define OFMDLKJHMED_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DE1D620)
#define OFMDLKJHMED_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1DE1D630)
#define OFMDLKJHMED_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x1DE1D600)
#define OFMDLKJHMED_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1DE1D5F0)
#define OFMDLKJHMED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1D910)
#define OFMDLKJHMED_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1DE1D5E0)
#define OFMDLKJHMED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1D3E0)
#define OFMDLKJHMED_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE1D5D0)
#define OFMDLKJHMED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1DE20)
#define OFMDLKJHMED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1DD00)
#define OFMDLKJHMED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1D440)
#define OFMDLKJHMED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1D950)
#define OFMDLKJHMED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1D9B0)

inline static constexpr unsigned int OFMDLKJHMED_TypeDefinitionIndex = 26568;

	class OFMDLKJHMED : public ::System::Object
	{
	public:
		::OPGKKPEDKCL* CLNKJEMCBJL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 AFHHMCKLLAJ; // 0x24
		::System::UInt32 GKOHBFHOFKN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OFMDLKJHMED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFMDLKJHMED*>**)UnitySDK::FromName("", "OFMDLKJHMED")->GetStaticField(0x16FD0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object AFKMJBBNHPJ; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFMDLKJHMED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMDLKJHMED*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMDLKJHMED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFMDLKJHMED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFMDLKJHMED*>*(*)())((::PBYTE)hIl2Cpp + OFMDLKJHMED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFMDLKJHMED* Clone()
		{
			return ((::OFMDLKJHMED*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMDLKJHMED_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 JBENBABCOGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMDLKJHMED_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::OPGKKPEDKCL* FMHKLHAKMKO()
		{
			return ((::OPGKKPEDKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void EPMLBJKPIIO(::OPGKKPEDKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPGKKPEDKCL*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_EPMLBJKPIIO_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMDLKJHMED_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFMDLKJHMED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFMDLKJHMED*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFMDLKJHMED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMDLKJHMED*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFMDLKJHMED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
