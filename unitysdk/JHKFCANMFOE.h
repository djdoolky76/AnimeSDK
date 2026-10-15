#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class JHKFCANMFOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHKFCANMFOE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E7477A0)
#define JHKFCANMFOE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E7477B0)
#define JHKFCANMFOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E747AF0)
#define JHKFCANMFOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E747E00)
#define JHKFCANMFOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E747730)
#define JHKFCANMFOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E747700)
#define JHKFCANMFOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7476F0)
#define JHKFCANMFOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7478A0)
#define JHKFCANMFOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7477C0)
#define JHKFCANMFOE_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E747790)
#define JHKFCANMFOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E747970)
#define JHKFCANMFOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7476B0)
#define JHKFCANMFOE_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E747780)
#define JHKFCANMFOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E747C80)
#define JHKFCANMFOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E747C40)
#define JHKFCANMFOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7476E0)
#define JHKFCANMFOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7479A0)
#define JHKFCANMFOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E747A00)

inline static constexpr unsigned int JHKFCANMFOE_TypeDefinitionIndex = 28205;

	class JHKFCANMFOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::ACINIALAFDE CFCAMOAGIDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JHKFCANMFOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHKFCANMFOE*>**)UnitySDK::FromName("", "JHKFCANMFOE")->GetStaticField(0x431D0);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHKFCANMFOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHKFCANMFOE*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHKFCANMFOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHKFCANMFOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHKFCANMFOE*>*(*)())((::PBYTE)hIl2Cpp + JHKFCANMFOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHKFCANMFOE* Clone()
		{
			return ((::JHKFCANMFOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + JHKFCANMFOE_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHKFCANMFOE_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHKFCANMFOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHKFCANMFOE*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHKFCANMFOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHKFCANMFOE*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHKFCANMFOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
