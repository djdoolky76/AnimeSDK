#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCMAKEBBBDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCMAKEBBBDL_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F90AEB0)
#define LCMAKEBBBDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F90B360)
#define LCMAKEBBBDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F90B6A0)
#define LCMAKEBBBDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F90AE50)
#define LCMAKEBBBDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F90ADC0)
#define LCMAKEBBBDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F90AD70)
#define LCMAKEBBBDL_EJFPONOHGKE_OFFSET UNITYSDK_OFFSET(0x1F90AEC0)
#define LCMAKEBBBDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F90B000)
#define LCMAKEBBBDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F90AED0)
#define LCMAKEBBBDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F90B0F0)
#define LCMAKEBBBDL_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F90AEA0)
#define LCMAKEBBBDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F90AD00)
#define LCMAKEBBBDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F90B4C0)
#define LCMAKEBBBDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F90B470)
#define LCMAKEBBBDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F90AD60)
#define LCMAKEBBBDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F90B1F0)
#define LCMAKEBBBDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F90B250)

inline static constexpr unsigned int LCMAKEBBBDL_TypeDefinitionIndex = 29772;

	class LCMAKEBBBDL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DALCLCFJOIA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGIBOFOAGFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LCMAKEBBBDL")->GetStaticField(0x2B490);
		}

		static ::Google::Protobuf::MessageParser_1<::LCMAKEBBBDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCMAKEBBBDL*>**)UnitySDK::FromName("", "LCMAKEBBBDL")->GetStaticField(0x2B498);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object NIOGHALIFIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCMAKEBBBDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCMAKEBBBDL*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCMAKEBBBDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCMAKEBBBDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCMAKEBBBDL*>*(*)())((::PBYTE)hIl2Cpp + LCMAKEBBBDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCMAKEBBBDL* Clone()
		{
			return ((::LCMAKEBBBDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJFPONOHGKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_EJFPONOHGKE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCMAKEBBBDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCMAKEBBBDL*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCMAKEBBBDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCMAKEBBBDL*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCMAKEBBBDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
