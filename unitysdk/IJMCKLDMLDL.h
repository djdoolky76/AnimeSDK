#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHKIEHONGB;
class IJMCKLDMLDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJMCKLDMLDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E66A0F0)
#define IJMCKLDMLDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66A3C0)
#define IJMCKLDMLDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E669BB0)
#define IJMCKLDMLDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E669B40)
#define IJMCKLDMLDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E669B30)
#define IJMCKLDMLDL_DLHONNPDAGH_OFFSET UNITYSDK_OFFSET(0x1E669C50)
#define IJMCKLDMLDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E669DF0)
#define IJMCKLDMLDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E669C70)
#define IJMCKLDMLDL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E669C40)
#define IJMCKLDMLDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E669F70)
#define IJMCKLDMLDL_GOAEIKJDPKP_OFFSET UNITYSDK_OFFSET(0x1E669C60)
#define IJMCKLDMLDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E669AF0)
#define IJMCKLDMLDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E66A230)
#define IJMCKLDMLDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E66A1C0)
#define IJMCKLDMLDL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E669C30)
#define IJMCKLDMLDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E669B20)
#define IJMCKLDMLDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E669FB0)
#define IJMCKLDMLDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E66A010)

inline static constexpr unsigned int IJMCKLDMLDL_TypeDefinitionIndex = 34879;

	class IJMCKLDMLDL : public ::System::Object
	{
	public:
		::EPHKIEHONGB* EODDLACNHPL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IJMCKLDMLDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJMCKLDMLDL*>**)UnitySDK::FromName("", "IJMCKLDMLDL")->GetStaticField(0x4F770);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LIADDJKCKFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJMCKLDMLDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJMCKLDMLDL*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJMCKLDMLDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJMCKLDMLDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJMCKLDMLDL*>*(*)())((::PBYTE)hIl2Cpp + IJMCKLDMLDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJMCKLDMLDL* Clone()
		{
			return ((::IJMCKLDMLDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EPHKIEHONGB* DLHONNPDAGH()
		{
			return ((::EPHKIEHONGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_DLHONNPDAGH_OFFSET))(this);
		}

		::System::Void GOAEIKJDPKP(::EPHKIEHONGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHKIEHONGB*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_GOAEIKJDPKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJMCKLDMLDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJMCKLDMLDL*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJMCKLDMLDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJMCKLDMLDL*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJMCKLDMLDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
