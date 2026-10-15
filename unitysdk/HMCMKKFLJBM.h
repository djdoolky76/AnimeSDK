#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class HMCMKKFLJBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMCMKKFLJBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59E6E0)
#define HMCMKKFLJBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59E9F0)
#define HMCMKKFLJBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59E2C0)
#define HMCMKKFLJBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59E210)
#define HMCMKKFLJBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59E1C0)
#define HMCMKKFLJBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59E440)
#define HMCMKKFLJBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59E300)
#define HMCMKKFLJBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59E560)
#define HMCMKKFLJBM_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E59E2F0)
#define HMCMKKFLJBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59E180)
#define HMCMKKFLJBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59E820)
#define HMCMKKFLJBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59E780)
#define HMCMKKFLJBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59E1B0)
#define HMCMKKFLJBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59E5D0)
#define HMCMKKFLJBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59E630)

inline static constexpr unsigned int HMCMKKFLJBM_TypeDefinitionIndex = 26400;

	class HMCMKKFLJBM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HNOHHOEPFHC>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HMCMKKFLJBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMCMKKFLJBM*>**)UnitySDK::FromName("", "HMCMKKFLJBM")->GetStaticField(0x39770);
		}

		static ::Google::Protobuf::FieldCodec_1<::HNOHHOEPFHC>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::HNOHHOEPFHC>**)UnitySDK::FromName("", "HMCMKKFLJBM")->GetStaticField(0x39778);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMCMKKFLJBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMCMKKFLJBM*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMCMKKFLJBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMCMKKFLJBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMCMKKFLJBM*>*(*)())((::PBYTE)hIl2Cpp + HMCMKKFLJBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMCMKKFLJBM* Clone()
		{
			return ((::HMCMKKFLJBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNOHHOEPFHC>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNOHHOEPFHC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMCMKKFLJBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMCMKKFLJBM*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMCMKKFLJBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMCMKKFLJBM*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMCMKKFLJBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
