#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMEOHDKGMHK.h"
#include "unitysdk/System/Object.h"
class KOAGMGNMMOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOAGMGNMMOC_ABAOJKOKINN_OFFSET UNITYSDK_OFFSET(0x1E8AB300)
#define KOAGMGNMMOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AB670)
#define KOAGMGNMMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB980)
#define KOAGMGNMMOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8AB2B0)
#define KOAGMGNMMOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AB280)
#define KOAGMGNMMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB270)
#define KOAGMGNMMOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8AB420)
#define KOAGMGNMMOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8AB340)
#define KOAGMGNMMOC_GELDOFPOAJE_OFFSET UNITYSDK_OFFSET(0x1E8AB330)
#define KOAGMGNMMOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8AB4F0)
#define KOAGMGNMMOC_HPIIAOJMGOP_OFFSET UNITYSDK_OFFSET(0x1E8AB310)
#define KOAGMGNMMOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8AB230)
#define KOAGMGNMMOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AB800)
#define KOAGMGNMMOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AB7C0)
#define KOAGMGNMMOC_OEOLLINMHND_OFFSET UNITYSDK_OFFSET(0x1E8AB320)
#define KOAGMGNMMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB260)
#define KOAGMGNMMOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AB520)
#define KOAGMGNMMOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AB580)

inline static constexpr unsigned int KOAGMGNMMOC_TypeDefinitionIndex = 32468;

	class KOAGMGNMMOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACHPJOICHIK; // 0x18
		::JMEOHDKGMHK BIADFCJHOGN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KOAGMGNMMOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOAGMGNMMOC*>**)UnitySDK::FromName("", "KOAGMGNMMOC")->GetStaticField(0x2B1C0);
		}

		// static const ::System::Object JFIHMLDDFKP; // 0x0
		// static const ::System::Object OPLCEPOKLEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOAGMGNMMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOAGMGNMMOC*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOAGMGNMMOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOAGMGNMMOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOAGMGNMMOC*>*(*)())((::PBYTE)hIl2Cpp + KOAGMGNMMOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOAGMGNMMOC* Clone()
		{
			return ((::KOAGMGNMMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ABAOJKOKINN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_ABAOJKOKINN_OFFSET))(this);
		}

		::System::Void HPIIAOJMGOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_HPIIAOJMGOP_OFFSET))(this, a1);
		}

		::JMEOHDKGMHK OEOLLINMHND()
		{
			return ((::JMEOHDKGMHK(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_OEOLLINMHND_OFFSET))(this);
		}

		::System::Void GELDOFPOAJE(::JMEOHDKGMHK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMEOHDKGMHK))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_GELDOFPOAJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOAGMGNMMOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOAGMGNMMOC*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOAGMGNMMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOAGMGNMMOC*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOAGMGNMMOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
