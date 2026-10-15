#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCIIMGMIML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHCIIMGMIML_BPHAFCAHJPG_OFFSET UNITYSDK_OFFSET(0x1E35B710)
#define FHCIIMGMIML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35BA80)
#define FHCIIMGMIML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35BD50)
#define FHCIIMGMIML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35B680)
#define FHCIIMGMIML_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E35B6F0)
#define FHCIIMGMIML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35B650)
#define FHCIIMGMIML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35B640)
#define FHCIIMGMIML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35B840)
#define FHCIIMGMIML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35B730)
#define FHCIIMGMIML_GEILLPDBLJG_OFFSET UNITYSDK_OFFSET(0x1E35B720)
#define FHCIIMGMIML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35B910)
#define FHCIIMGMIML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35B5D0)
#define FHCIIMGMIML_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E35B700)
#define FHCIIMGMIML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35BBD0)
#define FHCIIMGMIML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35BB90)
#define FHCIIMGMIML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35B630)
#define FHCIIMGMIML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35B940)
#define FHCIIMGMIML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35B9A0)

inline static constexpr unsigned int FHCIIMGMIML_TypeDefinitionIndex = 27997;

	class FHCIIMGMIML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 HGECOJIAJOA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FHCIIMGMIML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHCIIMGMIML*>**)UnitySDK::FromName("", "FHCIIMGMIML")->GetStaticField(0x4EB00);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object KHDBNNKGJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHCIIMGMIML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCIIMGMIML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHCIIMGMIML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHCIIMGMIML*>*(*)())((::PBYTE)hIl2Cpp + FHCIIMGMIML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHCIIMGMIML* Clone()
		{
			return ((::FHCIIMGMIML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 BPHAFCAHJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_BPHAFCAHJPG_OFFSET))(this);
		}

		::System::Void GEILLPDBLJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHCIIMGMIML_GEILLPDBLJG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHCIIMGMIML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHCIIMGMIML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
