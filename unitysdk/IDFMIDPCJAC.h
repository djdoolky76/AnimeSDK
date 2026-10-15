#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDFMIDPCJAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDFMIDPCJAC_BCNLAHMHJFH_OFFSET UNITYSDK_OFFSET(0x1E5FD070)
#define IDFMIDPCJAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FD3B0)
#define IDFMIDPCJAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD680)
#define IDFMIDPCJAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FD000)
#define IDFMIDPCJAC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E5FD050)
#define IDFMIDPCJAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FCFD0)
#define IDFMIDPCJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FCFC0)
#define IDFMIDPCJAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FD170)
#define IDFMIDPCJAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FD090)
#define IDFMIDPCJAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FD240)
#define IDFMIDPCJAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FCF80)
#define IDFMIDPCJAC_JKHFJOFLIAH_OFFSET UNITYSDK_OFFSET(0x1E5FD080)
#define IDFMIDPCJAC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E5FD060)
#define IDFMIDPCJAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FD500)
#define IDFMIDPCJAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FD4C0)
#define IDFMIDPCJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FCFB0)
#define IDFMIDPCJAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FD270)
#define IDFMIDPCJAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FD2D0)

inline static constexpr unsigned int IDFMIDPCJAC_TypeDefinitionIndex = 29986;

	class IDFMIDPCJAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BAHFIEBMLLO; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IDFMIDPCJAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDFMIDPCJAC*>**)UnitySDK::FromName("", "IDFMIDPCJAC")->GetStaticField(0x45FD0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object DDAHPJKBBMD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDFMIDPCJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDFMIDPCJAC*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDFMIDPCJAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDFMIDPCJAC*>*(*)())((::PBYTE)hIl2Cpp + IDFMIDPCJAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDFMIDPCJAC* Clone()
		{
			return ((::IDFMIDPCJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 BCNLAHMHJFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_BCNLAHMHJFH_OFFSET))(this);
		}

		::System::Void JKHFJOFLIAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_JKHFJOFLIAH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDFMIDPCJAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDFMIDPCJAC*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDFMIDPCJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDFMIDPCJAC*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDFMIDPCJAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
