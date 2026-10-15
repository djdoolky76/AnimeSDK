#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJBFKGBKJME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJBFKGBKJME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83B660)
#define KJBFKGBKJME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83B930)
#define KJBFKGBKJME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83B2B0)
#define KJBFKGBKJME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83B280)
#define KJBFKGBKJME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83B270)
#define KJBFKGBKJME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83B420)
#define KJBFKGBKJME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83B340)
#define KJBFKGBKJME_FGFLCINOHOA_OFFSET UNITYSDK_OFFSET(0x1E83B320)
#define KJBFKGBKJME_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E83B300)
#define KJBFKGBKJME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83B4F0)
#define KJBFKGBKJME_JDJOKEELMJL_OFFSET UNITYSDK_OFFSET(0x1E83B330)
#define KJBFKGBKJME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83B230)
#define KJBFKGBKJME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83B7B0)
#define KJBFKGBKJME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83B770)
#define KJBFKGBKJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83B260)
#define KJBFKGBKJME_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E83B310)
#define KJBFKGBKJME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83B520)
#define KJBFKGBKJME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83B580)

inline static constexpr unsigned int KJBFKGBKJME_TypeDefinitionIndex = 29803;

	class KJBFKGBKJME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 GIDKEIEPFMG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KJBFKGBKJME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJBFKGBKJME*>**)UnitySDK::FromName("", "KJBFKGBKJME")->GetStaticField(0x19CC0);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object HPCECEJOHCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJBFKGBKJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJBFKGBKJME*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJBFKGBKJME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJBFKGBKJME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJBFKGBKJME*>*(*)())((::PBYTE)hIl2Cpp + KJBFKGBKJME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJBFKGBKJME* Clone()
		{
			return ((::KJBFKGBKJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJBFKGBKJME_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 FGFLCINOHOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_FGFLCINOHOA_OFFSET))(this);
		}

		::System::Void JDJOKEELMJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJBFKGBKJME_JDJOKEELMJL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJBFKGBKJME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJBFKGBKJME*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJBFKGBKJME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJBFKGBKJME*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJBFKGBKJME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
