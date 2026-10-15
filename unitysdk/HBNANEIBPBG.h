#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBNANEIBPBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBNANEIBPBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52E760)
#define HBNANEIBPBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52E800)
#define HBNANEIBPBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52E450)
#define HBNANEIBPBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52E420)
#define HBNANEIBPBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E410)
#define HBNANEIBPBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52E560)
#define HBNANEIBPBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52E490)
#define HBNANEIBPBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52E6C0)
#define HBNANEIBPBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52E3D0)
#define HBNANEIBPBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52E7B0)
#define HBNANEIBPBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52E780)
#define HBNANEIBPBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52E400)
#define HBNANEIBPBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52E6F0)
#define HBNANEIBPBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52E750)

inline static constexpr unsigned int HBNANEIBPBG_TypeDefinitionIndex = 26258;

	class HBNANEIBPBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HBNANEIBPBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBNANEIBPBG*>**)UnitySDK::FromName("", "HBNANEIBPBG")->GetStaticField(0x2ED90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBNANEIBPBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBNANEIBPBG*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNANEIBPBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBNANEIBPBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBNANEIBPBG*>*(*)())((::PBYTE)hIl2Cpp + HBNANEIBPBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBNANEIBPBG* Clone()
		{
			return ((::HBNANEIBPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBNANEIBPBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBNANEIBPBG*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNANEIBPBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBNANEIBPBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBNANEIBPBG*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBNANEIBPBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
