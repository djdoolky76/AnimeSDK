#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHDHGGCAJJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHDHGGCAJJL_AIAKMLHHCOO_OFFSET UNITYSDK_OFFSET(0x1E559600)
#define HHDHGGCAJJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5599D0)
#define HHDHGGCAJJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E559B90)
#define HHDHGGCAJJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5595B0)
#define HHDHGGCAJJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E559580)
#define HHDHGGCAJJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559570)
#define HHDHGGCAJJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E559700)
#define HHDHGGCAJJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E559620)
#define HHDHGGCAJJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E559880)
#define HHDHGGCAJJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E559530)
#define HHDHGGCAJJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E559A30)
#define HHDHGGCAJJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E559A00)
#define HHDHGGCAJJL_NCEIEDNBLNC_OFFSET UNITYSDK_OFFSET(0x1E559610)
#define HHDHGGCAJJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E559560)
#define HHDHGGCAJJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5598B0)
#define HHDHGGCAJJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E559910)

inline static constexpr unsigned int HHDHGGCAJJL_TypeDefinitionIndex = 34895;

	class HHDHGGCAJJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean PHEJMIEIMAL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HHDHGGCAJJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHDHGGCAJJL*>**)UnitySDK::FromName("", "HHDHGGCAJJL")->GetStaticField(0x31D10);
		}

		// static const ::System::Object LCGLCJPILAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHDHGGCAJJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHDHGGCAJJL*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHDHGGCAJJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHDHGGCAJJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHDHGGCAJJL*>*(*)())((::PBYTE)hIl2Cpp + HHDHGGCAJJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHDHGGCAJJL* Clone()
		{
			return ((::HHDHGGCAJJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_CLONE_OFFSET))(this);
		}

		::System::Boolean AIAKMLHHCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_AIAKMLHHCOO_OFFSET))(this);
		}

		::System::Void NCEIEDNBLNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_NCEIEDNBLNC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHDHGGCAJJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHDHGGCAJJL*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHDHGGCAJJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHDHGGCAJJL*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHDHGGCAJJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
