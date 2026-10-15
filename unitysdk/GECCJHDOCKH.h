#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GECCJHDOCKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GECCJHDOCKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E451A10)
#define GECCJHDOCKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E451CE0)
#define GECCJHDOCKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E451610)
#define GECCJHDOCKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4515E0)
#define GECCJHDOCKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4515D0)
#define GECCJHDOCKH_EMMGAKHEOAB_OFFSET UNITYSDK_OFFSET(0x1E4516A0)
#define GECCJHDOCKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4517D0)
#define GECCJHDOCKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4516C0)
#define GECCJHDOCKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4518A0)
#define GECCJHDOCKH_HHEDAIHOANO_OFFSET UNITYSDK_OFFSET(0x1E4516B0)
#define GECCJHDOCKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E451560)
#define GECCJHDOCKH_KGBGNEGKBNL_OFFSET UNITYSDK_OFFSET(0x1E451680)
#define GECCJHDOCKH_LILJNFNMEPL_OFFSET UNITYSDK_OFFSET(0x1E451690)
#define GECCJHDOCKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E451B60)
#define GECCJHDOCKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E451B20)
#define GECCJHDOCKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4515C0)
#define GECCJHDOCKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4518D0)
#define GECCJHDOCKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E451930)

inline static constexpr unsigned int GECCJHDOCKH_TypeDefinitionIndex = 25606;

	class GECCJHDOCKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DLDICAMCAIF; // 0x18
		::System::UInt32 CJBCLGJLEEH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GECCJHDOCKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GECCJHDOCKH*>**)UnitySDK::FromName("", "GECCJHDOCKH")->GetStaticField(0x11580);
		}

		// static const ::System::Object LKFDGGICIDD; // 0x0
		// static const ::System::Object BCEDDCFJFEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GECCJHDOCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GECCJHDOCKH*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GECCJHDOCKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GECCJHDOCKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GECCJHDOCKH*>*(*)())((::PBYTE)hIl2Cpp + GECCJHDOCKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GECCJHDOCKH* Clone()
		{
			return ((::GECCJHDOCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 KGBGNEGKBNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_KGBGNEGKBNL_OFFSET))(this);
		}

		::System::Void LILJNFNMEPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GECCJHDOCKH_LILJNFNMEPL_OFFSET))(this, a1);
		}

		::System::UInt32 EMMGAKHEOAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_EMMGAKHEOAB_OFFSET))(this);
		}

		::System::Void HHEDAIHOANO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GECCJHDOCKH_HHEDAIHOANO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GECCJHDOCKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GECCJHDOCKH*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GECCJHDOCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GECCJHDOCKH*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GECCJHDOCKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
