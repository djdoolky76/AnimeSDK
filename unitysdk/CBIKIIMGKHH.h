#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class CBIKIIMGKHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBIKIIMGKHH_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E03D060)
#define CBIKIIMGKHH_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E03D070)
#define CBIKIIMGKHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03D3E0)
#define CBIKIIMGKHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03D6F0)
#define CBIKIIMGKHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03CFD0)
#define CBIKIIMGKHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03CFA0)
#define CBIKIIMGKHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03CF90)
#define CBIKIIMGKHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03D190)
#define CBIKIIMGKHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03D080)
#define CBIKIIMGKHH_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E03D050)
#define CBIKIIMGKHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03D260)
#define CBIKIIMGKHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03CF20)
#define CBIKIIMGKHH_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E03D040)
#define CBIKIIMGKHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03D570)
#define CBIKIIMGKHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03D530)
#define CBIKIIMGKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03CF80)
#define CBIKIIMGKHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03D290)
#define CBIKIIMGKHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03D2F0)

inline static constexpr unsigned int CBIKIIMGKHH_TypeDefinitionIndex = 34613;

	class CBIKIIMGKHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CBIKIIMGKHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBIKIIMGKHH*>**)UnitySDK::FromName("", "CBIKIIMGKHH")->GetStaticField(0xB6D0);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBIKIIMGKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBIKIIMGKHH*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBIKIIMGKHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBIKIIMGKHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBIKIIMGKHH*>*(*)())((::PBYTE)hIl2Cpp + CBIKIIMGKHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBIKIIMGKHH* Clone()
		{
			return ((::CBIKIIMGKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBIKIIMGKHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBIKIIMGKHH*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBIKIIMGKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBIKIIMGKHH*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBIKIIMGKHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
