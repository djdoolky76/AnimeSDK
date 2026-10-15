#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBIACLDGHLJ;
class PPONNIHFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBIACLDGHLJ_ACKKJFCOGNA_OFFSET UNITYSDK_OFFSET(0x1DEF5EE0)
#define PBIACLDGHLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF6370)
#define PBIACLDGHLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF66A0)
#define PBIACLDGHLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF5E20)
#define PBIACLDGHLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF5DA0)
#define PBIACLDGHLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5D90)
#define PBIACLDGHLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF6070)
#define PBIACLDGHLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF5EF0)
#define PBIACLDGHLJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEF5EC0)
#define PBIACLDGHLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF61F0)
#define PBIACLDGHLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF5D50)
#define PBIACLDGHLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF64E0)
#define PBIACLDGHLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF6440)
#define PBIACLDGHLJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEF5EB0)
#define PBIACLDGHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5D80)
#define PBIACLDGHLJ_POEAMHIMFHO_OFFSET UNITYSDK_OFFSET(0x1DEF5ED0)
#define PBIACLDGHLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF6230)
#define PBIACLDGHLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF6290)

inline static constexpr unsigned int PBIACLDGHLJ_TypeDefinitionIndex = 35016;

	class PBIACLDGHLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PPONNIHFJAP* LFHEKFOHLLG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PBIACLDGHLJ")->GetStaticField(0x33480);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBCNCMIDKLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBIACLDGHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBIACLDGHLJ*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIACLDGHLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PBIACLDGHLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBIACLDGHLJ* Clone()
		{
			return ((::PBIACLDGHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::PPONNIHFJAP* POEAMHIMFHO()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_POEAMHIMFHO_OFFSET))(this);
		}

		::System::Void ACKKJFCOGNA(::PPONNIHFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONNIHFJAP*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_ACKKJFCOGNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBIACLDGHLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBIACLDGHLJ*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBIACLDGHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBIACLDGHLJ*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBIACLDGHLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
