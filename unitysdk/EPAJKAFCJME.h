#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAJKAFCJME_FIEGJMOHICJ.h"
#include "unitysdk/System/Object.h"
class EPAJKAFCJME;
class OHJPJDPMCJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPAJKAFCJME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3023A0)
#define EPAJKAFCJME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E302760)
#define EPAJKAFCJME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E301F90)
#define EPAJKAFCJME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E301E90)
#define EPAJKAFCJME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E301E80)
#define EPAJKAFCJME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E302010)
#define EPAJKAFCJME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E301FE0)
#define EPAJKAFCJME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3021F0)
#define EPAJKAFCJME_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E301FD0)
#define EPAJKAFCJME_HGAGGIFCLAA_OFFSET UNITYSDK_OFFSET(0x1E301F70)
#define EPAJKAFCJME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E301E40)
#define EPAJKAFCJME_JNHIJCFBJLE_OFFSET UNITYSDK_OFFSET(0x1E301F30)
#define EPAJKAFCJME_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E301FC0)
#define EPAJKAFCJME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E302540)
#define EPAJKAFCJME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E302410)
#define EPAJKAFCJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E301E70)
#define EPAJKAFCJME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E302290)
#define EPAJKAFCJME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3022F0)

inline static constexpr unsigned int EPAJKAFCJME_TypeDefinitionIndex = 33894;

	class EPAJKAFCJME : public ::System::Object
	{
	public:
		::System::Object* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::EPAJKAFCJME_FIEGJMOHICJ NPIBMNININN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPAJKAFCJME")->GetStaticField(0x55460);
		}

		// static const ::System::Object ODMJKLKBCOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPAJKAFCJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAJKAFCJME*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAJKAFCJME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPAJKAFCJME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPAJKAFCJME* Clone()
		{
			return ((::EPAJKAFCJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_CLONE_OFFSET))(this);
		}

		::OHJPJDPMCJN* JNHIJCFBJLE()
		{
			return ((::OHJPJDPMCJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_JNHIJCFBJLE_OFFSET))(this);
		}

		::System::Void HGAGGIFCLAA(::OHJPJDPMCJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJPJDPMCJN*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_HGAGGIFCLAA_OFFSET))(this, a1);
		}

		::EPAJKAFCJME_FIEGJMOHICJ KFLDFIGDABN()
		{
			return ((::EPAJKAFCJME_FIEGJMOHICJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPAJKAFCJME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPAJKAFCJME*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAJKAFCJME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPAJKAFCJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAJKAFCJME*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPAJKAFCJME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
