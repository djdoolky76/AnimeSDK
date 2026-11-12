#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILKDNFLNLL;
class HLNFNACOFFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HILKDNFLNLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F895F60)
#define HILKDNFLNLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F896340)
#define HILKDNFLNLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8959F0)
#define HILKDNFLNLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F895960)
#define HILKDNFLNLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F895950)
#define HILKDNFLNLL_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1F895AC0)
#define HILKDNFLNLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F895C50)
#define HILKDNFLNLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F895AD0)
#define HILKDNFLNLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F895DD0)
#define HILKDNFLNLL_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1F895AB0)
#define HILKDNFLNLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F895910)
#define HILKDNFLNLL_KKGGPGIKGCJ_OFFSET UNITYSDK_OFFSET(0x1F895A90)
#define HILKDNFLNLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F896130)
#define HILKDNFLNLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F896030)
#define HILKDNFLNLL_NABLONFJGKA_OFFSET UNITYSDK_OFFSET(0x1F895AA0)
#define HILKDNFLNLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F895940)
#define HILKDNFLNLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F895E20)
#define HILKDNFLNLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F895E80)

inline static constexpr unsigned int HILKDNFLNLL_TypeDefinitionIndex = 35680;

	class HILKDNFLNLL : public ::System::Object
	{
	public:
		::HLNFNACOFFF* PFHLPOOHFAC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OEHAKOKDOAA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HILKDNFLNLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HILKDNFLNLL*>**)UnitySDK::FromName("", "HILKDNFLNLL")->GetStaticField(0x31C90);
		}

		// static const ::System::Object BNBFOJPGGJI; // 0x0
		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HILKDNFLNLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILKDNFLNLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HILKDNFLNLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HILKDNFLNLL*>*(*)())((::PBYTE)hIl2Cpp + HILKDNFLNLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HILKDNFLNLL* Clone()
		{
			return ((::HILKDNFLNLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CLONE_OFFSET))(this);
		}

		::HLNFNACOFFF* KKGGPGIKGCJ()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_KKGGPGIKGCJ_OFFSET))(this);
		}

		::System::Void NABLONFJGKA(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_NABLONFJGKA_OFFSET))(this, a1);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HILKDNFLNLL_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HILKDNFLNLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILKDNFLNLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HILKDNFLNLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HILKDNFLNLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
