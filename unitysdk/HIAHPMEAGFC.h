#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAHPMEAGFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIAHPMEAGFC_CAHFFBFBKJC_OFFSET UNITYSDK_OFFSET(0x1E560E10)
#define HIAHPMEAGFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5611E0)
#define HIAHPMEAGFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5613A0)
#define HIAHPMEAGFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E560DC0)
#define HIAHPMEAGFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E560D90)
#define HIAHPMEAGFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E560D80)
#define HIAHPMEAGFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E560F10)
#define HIAHPMEAGFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E560E30)
#define HIAHPMEAGFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E561090)
#define HIAHPMEAGFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E560D40)
#define HIAHPMEAGFC_MAGCGBMPGFP_OFFSET UNITYSDK_OFFSET(0x1E560E20)
#define HIAHPMEAGFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E561240)
#define HIAHPMEAGFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E561210)
#define HIAHPMEAGFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E560D70)
#define HIAHPMEAGFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5610C0)
#define HIAHPMEAGFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E561120)

inline static constexpr unsigned int HIAHPMEAGFC_TypeDefinitionIndex = 33638;

	class HIAHPMEAGFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NEHPMMHOBEK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HIAHPMEAGFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIAHPMEAGFC*>**)UnitySDK::FromName("", "HIAHPMEAGFC")->GetStaticField(0x33270);
		}

		// static const ::System::Object CCLPKJGLGMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIAHPMEAGFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAHPMEAGFC*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIAHPMEAGFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIAHPMEAGFC*>*(*)())((::PBYTE)hIl2Cpp + HIAHPMEAGFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIAHPMEAGFC* Clone()
		{
			return ((::HIAHPMEAGFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CLONE_OFFSET))(this);
		}

		::System::Boolean CAHFFBFBKJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CAHFFBFBKJC_OFFSET))(this);
		}

		::System::Void MAGCGBMPGFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_MAGCGBMPGFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIAHPMEAGFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIAHPMEAGFC*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIAHPMEAGFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAHPMEAGFC*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIAHPMEAGFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
