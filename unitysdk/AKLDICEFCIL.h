#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class AKLDICEFCIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKLDICEFCIL_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E3A0E00)
#define AKLDICEFCIL_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E3A0E10)
#define AKLDICEFCIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A11A0)
#define AKLDICEFCIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A14B0)
#define AKLDICEFCIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A0D90)
#define AKLDICEFCIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A0D60)
#define AKLDICEFCIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0D50)
#define AKLDICEFCIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A0F50)
#define AKLDICEFCIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A0E40)
#define AKLDICEFCIL_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E3A0E30)
#define AKLDICEFCIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A1020)
#define AKLDICEFCIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A0CE0)
#define AKLDICEFCIL_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E3A0E20)
#define AKLDICEFCIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A1330)
#define AKLDICEFCIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A12F0)
#define AKLDICEFCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0D40)
#define AKLDICEFCIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A1050)
#define AKLDICEFCIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A10B0)

inline static constexpr unsigned int AKLDICEFCIL_TypeDefinitionIndex = 26697;

	class AKLDICEFCIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AKLDICEFCIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKLDICEFCIL*>**)UnitySDK::FromName("", "AKLDICEFCIL")->GetStaticField(0x384F0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKLDICEFCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKLDICEFCIL*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLDICEFCIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKLDICEFCIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKLDICEFCIL*>*(*)())((::PBYTE)hIl2Cpp + AKLDICEFCIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKLDICEFCIL* Clone()
		{
			return ((::AKLDICEFCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKLDICEFCIL_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + AKLDICEFCIL_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKLDICEFCIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKLDICEFCIL*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLDICEFCIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKLDICEFCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKLDICEFCIL*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKLDICEFCIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
