#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBADAHNBIIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBADAHNBIIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E230480)
#define EBADAHNBIIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E230750)
#define EBADAHNBIIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2300D0)
#define EBADAHNBIIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2300A0)
#define EBADAHNBIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E230090)
#define EBADAHNBIIH_DGBHDFJGMEJ_OFFSET UNITYSDK_OFFSET(0x1E230130)
#define EBADAHNBIIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E230240)
#define EBADAHNBIIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E230160)
#define EBADAHNBIIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E230310)
#define EBADAHNBIIH_GGLOBDDLDOI_OFFSET UNITYSDK_OFFSET(0x1E230140)
#define EBADAHNBIIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E230050)
#define EBADAHNBIIH_LBLFJGPDELH_OFFSET UNITYSDK_OFFSET(0x1E230120)
#define EBADAHNBIIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2305D0)
#define EBADAHNBIIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E230590)
#define EBADAHNBIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E230080)
#define EBADAHNBIIH_PNBMDNLGBKI_OFFSET UNITYSDK_OFFSET(0x1E230150)
#define EBADAHNBIIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E230340)
#define EBADAHNBIIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2303A0)

inline static constexpr unsigned int EBADAHNBIIH_TypeDefinitionIndex = 34094;

	class EBADAHNBIIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EFKIMNCFGHN; // 0x18
		::System::UInt32 NGEIEPEONLF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EBADAHNBIIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBADAHNBIIH*>**)UnitySDK::FromName("", "EBADAHNBIIH")->GetStaticField(0x49C10);
		}

		// static const ::System::Object PAHJODGPEKA; // 0x0
		// static const ::System::Object HJFKGCEMDDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBADAHNBIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBADAHNBIIH*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBADAHNBIIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBADAHNBIIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBADAHNBIIH*>*(*)())((::PBYTE)hIl2Cpp + EBADAHNBIIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBADAHNBIIH* Clone()
		{
			return ((::EBADAHNBIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 LBLFJGPDELH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_LBLFJGPDELH_OFFSET))(this);
		}

		::System::Void DGBHDFJGMEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBADAHNBIIH_DGBHDFJGMEJ_OFFSET))(this, a1);
		}

		::System::UInt32 GGLOBDDLDOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_GGLOBDDLDOI_OFFSET))(this);
		}

		::System::Void PNBMDNLGBKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBADAHNBIIH_PNBMDNLGBKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBADAHNBIIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBADAHNBIIH*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBADAHNBIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBADAHNBIIH*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBADAHNBIIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
