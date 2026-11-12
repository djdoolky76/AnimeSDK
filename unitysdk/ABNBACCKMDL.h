#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABNBACCKMDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABNBACCKMDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFD2410)
#define ABNBACCKMDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD2630)
#define ABNBACCKMDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFD2000)
#define ABNBACCKMDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD1FD0)
#define ABNBACCKMDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD1FC0)
#define ABNBACCKMDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFD2190)
#define ABNBACCKMDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFD2090)
#define ABNBACCKMDL_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1EFD2070)
#define ABNBACCKMDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFD2300)
#define ABNBACCKMDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFD1F50)
#define ABNBACCKMDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFD24D0)
#define ABNBACCKMDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFD24A0)
#define ABNBACCKMDL_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1EFD2080)
#define ABNBACCKMDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFD1FB0)
#define ABNBACCKMDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFD2330)
#define ABNBACCKMDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFD2390)

inline static constexpr unsigned int ABNBACCKMDL_TypeDefinitionIndex = 30141;

	class ABNBACCKMDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ABNBACCKMDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABNBACCKMDL*>**)UnitySDK::FromName("", "ABNBACCKMDL")->GetStaticField(0x346B0);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABNBACCKMDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABNBACCKMDL*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABNBACCKMDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABNBACCKMDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABNBACCKMDL*>*(*)())((::PBYTE)hIl2Cpp + ABNBACCKMDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABNBACCKMDL* Clone()
		{
			return ((::ABNBACCKMDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABNBACCKMDL_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABNBACCKMDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABNBACCKMDL*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABNBACCKMDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABNBACCKMDL*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABNBACCKMDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
