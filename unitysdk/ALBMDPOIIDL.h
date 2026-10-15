#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBMDPOIIDL;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALBMDPOIIDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D3400)
#define ALBMDPOIIDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D36A0)
#define ALBMDPOIIDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D2D90)
#define ALBMDPOIIDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D2D20)
#define ALBMDPOIIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D2D10)
#define ALBMDPOIIDL_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1E3D2E10)
#define ALBMDPOIIDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D2FA0)
#define ALBMDPOIIDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D2E30)
#define ALBMDPOIIDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D3270)
#define ALBMDPOIIDL_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1E3D2E20)
#define ALBMDPOIIDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D2CD0)
#define ALBMDPOIIDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D34F0)
#define ALBMDPOIIDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D3460)
#define ALBMDPOIIDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D2D00)
#define ALBMDPOIIDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D3310)
#define ALBMDPOIIDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D3370)

inline static constexpr unsigned int ALBMDPOIIDL_TypeDefinitionIndex = 33533;

	class ALBMDPOIIDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ALBMDPOIIDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALBMDPOIIDL*>**)UnitySDK::FromName("", "ALBMDPOIIDL")->GetStaticField(0x37650);
		}

		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALBMDPOIIDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBMDPOIIDL*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBMDPOIIDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALBMDPOIIDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALBMDPOIIDL*>*(*)())((::PBYTE)hIl2Cpp + ALBMDPOIIDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALBMDPOIIDL* Clone()
		{
			return ((::ALBMDPOIIDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALBMDPOIIDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALBMDPOIIDL*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALBMDPOIIDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBMDPOIIDL*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALBMDPOIIDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
