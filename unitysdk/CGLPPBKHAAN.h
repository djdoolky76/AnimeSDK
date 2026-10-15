#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGLPPBKHAAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGLPPBKHAAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B2E90)
#define CGLPPBKHAAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B31A0)
#define CGLPPBKHAAN_CEPMGNPPEIJ_OFFSET UNITYSDK_OFFSET(0x1E0B2A80)
#define CGLPPBKHAAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B2A10)
#define CGLPPBKHAAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B29D0)
#define CGLPPBKHAAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B29C0)
#define CGLPPBKHAAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B2BB0)
#define CGLPPBKHAAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B2AC0)
#define CGLPPBKHAAN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0B2AB0)
#define CGLPPBKHAAN_FIKLGPLLNFI_OFFSET UNITYSDK_OFFSET(0x1E0B2A60)
#define CGLPPBKHAAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B2C90)
#define CGLPPBKHAAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B2980)
#define CGLPPBKHAAN_JLBFCOCKFNM_OFFSET UNITYSDK_OFFSET(0x1E0B2A70)
#define CGLPPBKHAAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B3000)
#define CGLPPBKHAAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B2FB0)
#define CGLPPBKHAAN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0B2AA0)
#define CGLPPBKHAAN_OGLNANPNINP_OFFSET UNITYSDK_OFFSET(0x1E0B2A90)
#define CGLPPBKHAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B29B0)
#define CGLPPBKHAAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B2CC0)
#define CGLPPBKHAAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B2D20)

inline static constexpr unsigned int CGLPPBKHAAN_TypeDefinitionIndex = 26914;

	class CGLPPBKHAAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GIJAABDJGDA; // 0x1C
		::System::Boolean MGHJOOLPLKO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CGLPPBKHAAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGLPPBKHAAN*>**)UnitySDK::FromName("", "CGLPPBKHAAN")->GetStaticField(0x145C0);
		}

		// static const ::System::Object GADBEOGJMCH; // 0x0
		// static const ::System::Object GKKIGDJJNAF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGLPPBKHAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGLPPBKHAAN*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGLPPBKHAAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGLPPBKHAAN*>*(*)())((::PBYTE)hIl2Cpp + CGLPPBKHAAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGLPPBKHAAN* Clone()
		{
			return ((::CGLPPBKHAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FIKLGPLLNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_FIKLGPLLNFI_OFFSET))(this);
		}

		::System::Void JLBFCOCKFNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_JLBFCOCKFNM_OFFSET))(this, a1);
		}

		::System::Boolean CEPMGNPPEIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CEPMGNPPEIJ_OFFSET))(this);
		}

		::System::Void OGLNANPNINP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_OGLNANPNINP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGLPPBKHAAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGLPPBKHAAN*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGLPPBKHAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGLPPBKHAAN*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGLPPBKHAAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
