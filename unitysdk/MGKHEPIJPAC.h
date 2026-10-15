#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGKHEPIJPAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGKHEPIJPAC_BJKODHDFIFL_OFFSET UNITYSDK_OFFSET(0x1EA26B50)
#define MGKHEPIJPAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA26F80)
#define MGKHEPIJPAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA272B0)
#define MGKHEPIJPAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA26B00)
#define MGKHEPIJPAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA26AC0)
#define MGKHEPIJPAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA26AB0)
#define MGKHEPIJPAC_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1EA26BA0)
#define MGKHEPIJPAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA26CA0)
#define MGKHEPIJPAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA26BB0)
#define MGKHEPIJPAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA26B80)
#define MGKHEPIJPAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA26D80)
#define MGKHEPIJPAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA26A70)
#define MGKHEPIJPAC_KAGECHDNOGE_OFFSET UNITYSDK_OFFSET(0x1EA26B60)
#define MGKHEPIJPAC_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1EA26B90)
#define MGKHEPIJPAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA270F0)
#define MGKHEPIJPAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA270A0)
#define MGKHEPIJPAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA26B70)
#define MGKHEPIJPAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA26AA0)
#define MGKHEPIJPAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA26DB0)
#define MGKHEPIJPAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA26E10)

inline static constexpr unsigned int MGKHEPIJPAC_TypeDefinitionIndex = 30016;

	class MGKHEPIJPAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean ANCOGIJHDNC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DJIJMBMGAPB; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MGKHEPIJPAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGKHEPIJPAC*>**)UnitySDK::FromName("", "MGKHEPIJPAC")->GetStaticField(0x4E410);
		}

		// static const ::System::Object PGOIJMGMDEO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGKHEPIJPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGKHEPIJPAC*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKHEPIJPAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGKHEPIJPAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGKHEPIJPAC*>*(*)())((::PBYTE)hIl2Cpp + MGKHEPIJPAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGKHEPIJPAC* Clone()
		{
			return ((::MGKHEPIJPAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_CLONE_OFFSET))(this);
		}

		::System::Boolean BJKODHDFIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_BJKODHDFIFL_OFFSET))(this);
		}

		::System::Void KAGECHDNOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_KAGECHDNOGE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGKHEPIJPAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGKHEPIJPAC*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGKHEPIJPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGKHEPIJPAC*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGKHEPIJPAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
