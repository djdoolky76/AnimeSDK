#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIIJCDEBDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFIIJCDEBDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E46F800)
#define GFIIJCDEBDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46F8A0)
#define GFIIJCDEBDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E46F4F0)
#define GFIIJCDEBDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E46F4C0)
#define GFIIJCDEBDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46F4B0)
#define GFIIJCDEBDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E46F600)
#define GFIIJCDEBDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E46F530)
#define GFIIJCDEBDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E46F760)
#define GFIIJCDEBDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E46F470)
#define GFIIJCDEBDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E46F850)
#define GFIIJCDEBDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E46F820)
#define GFIIJCDEBDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46F4A0)
#define GFIIJCDEBDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E46F790)
#define GFIIJCDEBDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E46F7F0)

	class GFIIJCDEBDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFIIJCDEBDH")->GetStaticField(0x145E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFIIJCDEBDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIIJCDEBDH*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIIJCDEBDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFIIJCDEBDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFIIJCDEBDH* Clone()
		{
			return ((::GFIIJCDEBDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFIIJCDEBDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFIIJCDEBDH*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFIIJCDEBDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIIJCDEBDH*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFIIJCDEBDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
