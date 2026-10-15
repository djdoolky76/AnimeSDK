#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class PKCIPJBKAFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKCIPJBKAFO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF5A100)
#define PKCIPJBKAFO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF5A110)
#define PKCIPJBKAFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5A450)
#define PKCIPJBKAFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5A760)
#define PKCIPJBKAFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5A090)
#define PKCIPJBKAFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5A060)
#define PKCIPJBKAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5A050)
#define PKCIPJBKAFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5A200)
#define PKCIPJBKAFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5A120)
#define PKCIPJBKAFO_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1DF5A0F0)
#define PKCIPJBKAFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5A2D0)
#define PKCIPJBKAFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5A010)
#define PKCIPJBKAFO_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1DF5A0E0)
#define PKCIPJBKAFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5A5E0)
#define PKCIPJBKAFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5A5A0)
#define PKCIPJBKAFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5A040)
#define PKCIPJBKAFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5A300)
#define PKCIPJBKAFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5A360)

inline static constexpr unsigned int PKCIPJBKAFO_TypeDefinitionIndex = 28250;

	class PKCIPJBKAFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PKCIPJBKAFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKCIPJBKAFO*>**)UnitySDK::FromName("", "PKCIPJBKAFO")->GetStaticField(0x39300);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKCIPJBKAFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKCIPJBKAFO*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKCIPJBKAFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKCIPJBKAFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKCIPJBKAFO*>*(*)())((::PBYTE)hIl2Cpp + PKCIPJBKAFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKCIPJBKAFO* Clone()
		{
			return ((::PKCIPJBKAFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKCIPJBKAFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKCIPJBKAFO*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKCIPJBKAFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKCIPJBKAFO*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKCIPJBKAFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
