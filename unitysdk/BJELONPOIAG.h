#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJELONPOIAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJELONPOIAG_AKCGHIOECFE_OFFSET UNITYSDK_OFFSET(0x1DDDAFE0)
#define BJELONPOIAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDB360)
#define BJELONPOIAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB6E0)
#define BJELONPOIAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDAF40)
#define BJELONPOIAG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DDDAF90)
#define BJELONPOIAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDAF00)
#define BJELONPOIAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAEF0)
#define BJELONPOIAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDB0D0)
#define BJELONPOIAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDAFF0)
#define BJELONPOIAG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDDAFC0)
#define BJELONPOIAG_FBMICLGHCBD_OFFSET UNITYSDK_OFFSET(0x1DDDAFD0)
#define BJELONPOIAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDB1A0)
#define BJELONPOIAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDAEB0)
#define BJELONPOIAG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DDDAFA0)
#define BJELONPOIAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDB540)
#define BJELONPOIAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDB4F0)
#define BJELONPOIAG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDDAFB0)
#define BJELONPOIAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAEE0)
#define BJELONPOIAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDB1D0)
#define BJELONPOIAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDB230)

inline static constexpr unsigned int BJELONPOIAG_TypeDefinitionIndex = 28173;

	class BJELONPOIAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 KHNMADKENHN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BJELONPOIAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJELONPOIAG*>**)UnitySDK::FromName("", "BJELONPOIAG")->GetStaticField(0x59500);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CMDHAFJBKJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJELONPOIAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJELONPOIAG*))((::PBYTE)hIl2Cpp + BJELONPOIAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJELONPOIAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJELONPOIAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJELONPOIAG*>*(*)())((::PBYTE)hIl2Cpp + BJELONPOIAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJELONPOIAG* Clone()
		{
			return ((::BJELONPOIAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJELONPOIAG_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJELONPOIAG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FBMICLGHCBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_FBMICLGHCBD_OFFSET))(this);
		}

		::System::Void AKCGHIOECFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJELONPOIAG_AKCGHIOECFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJELONPOIAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJELONPOIAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJELONPOIAG*))((::PBYTE)hIl2Cpp + BJELONPOIAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJELONPOIAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJELONPOIAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJELONPOIAG*))((::PBYTE)hIl2Cpp + BJELONPOIAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJELONPOIAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
