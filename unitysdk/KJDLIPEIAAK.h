#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJDLIPEIAAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJDLIPEIAAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83BFE0)
#define KJDLIPEIAAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83C240)
#define KJDLIPEIAAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83BB90)
#define KJDLIPEIAAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83BB50)
#define KJDLIPEIAAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83BB40)
#define KJDLIPEIAAK_DGNAFPLMONI_OFFSET UNITYSDK_OFFSET(0x1E83BC30)
#define KJDLIPEIAAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83BD60)
#define KJDLIPEIAAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83BC50)
#define KJDLIPEIAAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83BE40)
#define KJDLIPEIAAK_HGLIPHCKJAP_OFFSET UNITYSDK_OFFSET(0x1E83BC40)
#define KJDLIPEIAAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83BAD0)
#define KJDLIPEIAAK_LHAIOBAINAA_OFFSET UNITYSDK_OFFSET(0x1E83BC10)
#define KJDLIPEIAAK_MAACBLGBMOL_OFFSET UNITYSDK_OFFSET(0x1E83BC20)
#define KJDLIPEIAAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83C0C0)
#define KJDLIPEIAAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83C080)
#define KJDLIPEIAAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83BB30)
#define KJDLIPEIAAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83BE70)
#define KJDLIPEIAAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83BED0)

inline static constexpr unsigned int KJDLIPEIAAK_TypeDefinitionIndex = 30200;

	class KJDLIPEIAAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NKEKENCAEBC; // 0x18
		::System::Boolean PHCPFHILKJJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KJDLIPEIAAK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJDLIPEIAAK*>**)UnitySDK::FromName("", "KJDLIPEIAAK")->GetStaticField(0x19D00);
		}

		// static const ::System::Object LHCMNGAKFHC; // 0x0
		// static const ::System::Object EEPKMMINMED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJDLIPEIAAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDLIPEIAAK*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJDLIPEIAAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJDLIPEIAAK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJDLIPEIAAK*>*(*)())((::PBYTE)hIl2Cpp + KJDLIPEIAAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJDLIPEIAAK* Clone()
		{
			return ((::KJDLIPEIAAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_CLONE_OFFSET))(this);
		}

		::System::Boolean LHAIOBAINAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_LHAIOBAINAA_OFFSET))(this);
		}

		::System::Void MAACBLGBMOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_MAACBLGBMOL_OFFSET))(this, a1);
		}

		::System::UInt32 DGNAFPLMONI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_DGNAFPLMONI_OFFSET))(this);
		}

		::System::Void HGLIPHCKJAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_HGLIPHCKJAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJDLIPEIAAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJDLIPEIAAK*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJDLIPEIAAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDLIPEIAAK*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJDLIPEIAAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
