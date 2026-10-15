#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAFEAJCJIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDAFEAJCJIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7069A0)
#define JDAFEAJCJIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E706C70)
#define JDAFEAJCJIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7065F0)
#define JDAFEAJCJIB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E706660)
#define JDAFEAJCJIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7065C0)
#define JDAFEAJCJIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7065B0)
#define JDAFEAJCJIB_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E706640)
#define JDAFEAJCJIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E706760)
#define JDAFEAJCJIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E706680)
#define JDAFEAJCJIB_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E706650)
#define JDAFEAJCJIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E706830)
#define JDAFEAJCJIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E706570)
#define JDAFEAJCJIB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E706670)
#define JDAFEAJCJIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E706AF0)
#define JDAFEAJCJIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E706AB0)
#define JDAFEAJCJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7065A0)
#define JDAFEAJCJIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E706860)
#define JDAFEAJCJIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7068C0)

inline static constexpr unsigned int JDAFEAJCJIB_TypeDefinitionIndex = 32060;

	class JDAFEAJCJIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JDAFEAJCJIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDAFEAJCJIB*>**)UnitySDK::FromName("", "JDAFEAJCJIB")->GetStaticField(0x5DA60);
		}

		// static const ::System::Object FDDDLMBHDMC; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDAFEAJCJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAFEAJCJIB*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDAFEAJCJIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDAFEAJCJIB*>*(*)())((::PBYTE)hIl2Cpp + JDAFEAJCJIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDAFEAJCJIB* Clone()
		{
			return ((::JDAFEAJCJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDAFEAJCJIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDAFEAJCJIB*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDAFEAJCJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAFEAJCJIB*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDAFEAJCJIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
