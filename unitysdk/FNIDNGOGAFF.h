#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNIDNGOGAFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNIDNGOGAFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202D8F70)
#define FNIDNGOGAFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x202D9240)
#define FNIDNGOGAFF_CIPGEGCLDKG_OFFSET UNITYSDK_OFFSET(0x202D8C30)
#define FNIDNGOGAFF_CLONE_OFFSET UNITYSDK_OFFSET(0x202D8BC0)
#define FNIDNGOGAFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202D8B90)
#define FNIDNGOGAFF_CTOR_OFFSET UNITYSDK_OFFSET(0x202D8B80)
#define FNIDNGOGAFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202D8D30)
#define FNIDNGOGAFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x202D8C50)
#define FNIDNGOGAFF_FFAENEBEACN_OFFSET UNITYSDK_OFFSET(0x202D8C10)
#define FNIDNGOGAFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202D8E00)
#define FNIDNGOGAFF_IEOEPJABHOH_OFFSET UNITYSDK_OFFSET(0x202D8C40)
#define FNIDNGOGAFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202D8B40)
#define FNIDNGOGAFF_JPMMNHAGFPI_OFFSET UNITYSDK_OFFSET(0x202D8C20)
#define FNIDNGOGAFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202D90C0)
#define FNIDNGOGAFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202D9080)
#define FNIDNGOGAFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202D8B70)
#define FNIDNGOGAFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202D8E30)
#define FNIDNGOGAFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x202D8E90)

inline static constexpr unsigned int FNIDNGOGAFF_TypeDefinitionIndex = 31179;

	class FNIDNGOGAFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LMFAGPOFDII; // 0x18
		::System::UInt32 JKAKCPDNIDO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>**)UnitySDK::FromName("", "FNIDNGOGAFF")->GetStaticField(0x4FA60);
		}

		// static const ::System::Object FOBFDNFNFGF; // 0x0
		// static const ::System::Object KCAIBGHDMOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNIDNGOGAFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNIDNGOGAFF*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>*(*)())((::PBYTE)hIl2Cpp + FNIDNGOGAFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNIDNGOGAFF* Clone()
		{
			return ((::FNIDNGOGAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFAENEBEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_FFAENEBEACN_OFFSET))(this);
		}

		::System::Void JPMMNHAGFPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_JPMMNHAGFPI_OFFSET))(this, a1);
		}

		::System::UInt32 CIPGEGCLDKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CIPGEGCLDKG_OFFSET))(this);
		}

		::System::Void IEOEPJABHOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_IEOEPJABHOH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNIDNGOGAFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNIDNGOGAFF*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNIDNGOGAFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNIDNGOGAFF*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
