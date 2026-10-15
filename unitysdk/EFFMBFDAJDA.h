#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFFMBFDAJDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFFMBFDAJDA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E260310)
#define EFFMBFDAJDA_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E260340)
#define EFFMBFDAJDA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E260320)
#define EFFMBFDAJDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2606E0)
#define EFFMBFDAJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E260A70)
#define EFFMBFDAJDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2602C0)
#define EFFMBFDAJDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E260280)
#define EFFMBFDAJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E260270)
#define EFFMBFDAJDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E260450)
#define EFFMBFDAJDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E260370)
#define EFFMBFDAJDA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E260360)
#define EFFMBFDAJDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E260520)
#define EFFMBFDAJDA_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E260330)
#define EFFMBFDAJDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E260230)
#define EFFMBFDAJDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2608C0)
#define EFFMBFDAJDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E260870)
#define EFFMBFDAJDA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E260350)
#define EFFMBFDAJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E260260)
#define EFFMBFDAJDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E260550)
#define EFFMBFDAJDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2605B0)

inline static constexpr unsigned int EFFMBFDAJDA_TypeDefinitionIndex = 29005;

	class EFFMBFDAJDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EFFMBFDAJDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFFMBFDAJDA*>**)UnitySDK::FromName("", "EFFMBFDAJDA")->GetStaticField(0x46BF0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFFMBFDAJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFFMBFDAJDA*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFMBFDAJDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFFMBFDAJDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFFMBFDAJDA*>*(*)())((::PBYTE)hIl2Cpp + EFFMBFDAJDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFFMBFDAJDA* Clone()
		{
			return ((::EFFMBFDAJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFFMBFDAJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFFMBFDAJDA*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFFMBFDAJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFFMBFDAJDA*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFFMBFDAJDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
