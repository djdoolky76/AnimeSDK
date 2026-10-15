#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMPDJIEMJJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMPDJIEMJJD_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E1F2CB0)
#define DMPDJIEMJJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F3010)
#define DMPDJIEMJJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3230)
#define DMPDJIEMJJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F2C60)
#define DMPDJIEMJJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F2C30)
#define DMPDJIEMJJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F2C20)
#define DMPDJIEMJJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F2D90)
#define DMPDJIEMJJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F2CC0)
#define DMPDJIEMJJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F2F00)
#define DMPDJIEMJJD_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E1F2CA0)
#define DMPDJIEMJJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F2BE0)
#define DMPDJIEMJJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F30D0)
#define DMPDJIEMJJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F30A0)
#define DMPDJIEMJJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F2C10)
#define DMPDJIEMJJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F2F30)
#define DMPDJIEMJJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F2F90)

inline static constexpr unsigned int DMPDJIEMJJD_TypeDefinitionIndex = 28971;

	class DMPDJIEMJJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DMPDJIEMJJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMPDJIEMJJD*>**)UnitySDK::FromName("", "DMPDJIEMJJD")->GetStaticField(0x3F8E0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMPDJIEMJJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMPDJIEMJJD*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMPDJIEMJJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMPDJIEMJJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMPDJIEMJJD*>*(*)())((::PBYTE)hIl2Cpp + DMPDJIEMJJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMPDJIEMJJD* Clone()
		{
			return ((::DMPDJIEMJJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMPDJIEMJJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMPDJIEMJJD*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMPDJIEMJJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMPDJIEMJJD*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMPDJIEMJJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
