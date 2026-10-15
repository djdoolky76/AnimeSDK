#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJFCLMAAAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAJFCLMAAAP_ANEIHHHAKIG_OFFSET UNITYSDK_OFFSET(0x1E41E810)
#define GAJFCLMAAAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41EB80)
#define GAJFCLMAAAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41EDE0)
#define GAJFCLMAAAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41E790)
#define GAJFCLMAAAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41E750)
#define GAJFCLMAAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41E740)
#define GAJFCLMAAAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41E900)
#define GAJFCLMAAAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41E820)
#define GAJFCLMAAAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41E9E0)
#define GAJFCLMAAAP_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E41E7F0)
#define GAJFCLMAAAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41E700)
#define GAJFCLMAAAP_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E41E7E0)
#define GAJFCLMAAAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41EC60)
#define GAJFCLMAAAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41EC20)
#define GAJFCLMAAAP_NLHANNPJECJ_OFFSET UNITYSDK_OFFSET(0x1E41E800)
#define GAJFCLMAAAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41E730)
#define GAJFCLMAAAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41EA10)
#define GAJFCLMAAAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41EA70)

inline static constexpr unsigned int GAJFCLMAAAP_TypeDefinitionIndex = 25958;

	class GAJFCLMAAAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		::System::Boolean PDFDHKMEMJL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GAJFCLMAAAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAJFCLMAAAP*>**)UnitySDK::FromName("", "GAJFCLMAAAP")->GetStaticField(0xB5D0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object OHGFLBLBHIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAJFCLMAAAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJFCLMAAAP*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJFCLMAAAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAJFCLMAAAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAJFCLMAAAP*>*(*)())((::PBYTE)hIl2Cpp + GAJFCLMAAAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAJFCLMAAAP* Clone()
		{
			return ((::GAJFCLMAAAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean NLHANNPJECJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_NLHANNPJECJ_OFFSET))(this);
		}

		::System::Void ANEIHHHAKIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_ANEIHHHAKIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAJFCLMAAAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAJFCLMAAAP*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAJFCLMAAAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJFCLMAAAP*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAJFCLMAAAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
