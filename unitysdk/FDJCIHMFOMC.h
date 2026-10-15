#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJCIHMFOMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDJCIHMFOMC_AMMKMNDOGCE_OFFSET UNITYSDK_OFFSET(0x1E35AA40)
#define FDJCIHMFOMC_BIHPNHDBOJE_OFFSET UNITYSDK_OFFSET(0x1E35A9C0)
#define FDJCIHMFOMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35B000)
#define FDJCIHMFOMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35B390)
#define FDJCIHMFOMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35A940)
#define FDJCIHMFOMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35A8E0)
#define FDJCIHMFOMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35A8C0)
#define FDJCIHMFOMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35ABC0)
#define FDJCIHMFOMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35AA90)
#define FDJCIHMFOMC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E35AA20)
#define FDJCIHMFOMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35ACF0)
#define FDJCIHMFOMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35A880)
#define FDJCIHMFOMC_JPEGPHLLMKN_OFFSET UNITYSDK_OFFSET(0x1E35A9B0)
#define FDJCIHMFOMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35B190)
#define FDJCIHMFOMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35B130)
#define FDJCIHMFOMC_NPLCDJIMMNE_OFFSET UNITYSDK_OFFSET(0x1E35AA30)
#define FDJCIHMFOMC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E35AA10)
#define FDJCIHMFOMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35A8B0)
#define FDJCIHMFOMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35AE40)
#define FDJCIHMFOMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35AEA0)

inline static constexpr unsigned int FDJCIHMFOMC_TypeDefinitionIndex = 29730;

	class FDJCIHMFOMC : public ::System::Object
	{
	public:
		::System::String* FODIOFHEHOB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::String* HHBKHBPNKKH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FDJCIHMFOMC")->GetStaticField(0x5BBC0);
		}

		// static const ::System::Object FODIECHNCJH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EHELOMBFMLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDJCIHMFOMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJCIHMFOMC*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJCIHMFOMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FDJCIHMFOMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDJCIHMFOMC* Clone()
		{
			return ((::FDJCIHMFOMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_CLONE_OFFSET))(this);
		}

		::System::String* JPEGPHLLMKN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_JPEGPHLLMKN_OFFSET))(this);
		}

		::System::Void BIHPNHDBOJE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_BIHPNHDBOJE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* NPLCDJIMMNE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_NPLCDJIMMNE_OFFSET))(this);
		}

		::System::Void AMMKMNDOGCE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_AMMKMNDOGCE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDJCIHMFOMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDJCIHMFOMC*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDJCIHMFOMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJCIHMFOMC*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDJCIHMFOMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
