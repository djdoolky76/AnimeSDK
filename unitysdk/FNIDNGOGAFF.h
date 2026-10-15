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

#define FNIDNGOGAFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F0A60)
#define FNIDNGOGAFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0D30)
#define FNIDNGOGAFF_CIPGEGCLDKG_OFFSET UNITYSDK_OFFSET(0x1E3F0700)
#define FNIDNGOGAFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F06B0)
#define FNIDNGOGAFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F0680)
#define FNIDNGOGAFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0670)
#define FNIDNGOGAFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F0820)
#define FNIDNGOGAFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F0740)
#define FNIDNGOGAFF_FFAENEBEACN_OFFSET UNITYSDK_OFFSET(0x1E3F0720)
#define FNIDNGOGAFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F08F0)
#define FNIDNGOGAFF_IEOEPJABHOH_OFFSET UNITYSDK_OFFSET(0x1E3F0710)
#define FNIDNGOGAFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F0630)
#define FNIDNGOGAFF_JPMMNHAGFPI_OFFSET UNITYSDK_OFFSET(0x1E3F0730)
#define FNIDNGOGAFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F0BB0)
#define FNIDNGOGAFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F0B70)
#define FNIDNGOGAFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0660)
#define FNIDNGOGAFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F0920)
#define FNIDNGOGAFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F0980)

inline static constexpr unsigned int FNIDNGOGAFF_TypeDefinitionIndex = 30277;

	class FNIDNGOGAFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LMFAGPOFDII; // 0x18
		::System::UInt32 JKAKCPDNIDO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNIDNGOGAFF*>**)UnitySDK::FromName("", "FNIDNGOGAFF")->GetStaticField(0xE930);
		}

		// static const ::System::Object KCAIBGHDMOO; // 0x0
		// static const ::System::Object FOBFDNFNFGF; // 0x0
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

		::System::UInt32 CIPGEGCLDKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_CIPGEGCLDKG_OFFSET))(this);
		}

		::System::Void IEOEPJABHOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_IEOEPJABHOH_OFFSET))(this, a1);
		}

		::System::UInt32 FFAENEBEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_FFAENEBEACN_OFFSET))(this);
		}

		::System::Void JPMMNHAGFPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNIDNGOGAFF_JPMMNHAGFPI_OFFSET))(this, a1);
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
