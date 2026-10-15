#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APAMFCKFHLL_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E671DD0)
#define APAMFCKFHLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E672130)
#define APAMFCKFHLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E672400)
#define APAMFCKFHLL_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E671DE0)
#define APAMFCKFHLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E671D80)
#define APAMFCKFHLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E671D50)
#define APAMFCKFHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E671D40)
#define APAMFCKFHLL_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E671E00)
#define APAMFCKFHLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E671EF0)
#define APAMFCKFHLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E671E10)
#define APAMFCKFHLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E671FC0)
#define APAMFCKFHLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E671D00)
#define APAMFCKFHLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E672280)
#define APAMFCKFHLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E672240)
#define APAMFCKFHLL_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E671DF0)
#define APAMFCKFHLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E671D30)
#define APAMFCKFHLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E671FF0)
#define APAMFCKFHLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E672050)

inline static constexpr unsigned int APAMFCKFHLL_TypeDefinitionIndex = 27827;

	class APAMFCKFHLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDKNJCIEBHA; // 0x18
		::System::UInt32 DFKHBNCHKBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APAMFCKFHLL")->GetStaticField(0x113A0);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APAMFCKFHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APAMFCKFHLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APAMFCKFHLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APAMFCKFHLL* Clone()
		{
			return ((::APAMFCKFHLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APAMFCKFHLL_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APAMFCKFHLL_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APAMFCKFHLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APAMFCKFHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APAMFCKFHLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
