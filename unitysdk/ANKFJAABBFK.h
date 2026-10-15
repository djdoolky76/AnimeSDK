#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANKFJAABBFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANKFJAABBFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E635840)
#define ANKFJAABBFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E635B10)
#define ANKFJAABBFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E635490)
#define ANKFJAABBFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E635460)
#define ANKFJAABBFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E635450)
#define ANKFJAABBFK_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E6354E0)
#define ANKFJAABBFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E635600)
#define ANKFJAABBFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E635520)
#define ANKFJAABBFK_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E635500)
#define ANKFJAABBFK_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E635510)
#define ANKFJAABBFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6356D0)
#define ANKFJAABBFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E635410)
#define ANKFJAABBFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E635990)
#define ANKFJAABBFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E635950)
#define ANKFJAABBFK_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E6354F0)
#define ANKFJAABBFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E635440)
#define ANKFJAABBFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E635700)
#define ANKFJAABBFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E635760)

inline static constexpr unsigned int ANKFJAABBFK_TypeDefinitionIndex = 26597;

	class ANKFJAABBFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::UInt32 GKOHBFHOFKN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ANKFJAABBFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANKFJAABBFK*>**)UnitySDK::FromName("", "ANKFJAABBFK")->GetStaticField(0x47A90);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANKFJAABBFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANKFJAABBFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANKFJAABBFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANKFJAABBFK*>*(*)())((::PBYTE)hIl2Cpp + ANKFJAABBFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANKFJAABBFK* Clone()
		{
			return ((::ANKFJAABBFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANKFJAABBFK_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANKFJAABBFK_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANKFJAABBFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANKFJAABBFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANKFJAABBFK*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANKFJAABBFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
