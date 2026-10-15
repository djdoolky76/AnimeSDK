#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBOBLNFEHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNBOBLNFEHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4AB980)
#define GNBOBLNFEHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ABC10)
#define GNBOBLNFEHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4AB5A0)
#define GNBOBLNFEHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AB570)
#define GNBOBLNFEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AB560)
#define GNBOBLNFEHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4AB6E0)
#define GNBOBLNFEHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4AB610)
#define GNBOBLNFEHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4AB850)
#define GNBOBLNFEHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4AB520)
#define GNBOBLNFEHI_LFFBJPAANPK_OFFSET UNITYSDK_OFFSET(0x1E4AB600)
#define GNBOBLNFEHI_LPIJKBNFEEP_OFFSET UNITYSDK_OFFSET(0x1E4AB5F0)
#define GNBOBLNFEHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ABAB0)
#define GNBOBLNFEHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4ABA70)
#define GNBOBLNFEHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AB550)
#define GNBOBLNFEHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AB890)
#define GNBOBLNFEHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4AB8F0)

inline static constexpr unsigned int GNBOBLNFEHI_TypeDefinitionIndex = 26649;

	class GNBOBLNFEHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 CMKPAGJOPMB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GNBOBLNFEHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNBOBLNFEHI*>**)UnitySDK::FromName("", "GNBOBLNFEHI")->GetStaticField(0x1F7D0);
		}

		// static const ::System::Object JKCCMACNANL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNBOBLNFEHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBOBLNFEHI*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBOBLNFEHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNBOBLNFEHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNBOBLNFEHI*>*(*)())((::PBYTE)hIl2Cpp + GNBOBLNFEHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNBOBLNFEHI* Clone()
		{
			return ((::GNBOBLNFEHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_CLONE_OFFSET))(this);
		}

		::System::UInt64 LPIJKBNFEEP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_LPIJKBNFEEP_OFFSET))(this);
		}

		::System::Void LFFBJPAANPK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_LFFBJPAANPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNBOBLNFEHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNBOBLNFEHI*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNBOBLNFEHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBOBLNFEHI*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNBOBLNFEHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
