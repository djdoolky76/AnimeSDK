#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGOMNMKCDJ.h"
#include "unitysdk/System/Object.h"
class KDANACKPJIP;
class PPGFKFIAAHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPGFKFIAAHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F28B2A0)
#define PPGFKFIAAHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F28B5F0)
#define PPGFKFIAAHL_CEDDLLLMHPF_OFFSET UNITYSDK_OFFSET(0x1F28ADE0)
#define PPGFKFIAAHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F28AD20)
#define PPGFKFIAAHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F28ACA0)
#define PPGFKFIAAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28AC90)
#define PPGFKFIAAHL_EEJELPNLJND_OFFSET UNITYSDK_OFFSET(0x1F28ADB0)
#define PPGFKFIAAHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F28AF70)
#define PPGFKFIAAHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F28ADF0)
#define PPGFKFIAAHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F28B0F0)
#define PPGFKFIAAHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F28AC50)
#define PPGFKFIAAHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F28B460)
#define PPGFKFIAAHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F28B3B0)
#define PPGFKFIAAHL_NHCJOPGKMFM_OFFSET UNITYSDK_OFFSET(0x1F28ADD0)
#define PPGFKFIAAHL_OBOGDODBLCE_OFFSET UNITYSDK_OFFSET(0x1F28ADC0)
#define PPGFKFIAAHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F28AC80)
#define PPGFKFIAAHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F28B150)
#define PPGFKFIAAHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F28B1B0)

inline static constexpr unsigned int PPGFKFIAAHL_TypeDefinitionIndex = 29063;

	class PPGFKFIAAHL : public ::System::Object
	{
	public:
		::KDANACKPJIP* PNFICIFGGPI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IJGOMNMKCDJ BHLCLLHLLPJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PPGFKFIAAHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPGFKFIAAHL*>**)UnitySDK::FromName("", "PPGFKFIAAHL")->GetStaticField(0x48C90);
		}

		// static const ::System::Object GHHKFNMMEFI; // 0x0
		// static const ::System::Object PAKONEELNGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPGFKFIAAHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPGFKFIAAHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPGFKFIAAHL*>*(*)())((::PBYTE)hIl2Cpp + PPGFKFIAAHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPGFKFIAAHL* Clone()
		{
			return ((::PPGFKFIAAHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CLONE_OFFSET))(this);
		}

		::IJGOMNMKCDJ EEJELPNLJND()
		{
			return ((::IJGOMNMKCDJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_EEJELPNLJND_OFFSET))(this);
		}

		::System::Void OBOGDODBLCE(::IJGOMNMKCDJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJGOMNMKCDJ))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_OBOGDODBLCE_OFFSET))(this, a1);
		}

		::KDANACKPJIP* NHCJOPGKMFM()
		{
			return ((::KDANACKPJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_NHCJOPGKMFM_OFFSET))(this);
		}

		::System::Void CEDDLLLMHPF(::KDANACKPJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CEDDLLLMHPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPGFKFIAAHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPGFKFIAAHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPGFKFIAAHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
