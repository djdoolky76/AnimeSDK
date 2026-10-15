#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class FLLJIHLMKDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLLJIHLMKDI_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E3D9930)
#define FLLJIHLMKDI_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E3D9940)
#define FLLJIHLMKDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D9C80)
#define FLLJIHLMKDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D9F90)
#define FLLJIHLMKDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D98C0)
#define FLLJIHLMKDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D9890)
#define FLLJIHLMKDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D9880)
#define FLLJIHLMKDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D9A30)
#define FLLJIHLMKDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D9950)
#define FLLJIHLMKDI_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E3D9920)
#define FLLJIHLMKDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D9B00)
#define FLLJIHLMKDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D9840)
#define FLLJIHLMKDI_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E3D9910)
#define FLLJIHLMKDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D9E10)
#define FLLJIHLMKDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D9DD0)
#define FLLJIHLMKDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D9870)
#define FLLJIHLMKDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D9B30)
#define FLLJIHLMKDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D9B90)

inline static constexpr unsigned int FLLJIHLMKDI_TypeDefinitionIndex = 26689;

	class FLLJIHLMKDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FLLJIHLMKDI")->GetStaticField(0x17920);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLLJIHLMKDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLLJIHLMKDI*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLJIHLMKDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FLLJIHLMKDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLLJIHLMKDI* Clone()
		{
			return ((::FLLJIHLMKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLLJIHLMKDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLLJIHLMKDI*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLLJIHLMKDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLLJIHLMKDI*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLLJIHLMKDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
