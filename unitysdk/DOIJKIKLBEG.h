#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOIJKIKLBEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOIJKIKLBEG_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E2017F0)
#define DOIJKIKLBEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E201B20)
#define DOIJKIKLBEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E201DF0)
#define DOIJKIKLBEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E201770)
#define DOIJKIKLBEG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2017C0)
#define DOIJKIKLBEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E201740)
#define DOIJKIKLBEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E201730)
#define DOIJKIKLBEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2018E0)
#define DOIJKIKLBEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E201800)
#define DOIJKIKLBEG_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E2017E0)
#define DOIJKIKLBEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2019B0)
#define DOIJKIKLBEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2016F0)
#define DOIJKIKLBEG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2017D0)
#define DOIJKIKLBEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E201C70)
#define DOIJKIKLBEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E201C30)
#define DOIJKIKLBEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E201720)
#define DOIJKIKLBEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2019E0)
#define DOIJKIKLBEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E201A40)

inline static constexpr unsigned int DOIJKIKLBEG_TypeDefinitionIndex = 31370;

	class DOIJKIKLBEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOIJKIKLBEG")->GetStaticField(0x41F10);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOIJKIKLBEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIJKIKLBEG*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOIJKIKLBEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOIJKIKLBEG* Clone()
		{
			return ((::DOIJKIKLBEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOIJKIKLBEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOIJKIKLBEG*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOIJKIKLBEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIJKIKLBEG*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOIJKIKLBEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
