#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEPPLBNOFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHEPPLBNOFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C4560)
#define CHEPPLBNOFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4780)
#define CHEPPLBNOFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C4150)
#define CHEPPLBNOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C4120)
#define CHEPPLBNOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4110)
#define CHEPPLBNOFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C42E0)
#define CHEPPLBNOFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C41E0)
#define CHEPPLBNOFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C4450)
#define CHEPPLBNOFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C40A0)
#define CHEPPLBNOFF_LFCNIGAHPOL_OFFSET UNITYSDK_OFFSET(0x1E0C41D0)
#define CHEPPLBNOFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C4620)
#define CHEPPLBNOFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C45F0)
#define CHEPPLBNOFF_OCNBDFIIKIB_OFFSET UNITYSDK_OFFSET(0x1E0C41C0)
#define CHEPPLBNOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4100)
#define CHEPPLBNOFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C4480)
#define CHEPPLBNOFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C44E0)

inline static constexpr unsigned int CHEPPLBNOFF_TypeDefinitionIndex = 32900;

	class CHEPPLBNOFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDIHDHBBONA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CHEPPLBNOFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHEPPLBNOFF*>**)UnitySDK::FromName("", "CHEPPLBNOFF")->GetStaticField(0x16320);
		}

		// static const ::System::Object KCJLFGPKJNA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHEPPLBNOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHEPPLBNOFF*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEPPLBNOFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHEPPLBNOFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHEPPLBNOFF*>*(*)())((::PBYTE)hIl2Cpp + CHEPPLBNOFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHEPPLBNOFF* Clone()
		{
			return ((::CHEPPLBNOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCNBDFIIKIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_OCNBDFIIKIB_OFFSET))(this);
		}

		::System::Void LFCNIGAHPOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_LFCNIGAHPOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHEPPLBNOFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHEPPLBNOFF*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHEPPLBNOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHEPPLBNOFF*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHEPPLBNOFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
