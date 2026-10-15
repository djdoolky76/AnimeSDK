#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAGMMMINOAJ;
class PBLBAAMLNLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAGMMMINOAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D9600)
#define MAGMMMINOAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D9940)
#define MAGMMMINOAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D9050)
#define MAGMMMINOAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D8FB0)
#define MAGMMMINOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8FA0)
#define MAGMMMINOAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D92C0)
#define MAGMMMINOAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D9140)
#define MAGMMMINOAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9D9130)
#define MAGMMMINOAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D9440)
#define MAGMMMINOAJ_IGFHAGAIFHH_OFFSET UNITYSDK_OFFSET(0x1E9D9100)
#define MAGMMMINOAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D8F60)
#define MAGMMMINOAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D97B0)
#define MAGMMMINOAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D96D0)
#define MAGMMMINOAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9D9120)
#define MAGMMMINOAJ_PACMGJMGOHC_OFFSET UNITYSDK_OFFSET(0x1E9D9110)
#define MAGMMMINOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8F90)
#define MAGMMMINOAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D94C0)
#define MAGMMMINOAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D9520)

inline static constexpr unsigned int MAGMMMINOAJ_TypeDefinitionIndex = 30295;

	class MAGMMMINOAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PBLBAAMLNLH* NNCHMJDCIAH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MAGMMMINOAJ")->GetStaticField(0x42A90);
		}

		// static const ::System::Object JONFNCINDNG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAGMMMINOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MAGMMMINOAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAGMMMINOAJ* Clone()
		{
			return ((::MAGMMMINOAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CLONE_OFFSET))(this);
		}

		::PBLBAAMLNLH* IGFHAGAIFHH()
		{
			return ((::PBLBAAMLNLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_IGFHAGAIFHH_OFFSET))(this);
		}

		::System::Void PACMGJMGOHC(::PBLBAAMLNLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLBAAMLNLH*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_PACMGJMGOHC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAGMMMINOAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAGMMMINOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
