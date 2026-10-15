#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class CAEFBGAFKHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAEFBGAFKHD_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E057070)
#define CAEFBGAFKHD_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E057080)
#define CAEFBGAFKHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0573F0)
#define CAEFBGAFKHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E057700)
#define CAEFBGAFKHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E056FE0)
#define CAEFBGAFKHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E056FB0)
#define CAEFBGAFKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E056FA0)
#define CAEFBGAFKHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0571A0)
#define CAEFBGAFKHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E057090)
#define CAEFBGAFKHD_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E057060)
#define CAEFBGAFKHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E057270)
#define CAEFBGAFKHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E056F30)
#define CAEFBGAFKHD_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E057050)
#define CAEFBGAFKHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E057580)
#define CAEFBGAFKHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E057540)
#define CAEFBGAFKHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E056F90)
#define CAEFBGAFKHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0572A0)
#define CAEFBGAFKHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E057300)

inline static constexpr unsigned int CAEFBGAFKHD_TypeDefinitionIndex = 33458;

	class CAEFBGAFKHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CAEFBGAFKHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAEFBGAFKHD*>**)UnitySDK::FromName("", "CAEFBGAFKHD")->GetStaticField(0x56310);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAEFBGAFKHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAEFBGAFKHD*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEFBGAFKHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAEFBGAFKHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAEFBGAFKHD*>*(*)())((::PBYTE)hIl2Cpp + CAEFBGAFKHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAEFBGAFKHD* Clone()
		{
			return ((::CAEFBGAFKHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAEFBGAFKHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAEFBGAFKHD*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAEFBGAFKHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAEFBGAFKHD*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAEFBGAFKHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
