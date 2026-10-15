#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMGEJCCBPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFMGEJCCBPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17A1D0)
#define DFMGEJCCBPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17A270)
#define DFMGEJCCBPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E179E70)
#define DFMGEJCCBPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E179E40)
#define DFMGEJCCBPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E179E30)
#define DFMGEJCCBPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E179FD0)
#define DFMGEJCCBPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E179EE0)
#define DFMGEJCCBPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17A130)
#define DFMGEJCCBPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E179DC0)
#define DFMGEJCCBPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17A220)
#define DFMGEJCCBPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17A1F0)
#define DFMGEJCCBPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E179E20)
#define DFMGEJCCBPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17A160)
#define DFMGEJCCBPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17A1C0)

inline static constexpr unsigned int DFMGEJCCBPD_TypeDefinitionIndex = 29533;

	class DFMGEJCCBPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DFMGEJCCBPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFMGEJCCBPD*>**)UnitySDK::FromName("", "DFMGEJCCBPD")->GetStaticField(0x2E850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFMGEJCCBPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMGEJCCBPD*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFMGEJCCBPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFMGEJCCBPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFMGEJCCBPD*>*(*)())((::PBYTE)hIl2Cpp + DFMGEJCCBPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFMGEJCCBPD* Clone()
		{
			return ((::DFMGEJCCBPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFMGEJCCBPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFMGEJCCBPD*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFMGEJCCBPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMGEJCCBPD*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFMGEJCCBPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
