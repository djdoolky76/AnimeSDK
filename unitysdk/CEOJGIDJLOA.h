#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMNDBFCBLL.h"
#include "unitysdk/System/Object.h"
class CEOJGIDJLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEOJGIDJLOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06FF30)
#define CEOJGIDJLOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E070190)
#define CEOJGIDJLOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06FB00)
#define CEOJGIDJLOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06FAD0)
#define CEOJGIDJLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06FAC0)
#define CEOJGIDJLOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06FC90)
#define CEOJGIDJLOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06FB90)
#define CEOJGIDJLOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06FE00)
#define CEOJGIDJLOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06FA50)
#define CEOJGIDJLOA_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1E06FB80)
#define CEOJGIDJLOA_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1E06FB70)
#define CEOJGIDJLOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E070030)
#define CEOJGIDJLOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E070000)
#define CEOJGIDJLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06FAB0)
#define CEOJGIDJLOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06FE30)
#define CEOJGIDJLOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06FE90)

inline static constexpr unsigned int CEOJGIDJLOA_TypeDefinitionIndex = 25800;

	class CEOJGIDJLOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HGMNDBFCBLL CPHKLPMPADB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CEOJGIDJLOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEOJGIDJLOA*>**)UnitySDK::FromName("", "CEOJGIDJLOA")->GetStaticField(0x114E0);
		}

		// static const ::System::Object MCCPOKCDGKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEOJGIDJLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOJGIDJLOA*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEOJGIDJLOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEOJGIDJLOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEOJGIDJLOA*>*(*)())((::PBYTE)hIl2Cpp + CEOJGIDJLOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEOJGIDJLOA* Clone()
		{
			return ((::CEOJGIDJLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_CLONE_OFFSET))(this);
		}

		::HGMNDBFCBLL MCKAAMENFCE()
		{
			return ((::HGMNDBFCBLL(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::HGMNDBFCBLL a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGMNDBFCBLL))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEOJGIDJLOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEOJGIDJLOA*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEOJGIDJLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOJGIDJLOA*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEOJGIDJLOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
