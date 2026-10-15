#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAOBHBLFPEC;
class JNDNJFPANEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNDNJFPANEB_BMDEMDEPIME_OFFSET UNITYSDK_OFFSET(0x1E794520)
#define JNDNJFPANEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E794AE0)
#define JNDNJFPANEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E794DA0)
#define JNDNJFPANEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E794480)
#define JNDNJFPANEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7943F0)
#define JNDNJFPANEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7943E0)
#define JNDNJFPANEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7946B0)
#define JNDNJFPANEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E794540)
#define JNDNJFPANEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E794980)
#define JNDNJFPANEB_JEBIPIODKPP_OFFSET UNITYSDK_OFFSET(0x1E794530)
#define JNDNJFPANEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7943A0)
#define JNDNJFPANEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E794C10)
#define JNDNJFPANEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E794B40)
#define JNDNJFPANEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7943D0)
#define JNDNJFPANEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7949F0)
#define JNDNJFPANEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E794A50)

inline static constexpr unsigned int JNDNJFPANEB_TypeDefinitionIndex = 32782;

	class JNDNJFPANEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAOBHBLFPEC* IAOHFGPKPEK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JNDNJFPANEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNDNJFPANEB*>**)UnitySDK::FromName("", "JNDNJFPANEB")->GetStaticField(0x6C5E0);
		}

		// static const ::System::Object HCPDGJGEOJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNDNJFPANEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNDNJFPANEB*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNDNJFPANEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNDNJFPANEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNDNJFPANEB*>*(*)())((::PBYTE)hIl2Cpp + JNDNJFPANEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNDNJFPANEB* Clone()
		{
			return ((::JNDNJFPANEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_CLONE_OFFSET))(this);
		}

		::GAOBHBLFPEC* BMDEMDEPIME()
		{
			return ((::GAOBHBLFPEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_BMDEMDEPIME_OFFSET))(this);
		}

		::System::Void JEBIPIODKPP(::GAOBHBLFPEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAOBHBLFPEC*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_JEBIPIODKPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNDNJFPANEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNDNJFPANEB*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNDNJFPANEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNDNJFPANEB*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNDNJFPANEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
