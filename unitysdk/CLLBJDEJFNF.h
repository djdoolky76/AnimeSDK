#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLBJDEJFNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLLBJDEJFNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FA8E0)
#define CLLBJDEJFNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FAC60)
#define CLLBJDEJFNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FA4C0)
#define CLLBJDEJFNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FA480)
#define CLLBJDEJFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA470)
#define CLLBJDEJFNF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E0FA510)
#define CLLBJDEJFNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FA650)
#define CLLBJDEJFNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FA570)
#define CLLBJDEJFNF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E0FA520)
#define CLLBJDEJFNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FA720)
#define CLLBJDEJFNF_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E0FA540)
#define CLLBJDEJFNF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E0FA560)
#define CLLBJDEJFNF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E0FA550)
#define CLLBJDEJFNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FA430)
#define CLLBJDEJFNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FAAC0)
#define CLLBJDEJFNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FAA70)
#define CLLBJDEJFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA460)
#define CLLBJDEJFNF_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E0FA530)
#define CLLBJDEJFNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FA750)
#define CLLBJDEJFNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FA7B0)

inline static constexpr unsigned int CLLBJDEJFNF_TypeDefinitionIndex = 27837;

	class CLLBJDEJFNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		::System::UInt32 GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLLBJDEJFNF")->GetStaticField(0x1D4E0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLLBJDEJFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLLBJDEJFNF*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLBJDEJFNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLLBJDEJFNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLLBJDEJFNF* Clone()
		{
			return ((::CLLBJDEJFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLLBJDEJFNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLLBJDEJFNF*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLLBJDEJFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLLBJDEJFNF*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLLBJDEJFNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
