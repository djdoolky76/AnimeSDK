#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKEJIAMKPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIKEJIAMKPH_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E8337C0)
#define KIKEJIAMKPH_BOJPEEHAOCE_OFFSET UNITYSDK_OFFSET(0x1E833790)
#define KIKEJIAMKPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E833AF0)
#define KIKEJIAMKPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E833DC0)
#define KIKEJIAMKPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E833740)
#define KIKEJIAMKPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E833710)
#define KIKEJIAMKPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E833700)
#define KIKEJIAMKPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8338B0)
#define KIKEJIAMKPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8337D0)
#define KIKEJIAMKPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E833980)
#define KIKEJIAMKPH_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E8337B0)
#define KIKEJIAMKPH_IPILDDBGGNG_OFFSET UNITYSDK_OFFSET(0x1E8337A0)
#define KIKEJIAMKPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8336C0)
#define KIKEJIAMKPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E833C40)
#define KIKEJIAMKPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E833C00)
#define KIKEJIAMKPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8336F0)
#define KIKEJIAMKPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8339B0)
#define KIKEJIAMKPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E833A10)

inline static constexpr unsigned int KIKEJIAMKPH_TypeDefinitionIndex = 28967;

	class KIKEJIAMKPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LEIBFLPCJEE; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KIKEJIAMKPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIKEJIAMKPH*>**)UnitySDK::FromName("", "KIKEJIAMKPH")->GetStaticField(0x192B0);
		}

		// static const ::System::Object MAHIODJDGJN; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIKEJIAMKPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKEJIAMKPH*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKEJIAMKPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIKEJIAMKPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIKEJIAMKPH*>*(*)())((::PBYTE)hIl2Cpp + KIKEJIAMKPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIKEJIAMKPH* Clone()
		{
			return ((::KIKEJIAMKPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_CLONE_OFFSET))(this);
		}

		::System::UInt32 BOJPEEHAOCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_BOJPEEHAOCE_OFFSET))(this);
		}

		::System::Void IPILDDBGGNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_IPILDDBGGNG_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIKEJIAMKPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIKEJIAMKPH*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIKEJIAMKPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKEJIAMKPH*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIKEJIAMKPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
