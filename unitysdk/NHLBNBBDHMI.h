#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIJHCONFIH;
class NHLBNBBDHMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHLBNBBDHMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF2C30)
#define NHLBNBBDHMI_CCLPPMLADLF_OFFSET UNITYSDK_OFFSET(0x1EAF2640)
#define NHLBNBBDHMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF2ED0)
#define NHLBNBBDHMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF25C0)
#define NHLBNBBDHMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF2550)
#define NHLBNBBDHMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF2540)
#define NHLBNBBDHMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF27D0)
#define NHLBNBBDHMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF2660)
#define NHLBNBBDHMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF2AA0)
#define NHLBNBBDHMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF2500)
#define NHLBNBBDHMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF2D20)
#define NHLBNBBDHMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF2C90)
#define NHLBNBBDHMI_NNBFJOPHJFK_OFFSET UNITYSDK_OFFSET(0x1EAF2650)
#define NHLBNBBDHMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF2530)
#define NHLBNBBDHMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF2B40)
#define NHLBNBBDHMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF2BA0)

inline static constexpr unsigned int NHLBNBBDHMI_TypeDefinitionIndex = 32908;

	class NHLBNBBDHMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GMIJHCONFIH* NDNEIFMKELC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NHLBNBBDHMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHLBNBBDHMI*>**)UnitySDK::FromName("", "NHLBNBBDHMI")->GetStaticField(0x64D20);
		}

		// static const ::System::Object LCOKGIEHFLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHLBNBBDHMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLBNBBDHMI*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHLBNBBDHMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHLBNBBDHMI*>*(*)())((::PBYTE)hIl2Cpp + NHLBNBBDHMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHLBNBBDHMI* Clone()
		{
			return ((::NHLBNBBDHMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CLONE_OFFSET))(this);
		}

		::GMIJHCONFIH* CCLPPMLADLF()
		{
			return ((::GMIJHCONFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CCLPPMLADLF_OFFSET))(this);
		}

		::System::Void NNBFJOPHJFK(::GMIJHCONFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIJHCONFIH*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_NNBFJOPHJFK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHLBNBBDHMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHLBNBBDHMI*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHLBNBBDHMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLBNBBDHMI*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHLBNBBDHMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
