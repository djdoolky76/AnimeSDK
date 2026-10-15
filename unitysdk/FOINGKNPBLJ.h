#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOINGKNPBLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOINGKNPBLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FBBA0)
#define FOINGKNPBLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FBDC0)
#define FOINGKNPBLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FB7F0)
#define FOINGKNPBLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FB7C0)
#define FOINGKNPBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FB7B0)
#define FOINGKNPBLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FB920)
#define FOINGKNPBLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FB850)
#define FOINGKNPBLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FBA90)
#define FOINGKNPBLJ_IAHPMMCNAHF_OFFSET UNITYSDK_OFFSET(0x1E3FB830)
#define FOINGKNPBLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FB770)
#define FOINGKNPBLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FBC60)
#define FOINGKNPBLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FBC30)
#define FOINGKNPBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FB7A0)
#define FOINGKNPBLJ_PNOBGLEHPPO_OFFSET UNITYSDK_OFFSET(0x1E3FB840)
#define FOINGKNPBLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FBAC0)
#define FOINGKNPBLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FBB20)

inline static constexpr unsigned int FOINGKNPBLJ_TypeDefinitionIndex = 33258;

	class FOINGKNPBLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKMLFMFKHGM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FOINGKNPBLJ")->GetStaticField(0x65FE0);
		}

		// static const ::System::Object PMMGMKNIEKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOINGKNPBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOINGKNPBLJ*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOINGKNPBLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FOINGKNPBLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOINGKNPBLJ* Clone()
		{
			return ((::FOINGKNPBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 IAHPMMCNAHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_IAHPMMCNAHF_OFFSET))(this);
		}

		::System::Void PNOBGLEHPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_PNOBGLEHPPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOINGKNPBLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOINGKNPBLJ*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOINGKNPBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOINGKNPBLJ*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOINGKNPBLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
