#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNKADCOKOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJNKADCOKOL_AOECIIBBHKM_OFFSET UNITYSDK_OFFSET(0x1E3C5DB0)
#define AJNKADCOKOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C6160)
#define AJNKADCOKOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C63C0)
#define AJNKADCOKOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C5D10)
#define AJNKADCOKOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C5CD0)
#define AJNKADCOKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5CC0)
#define AJNKADCOKOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C5EE0)
#define AJNKADCOKOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C5DD0)
#define AJNKADCOKOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C5FC0)
#define AJNKADCOKOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C5C50)
#define AJNKADCOKOL_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E3C5DA0)
#define AJNKADCOKOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C6240)
#define AJNKADCOKOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C6200)
#define AJNKADCOKOL_NNDBIIGNEHC_OFFSET UNITYSDK_OFFSET(0x1E3C5DC0)
#define AJNKADCOKOL_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E3C5D90)
#define AJNKADCOKOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5CB0)
#define AJNKADCOKOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C5FF0)
#define AJNKADCOKOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C6050)

inline static constexpr unsigned int AJNKADCOKOL_TypeDefinitionIndex = 27750;

	class AJNKADCOKOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BBJIDLMAPDF; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GLMKKNBEMHC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AJNKADCOKOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJNKADCOKOL*>**)UnitySDK::FromName("", "AJNKADCOKOL")->GetStaticField(0x35D90);
		}

		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object MGKFEIEBFBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJNKADCOKOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNKADCOKOL*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNKADCOKOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJNKADCOKOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJNKADCOKOL*>*(*)())((::PBYTE)hIl2Cpp + AJNKADCOKOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJNKADCOKOL* Clone()
		{
			return ((::AJNKADCOKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_CLONE_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJNKADCOKOL_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 AOECIIBBHKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_AOECIIBBHKM_OFFSET))(this);
		}

		::System::Void NNDBIIGNEHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNKADCOKOL_NNDBIIGNEHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJNKADCOKOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNKADCOKOL*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJNKADCOKOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNKADCOKOL*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJNKADCOKOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
