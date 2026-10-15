#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMCKLEMOMP;
class OKFPPPBNJNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKFPPPBNJNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6B2A0)
#define OKFPPPBNJNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B570)
#define OKFPPPBNJNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6AC80)
#define OKFPPPBNJNH_CODEMDIJDDI_OFFSET UNITYSDK_OFFSET(0x1DE6AD10)
#define OKFPPPBNJNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6AC10)
#define OKFPPPBNJNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6AC00)
#define OKFPPPBNJNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6AE90)
#define OKFPPPBNJNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6AD20)
#define OKFPPPBNJNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6B160)
#define OKFPPPBNJNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6ABC0)
#define OKFPPPBNJNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6B3A0)
#define OKFPPPBNJNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6B300)
#define OKFPPPBNJNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6ABF0)
#define OKFPPPBNJNH_PNMFHKDBJMM_OFFSET UNITYSDK_OFFSET(0x1DE6AD00)
#define OKFPPPBNJNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6B1B0)
#define OKFPPPBNJNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6B210)

inline static constexpr unsigned int OKFPPPBNJNH_TypeDefinitionIndex = 33061;

	class OKFPPPBNJNH : public ::System::Object
	{
	public:
		::OFMCKLEMOMP* AJCJMNPJCOJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OKFPPPBNJNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKFPPPBNJNH*>**)UnitySDK::FromName("", "OKFPPPBNJNH")->GetStaticField(0x1F190);
		}

		// static const ::System::Object HDBOFDMMOKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKFPPPBNJNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFPPPBNJNH*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKFPPPBNJNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKFPPPBNJNH*>*(*)())((::PBYTE)hIl2Cpp + OKFPPPBNJNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKFPPPBNJNH* Clone()
		{
			return ((::OKFPPPBNJNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CLONE_OFFSET))(this);
		}

		::OFMCKLEMOMP* PNMFHKDBJMM()
		{
			return ((::OFMCKLEMOMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_PNMFHKDBJMM_OFFSET))(this);
		}

		::System::Void CODEMDIJDDI(::OFMCKLEMOMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMCKLEMOMP*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CODEMDIJDDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKFPPPBNJNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKFPPPBNJNH*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKFPPPBNJNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFPPPBNJNH*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKFPPPBNJNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
