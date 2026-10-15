#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKKELLBOGIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKKELLBOGIO_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E1D8850)
#define DKKELLBOGIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D8BB0)
#define DKKELLBOGIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D8DD0)
#define DKKELLBOGIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D8800)
#define DKKELLBOGIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D87D0)
#define DKKELLBOGIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D87C0)
#define DKKELLBOGIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D8930)
#define DKKELLBOGIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D8860)
#define DKKELLBOGIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D8AA0)
#define DKKELLBOGIO_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E1D8840)
#define DKKELLBOGIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D8780)
#define DKKELLBOGIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D8C70)
#define DKKELLBOGIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D8C40)
#define DKKELLBOGIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D87B0)
#define DKKELLBOGIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D8AD0)
#define DKKELLBOGIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D8B30)

inline static constexpr unsigned int DKKELLBOGIO_TypeDefinitionIndex = 28977;

	class DKKELLBOGIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKKELLBOGIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKKELLBOGIO*>**)UnitySDK::FromName("", "DKKELLBOGIO")->GetStaticField(0x3AFA0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKKELLBOGIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKKELLBOGIO*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKELLBOGIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKKELLBOGIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKKELLBOGIO*>*(*)())((::PBYTE)hIl2Cpp + DKKELLBOGIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKKELLBOGIO* Clone()
		{
			return ((::DKKELLBOGIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKKELLBOGIO_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKKELLBOGIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKKELLBOGIO*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKKELLBOGIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKKELLBOGIO*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKKELLBOGIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
