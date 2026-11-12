#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGODFDFPEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMGODFDFPEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4C9FD0)
#define DMGODFDFPEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CA2A0)
#define DMGODFDFPEI_CEKHBMFJDIH_OFFSET UNITYSDK_OFFSET(0x1F4C9C80)
#define DMGODFDFPEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4C9C20)
#define DMGODFDFPEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4C9BF0)
#define DMGODFDFPEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C9BE0)
#define DMGODFDFPEI_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1F4C9CA0)
#define DMGODFDFPEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4C9D90)
#define DMGODFDFPEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4C9CB0)
#define DMGODFDFPEI_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1F4C9C90)
#define DMGODFDFPEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4C9E60)
#define DMGODFDFPEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4C9BA0)
#define DMGODFDFPEI_KMFAKHAKJLL_OFFSET UNITYSDK_OFFSET(0x1F4C9C70)
#define DMGODFDFPEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4CA120)
#define DMGODFDFPEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4CA0E0)
#define DMGODFDFPEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4C9BD0)
#define DMGODFDFPEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4C9E90)
#define DMGODFDFPEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4C9EF0)

inline static constexpr unsigned int DMGODFDFPEI_TypeDefinitionIndex = 27836;

	class DMGODFDFPEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GBHALKHPMCE; // 0x18
		::System::UInt32 DDKDAHKMBFL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DMGODFDFPEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMGODFDFPEI*>**)UnitySDK::FromName("", "DMGODFDFPEI")->GetStaticField(0x3A4C0);
		}

		// static const ::System::Object DHHMBIGBCEG; // 0x0
		// static const ::System::Object OBJDFPPBDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMGODFDFPEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGODFDFPEI*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGODFDFPEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMGODFDFPEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMGODFDFPEI*>*(*)())((::PBYTE)hIl2Cpp + DMGODFDFPEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMGODFDFPEI* Clone()
		{
			return ((::DMGODFDFPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KMFAKHAKJLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_KMFAKHAKJLL_OFFSET))(this);
		}

		::System::Void CEKHBMFJDIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGODFDFPEI_CEKHBMFJDIH_OFFSET))(this, a1);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGODFDFPEI_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMGODFDFPEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMGODFDFPEI*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMGODFDFPEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGODFDFPEI*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMGODFDFPEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
