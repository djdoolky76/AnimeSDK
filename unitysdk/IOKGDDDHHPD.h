#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class IOKGDDDHHPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOKGDDDHHPD_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E6AAFB0)
#define IOKGDDDHHPD_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E6AAFC0)
#define IOKGDDDHHPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AB330)
#define IOKGDDDHHPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB640)
#define IOKGDDDHHPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AAF20)
#define IOKGDDDHHPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AAEF0)
#define IOKGDDDHHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AAEE0)
#define IOKGDDDHHPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AB0E0)
#define IOKGDDDHHPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AAFD0)
#define IOKGDDDHHPD_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E6AAFA0)
#define IOKGDDDHHPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AB1B0)
#define IOKGDDDHHPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AAE70)
#define IOKGDDDHHPD_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E6AAF90)
#define IOKGDDDHHPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AB4C0)
#define IOKGDDDHHPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AB480)
#define IOKGDDDHHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AAED0)
#define IOKGDDDHHPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AB1E0)
#define IOKGDDDHHPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AB240)

inline static constexpr unsigned int IOKGDDDHHPD_TypeDefinitionIndex = 35022;

	class IOKGDDDHHPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IOKGDDDHHPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOKGDDDHHPD*>**)UnitySDK::FromName("", "IOKGDDDHHPD")->GetStaticField(0xD850);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOKGDDDHHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKGDDDHHPD*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOKGDDDHHPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOKGDDDHHPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOKGDDDHHPD*>*(*)())((::PBYTE)hIl2Cpp + IOKGDDDHHPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOKGDDDHHPD* Clone()
		{
			return ((::IOKGDDDHHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOKGDDDHHPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOKGDDDHHPD*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOKGDDDHHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKGDDDHHPD*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOKGDDDHHPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
