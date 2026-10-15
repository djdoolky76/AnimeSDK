#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFEKEGEFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHFEKEGEFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45A590)
#define GHFEKEGEFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45A860)
#define GHFEKEGEFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45A190)
#define GHFEKEGEFAC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E45A200)
#define GHFEKEGEFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45A160)
#define GHFEKEGEFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45A150)
#define GHFEKEGEFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45A350)
#define GHFEKEGEFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45A240)
#define GHFEKEGEFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45A420)
#define GHFEKEGEFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45A0E0)
#define GHFEKEGEFAC_LCNHPMCNIEN_OFFSET UNITYSDK_OFFSET(0x1E45A220)
#define GHFEKEGEFAC_LKKFLPIDKDJ_OFFSET UNITYSDK_OFFSET(0x1E45A230)
#define GHFEKEGEFAC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E45A210)
#define GHFEKEGEFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45A6E0)
#define GHFEKEGEFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45A6A0)
#define GHFEKEGEFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45A140)
#define GHFEKEGEFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45A450)
#define GHFEKEGEFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45A4B0)

inline static constexpr unsigned int GHFEKEGEFAC_TypeDefinitionIndex = 27995;

	class GHFEKEGEFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 NOKCOPOOLBF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GHFEKEGEFAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHFEKEGEFAC*>**)UnitySDK::FromName("", "GHFEKEGEFAC")->GetStaticField(0x16650);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object KKCKINEDDNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHFEKEGEFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFEKEGEFAC*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHFEKEGEFAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHFEKEGEFAC*>*(*)())((::PBYTE)hIl2Cpp + GHFEKEGEFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHFEKEGEFAC* Clone()
		{
			return ((::GHFEKEGEFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 LCNHPMCNIEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_LCNHPMCNIEN_OFFSET))(this);
		}

		::System::Void LKKFLPIDKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_LKKFLPIDKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHFEKEGEFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHFEKEGEFAC*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHFEKEGEFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFEKEGEFAC*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHFEKEGEFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
