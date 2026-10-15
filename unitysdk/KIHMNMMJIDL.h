#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIHMNMMJIDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIHMNMMJIDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85A940)
#define KIHMNMMJIDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85AB60)
#define KIHMNMMJIDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E85A530)
#define KIHMNMMJIDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E85A500)
#define KIHMNMMJIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85A4F0)
#define KIHMNMMJIDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E85A6C0)
#define KIHMNMMJIDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E85A5C0)
#define KIHMNMMJIDL_FMLJOJBBHGN_OFFSET UNITYSDK_OFFSET(0x1E85A5B0)
#define KIHMNMMJIDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E85A830)
#define KIHMNMMJIDL_JGAONBLIANN_OFFSET UNITYSDK_OFFSET(0x1E85A5A0)
#define KIHMNMMJIDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E85A480)
#define KIHMNMMJIDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85AA00)
#define KIHMNMMJIDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85A9D0)
#define KIHMNMMJIDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E85A4E0)
#define KIHMNMMJIDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E85A860)
#define KIHMNMMJIDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85A8C0)

inline static constexpr unsigned int KIHMNMMJIDL_TypeDefinitionIndex = 32896;

	class KIHMNMMJIDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DDONFOOKMBH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KIHMNMMJIDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIHMNMMJIDL*>**)UnitySDK::FromName("", "KIHMNMMJIDL")->GetStaticField(0x1A1D0);
		}

		// static const ::System::Object DEKIGFMJPDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIHMNMMJIDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIHMNMMJIDL*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIHMNMMJIDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIHMNMMJIDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIHMNMMJIDL*>*(*)())((::PBYTE)hIl2Cpp + KIHMNMMJIDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIHMNMMJIDL* Clone()
		{
			return ((::KIHMNMMJIDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGAONBLIANN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_JGAONBLIANN_OFFSET))(this);
		}

		::System::Void FMLJOJBBHGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_FMLJOJBBHGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIHMNMMJIDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIHMNMMJIDL*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIHMNMMJIDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIHMNMMJIDL*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIHMNMMJIDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
