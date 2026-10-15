#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFFLMEMFPLM;
class EOKKHLOIBIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOKKHLOIBIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FF1A0)
#define EOKKHLOIBIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF470)
#define EOKKHLOIBIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FE920)
#define EOKKHLOIBIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FE7C0)
#define EOKKHLOIBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE7B0)
#define EOKKHLOIBIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FED60)
#define EOKKHLOIBIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FEB10)
#define EOKKHLOIBIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FEF90)
#define EOKKHLOIBIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FE740)
#define EOKKHLOIBIM_JNKLEJFMIFA_OFFSET UNITYSDK_OFFSET(0x1E2FEB00)
#define EOKKHLOIBIM_KNCPMANHJHK_OFFSET UNITYSDK_OFFSET(0x1E2FEAD0)
#define EOKKHLOIBIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FF2D0)
#define EOKKHLOIBIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FF230)
#define EOKKHLOIBIM_MGFPEDFIEHO_OFFSET UNITYSDK_OFFSET(0x1E2FEAE0)
#define EOKKHLOIBIM_OOCHOGNMCBK_OFFSET UNITYSDK_OFFSET(0x1E2FEAF0)
#define EOKKHLOIBIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE7A0)
#define EOKKHLOIBIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FF060)
#define EOKKHLOIBIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FF0C0)

inline static constexpr unsigned int EOKKHLOIBIM_TypeDefinitionIndex = 27201;

	class EOKKHLOIBIM : public ::System::Object
	{
	public:
		::DFFLMEMFPLM* GCNJHOEJHMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::DFFLMEMFPLM* AFIKBALBOLD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EOKKHLOIBIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOKKHLOIBIM*>**)UnitySDK::FromName("", "EOKKHLOIBIM")->GetStaticField(0x55240);
		}

		// static const ::System::Object KDEEIIKKEIB; // 0x0
		// static const ::System::Object MPFOBKLLGEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOKKHLOIBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKKHLOIBIM*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOKKHLOIBIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOKKHLOIBIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOKKHLOIBIM*>*(*)())((::PBYTE)hIl2Cpp + EOKKHLOIBIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOKKHLOIBIM* Clone()
		{
			return ((::EOKKHLOIBIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_CLONE_OFFSET))(this);
		}

		::DFFLMEMFPLM* KNCPMANHJHK()
		{
			return ((::DFFLMEMFPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_KNCPMANHJHK_OFFSET))(this);
		}

		::System::Void MGFPEDFIEHO(::DFFLMEMFPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_MGFPEDFIEHO_OFFSET))(this, a1);
		}

		::DFFLMEMFPLM* OOCHOGNMCBK()
		{
			return ((::DFFLMEMFPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_OOCHOGNMCBK_OFFSET))(this);
		}

		::System::Void JNKLEJFMIFA(::DFFLMEMFPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_JNKLEJFMIFA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOKKHLOIBIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOKKHLOIBIM*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOKKHLOIBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKKHLOIBIM*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOKKHLOIBIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
