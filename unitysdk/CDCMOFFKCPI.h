#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCMOFFKCPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDCMOFFKCPI_ALNMFECLOPI_OFFSET UNITYSDK_OFFSET(0x1E053380)
#define CDCMOFFKCPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0536D0)
#define CDCMOFFKCPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E053A70)
#define CDCMOFFKCPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0532E0)
#define CDCMOFFKCPI_CPHMFBDCNND_OFFSET UNITYSDK_OFFSET(0x1E053360)
#define CDCMOFFKCPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0532A0)
#define CDCMOFFKCPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E053290)
#define CDCMOFFKCPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E053440)
#define CDCMOFFKCPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0533C0)
#define CDCMOFFKCPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E053510)
#define CDCMOFFKCPI_IHIAEPCNAGK_OFFSET UNITYSDK_OFFSET(0x1E053370)
#define CDCMOFFKCPI_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E0533A0)
#define CDCMOFFKCPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E053220)
#define CDCMOFFKCPI_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E0533B0)
#define CDCMOFFKCPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0538B0)
#define CDCMOFFKCPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E053860)
#define CDCMOFFKCPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E053280)
#define CDCMOFFKCPI_PEFPKBOMBCK_OFFSET UNITYSDK_OFFSET(0x1E053390)
#define CDCMOFFKCPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E053540)
#define CDCMOFFKCPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0535A0)

inline static constexpr unsigned int CDCMOFFKCPI_TypeDefinitionIndex = 28082;

	class CDCMOFFKCPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 OFIPOINCFIP; // 0x1C
		::System::UInt32 OKPIGPJBOID; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CDCMOFFKCPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDCMOFFKCPI*>**)UnitySDK::FromName("", "CDCMOFFKCPI")->GetStaticField(0xE090);
		}

		// static const ::System::Object EJCBKFFFEBP; // 0x0
		// static const ::System::Object OAOPNBOFEOM; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDCMOFFKCPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCMOFFKCPI*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDCMOFFKCPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDCMOFFKCPI*>*(*)())((::PBYTE)hIl2Cpp + CDCMOFFKCPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDCMOFFKCPI* Clone()
		{
			return ((::CDCMOFFKCPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPHMFBDCNND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CPHMFBDCNND_OFFSET))(this);
		}

		::System::Void IHIAEPCNAGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_IHIAEPCNAGK_OFFSET))(this, a1);
		}

		::System::UInt32 ALNMFECLOPI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_ALNMFECLOPI_OFFSET))(this);
		}

		::System::Void PEFPKBOMBCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_PEFPKBOMBCK_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDCMOFFKCPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDCMOFFKCPI*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDCMOFFKCPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCMOFFKCPI*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDCMOFFKCPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
