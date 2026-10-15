#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANOCBHNHLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CANOCBHNHLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05FAD0)
#define CANOCBHNHLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05FCF0)
#define CANOCBHNHLJ_CFKJHKAHLOG_OFFSET UNITYSDK_OFFSET(0x1E05F730)
#define CANOCBHNHLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05F6C0)
#define CANOCBHNHLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05F690)
#define CANOCBHNHLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05F680)
#define CANOCBHNHLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05F850)
#define CANOCBHNHLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05F750)
#define CANOCBHNHLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05F9C0)
#define CANOCBHNHLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05F610)
#define CANOCBHNHLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05FB90)
#define CANOCBHNHLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05FB60)
#define CANOCBHNHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05F670)
#define CANOCBHNHLJ_POAKODAJCDG_OFFSET UNITYSDK_OFFSET(0x1E05F740)
#define CANOCBHNHLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05F9F0)
#define CANOCBHNHLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05FA50)

inline static constexpr unsigned int CANOCBHNHLJ_TypeDefinitionIndex = 31810;

	class CANOCBHNHLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HMJFFIJLINN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CANOCBHNHLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CANOCBHNHLJ*>**)UnitySDK::FromName("", "CANOCBHNHLJ")->GetStaticField(0x30C0);
		}

		// static const ::System::Object CFOENLLMJLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CANOCBHNHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CANOCBHNHLJ*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CANOCBHNHLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CANOCBHNHLJ*>*(*)())((::PBYTE)hIl2Cpp + CANOCBHNHLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CANOCBHNHLJ* Clone()
		{
			return ((::CANOCBHNHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CFKJHKAHLOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CFKJHKAHLOG_OFFSET))(this);
		}

		::System::Void POAKODAJCDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_POAKODAJCDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CANOCBHNHLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CANOCBHNHLJ*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CANOCBHNHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CANOCBHNHLJ*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CANOCBHNHLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
