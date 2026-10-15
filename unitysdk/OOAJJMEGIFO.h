#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class OOAJJMEGIFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOAJJMEGIFO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DEA7790)
#define OOAJJMEGIFO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DEA77A0)
#define OOAJJMEGIFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA7B10)
#define OOAJJMEGIFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA7E20)
#define OOAJJMEGIFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA7700)
#define OOAJJMEGIFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA76D0)
#define OOAJJMEGIFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA76C0)
#define OOAJJMEGIFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA78C0)
#define OOAJJMEGIFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA77B0)
#define OOAJJMEGIFO_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1DEA7780)
#define OOAJJMEGIFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA7990)
#define OOAJJMEGIFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA7650)
#define OOAJJMEGIFO_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1DEA7770)
#define OOAJJMEGIFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA7CA0)
#define OOAJJMEGIFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA7C60)
#define OOAJJMEGIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA76B0)
#define OOAJJMEGIFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA79C0)
#define OOAJJMEGIFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA7A20)

inline static constexpr unsigned int OOAJJMEGIFO_TypeDefinitionIndex = 34319;

	class OOAJJMEGIFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OOAJJMEGIFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOAJJMEGIFO*>**)UnitySDK::FromName("", "OOAJJMEGIFO")->GetStaticField(0x260F0);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOAJJMEGIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOAJJMEGIFO*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOAJJMEGIFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOAJJMEGIFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOAJJMEGIFO*>*(*)())((::PBYTE)hIl2Cpp + OOAJJMEGIFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOAJJMEGIFO* Clone()
		{
			return ((::OOAJJMEGIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOAJJMEGIFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOAJJMEGIFO*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOAJJMEGIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOAJJMEGIFO*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOAJJMEGIFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
