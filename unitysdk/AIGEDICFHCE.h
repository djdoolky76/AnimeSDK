#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIGEDICFHCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIGEDICFHCE_AOECIIBBHKM_OFFSET UNITYSDK_OFFSET(0x1E27AEB0)
#define AIGEDICFHCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27B280)
#define AIGEDICFHCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27B4E0)
#define AIGEDICFHCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27AE30)
#define AIGEDICFHCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27ADF0)
#define AIGEDICFHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27ADE0)
#define AIGEDICFHCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27B000)
#define AIGEDICFHCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27AEF0)
#define AIGEDICFHCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27B0E0)
#define AIGEDICFHCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27AD70)
#define AIGEDICFHCE_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E27AEE0)
#define AIGEDICFHCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27B360)
#define AIGEDICFHCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27B320)
#define AIGEDICFHCE_NNDBIIGNEHC_OFFSET UNITYSDK_OFFSET(0x1E27AEC0)
#define AIGEDICFHCE_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E27AED0)
#define AIGEDICFHCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27ADD0)
#define AIGEDICFHCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27B110)
#define AIGEDICFHCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27B170)

inline static constexpr unsigned int AIGEDICFHCE_TypeDefinitionIndex = 27744;

	class AIGEDICFHCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BBJIDLMAPDF; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GLMKKNBEMHC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AIGEDICFHCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIGEDICFHCE*>**)UnitySDK::FromName("", "AIGEDICFHCE")->GetStaticField(0x32C90);
		}

		// static const ::System::Object MGKFEIEBFBB; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIGEDICFHCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIGEDICFHCE*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIGEDICFHCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIGEDICFHCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIGEDICFHCE*>*(*)())((::PBYTE)hIl2Cpp + AIGEDICFHCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIGEDICFHCE* Clone()
		{
			return ((::AIGEDICFHCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 AOECIIBBHKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_AOECIIBBHKM_OFFSET))(this);
		}

		::System::Void NNDBIIGNEHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIGEDICFHCE_NNDBIIGNEHC_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIGEDICFHCE_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIGEDICFHCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIGEDICFHCE*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIGEDICFHCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIGEDICFHCE*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIGEDICFHCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
