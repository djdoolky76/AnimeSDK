#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILMJJMEBJA.h"
#include "unitysdk/System/Object.h"
class PJBODOPJFGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJBODOPJFGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F225C60)
#define PJBODOPJFGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F225F70)
#define PJBODOPJFGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2258A0)
#define PJBODOPJFGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F225870)
#define PJBODOPJFGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F225860)
#define PJBODOPJFGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F225A10)
#define PJBODOPJFGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F225930)
#define PJBODOPJFGA_FBDKEAIFHIL_OFFSET UNITYSDK_OFFSET(0x1F225910)
#define PJBODOPJFGA_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1F225900)
#define PJBODOPJFGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F225AE0)
#define PJBODOPJFGA_ICIMDGPPLGN_OFFSET UNITYSDK_OFFSET(0x1F225920)
#define PJBODOPJFGA_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1F2258F0)
#define PJBODOPJFGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F225820)
#define PJBODOPJFGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F225DF0)
#define PJBODOPJFGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F225DB0)
#define PJBODOPJFGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F225850)
#define PJBODOPJFGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F225B10)
#define PJBODOPJFGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F225B70)

inline static constexpr unsigned int PJBODOPJFGA_TypeDefinitionIndex = 27984;

	class PJBODOPJFGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FILMJJMEBJA AFHHMCKLLAJ; // 0x18
		::System::UInt32 ANAADAMGEKG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PJBODOPJFGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJBODOPJFGA*>**)UnitySDK::FromName("", "PJBODOPJFGA")->GetStaticField(0x399F0);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object PMKNKLCBDBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJBODOPJFGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBODOPJFGA*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBODOPJFGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJBODOPJFGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJBODOPJFGA*>*(*)())((::PBYTE)hIl2Cpp + PJBODOPJFGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJBODOPJFGA* Clone()
		{
			return ((::PJBODOPJFGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_CLONE_OFFSET))(this);
		}

		::FILMJJMEBJA JBENBABCOGB()
		{
			return ((::FILMJJMEBJA(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::FILMJJMEBJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::FILMJJMEBJA))((::PBYTE)hIl2Cpp + PJBODOPJFGA_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 FBDKEAIFHIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_FBDKEAIFHIL_OFFSET))(this);
		}

		::System::Void ICIMDGPPLGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJBODOPJFGA_ICIMDGPPLGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJBODOPJFGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJBODOPJFGA*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJBODOPJFGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBODOPJFGA*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJBODOPJFGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
