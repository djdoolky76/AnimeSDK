#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLDICEFCIL;
class HKFJNFGBGPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKFJNFGBGPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B11A0)
#define HKFJNFGBGPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B1520)
#define HKFJNFGBGPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B0CF0)
#define HKFJNFGBGPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B0C30)
#define HKFJNFGBGPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B0BE0)
#define HKFJNFGBGPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B0EA0)
#define HKFJNFGBGPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B0D50)
#define HKFJNFGBGPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B0FD0)
#define HKFJNFGBGPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B0BA0)
#define HKFJNFGBGPL_KGJFEHFNPBK_OFFSET UNITYSDK_OFFSET(0x1E5B0D40)
#define HKFJNFGBGPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B1350)
#define HKFJNFGBGPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B12B0)
#define HKFJNFGBGPL_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E5B0D30)
#define HKFJNFGBGPL_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E5B0D20)
#define HKFJNFGBGPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B0BD0)
#define HKFJNFGBGPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B1040)
#define HKFJNFGBGPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B10A0)

inline static constexpr unsigned int HKFJNFGBGPL_TypeDefinitionIndex = 26707;

	class HKFJNFGBGPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>* MLJLKLEGOJC; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::AKLDICEFCIL*>** StaticGet_BKNKGIECAFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::AKLDICEFCIL*>**)UnitySDK::FromName("", "HKFJNFGBGPL")->GetStaticField(0x44FB0);
		}

		static ::Google::Protobuf::MessageParser_1<::HKFJNFGBGPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKFJNFGBGPL*>**)UnitySDK::FromName("", "HKFJNFGBGPL")->GetStaticField(0x44FB8);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object LDJIFNOGOFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKFJNFGBGPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKFJNFGBGPL*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKFJNFGBGPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKFJNFGBGPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKFJNFGBGPL*>*(*)())((::PBYTE)hIl2Cpp + HKFJNFGBGPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKFJNFGBGPL* Clone()
		{
			return ((::HKFJNFGBGPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>* KGJFEHFNPBK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKLDICEFCIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_KGJFEHFNPBK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKFJNFGBGPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKFJNFGBGPL*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKFJNFGBGPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKFJNFGBGPL*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKFJNFGBGPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
