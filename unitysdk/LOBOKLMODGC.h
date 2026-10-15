#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOBOKLMODGC;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOBOKLMODGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98C5C0)
#define LOBOKLMODGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98C8D0)
#define LOBOKLMODGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98C050)
#define LOBOKLMODGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98BFC0)
#define LOBOKLMODGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98BFB0)
#define LOBOKLMODGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98C2B0)
#define LOBOKLMODGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98C130)
#define LOBOKLMODGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E98C120)
#define LOBOKLMODGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98C430)
#define LOBOKLMODGC_IOBIJNKBMIN_OFFSET UNITYSDK_OFFSET(0x1E98C100)
#define LOBOKLMODGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98BF70)
#define LOBOKLMODGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98C720)
#define LOBOKLMODGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98C690)
#define LOBOKLMODGC_NJIDMPKENKB_OFFSET UNITYSDK_OFFSET(0x1E98C0F0)
#define LOBOKLMODGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E98C110)
#define LOBOKLMODGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98BFA0)
#define LOBOKLMODGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98C480)
#define LOBOKLMODGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98C4E0)

inline static constexpr unsigned int LOBOKLMODGC_TypeDefinitionIndex = 31079;

	class LOBOKLMODGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NEMIDPFEJFL* LLHLKDFMFMN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOBOKLMODGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOBOKLMODGC*>**)UnitySDK::FromName("", "LOBOKLMODGC")->GetStaticField(0x40EE0);
		}

		// static const ::System::Object PDPIOIFCHBK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOBOKLMODGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBOKLMODGC*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOBOKLMODGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOBOKLMODGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOBOKLMODGC*>*(*)())((::PBYTE)hIl2Cpp + LOBOKLMODGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOBOKLMODGC* Clone()
		{
			return ((::LOBOKLMODGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_CLONE_OFFSET))(this);
		}

		::NEMIDPFEJFL* NJIDMPKENKB()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_NJIDMPKENKB_OFFSET))(this);
		}

		::System::Void IOBIJNKBMIN(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_IOBIJNKBMIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOBOKLMODGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOBOKLMODGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOBOKLMODGC*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOBOKLMODGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBOKLMODGC*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOBOKLMODGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
