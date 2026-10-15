#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEINLELLFLF;
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEINLELLFLF_BCCIHNABPPO_OFFSET UNITYSDK_OFFSET(0x1E093D90)
#define CEINLELLFLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0941C0)
#define CEINLELLFLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E094560)
#define CEINLELLFLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E093D40)
#define CEINLELLFLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E093CB0)
#define CEINLELLFLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E093C70)
#define CEINLELLFLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E093EF0)
#define CEINLELLFLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E093DA0)
#define CEINLELLFLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E094010)
#define CEINLELLFLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E093C30)
#define CEINLELLFLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E094390)
#define CEINLELLFLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0942F0)
#define CEINLELLFLF_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E093D70)
#define CEINLELLFLF_NCIMEFKLAFH_OFFSET UNITYSDK_OFFSET(0x1E093D80)
#define CEINLELLFLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E093C60)
#define CEINLELLFLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E094080)
#define CEINLELLFLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0940E0)

inline static constexpr unsigned int CEINLELLFLF_TypeDefinitionIndex = 32255;

	class CEINLELLFLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CBFGBDBJHID; // 0x18
		::System::UInt32 ANCONNKPJHM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CEINLELLFLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEINLELLFLF*>**)UnitySDK::FromName("", "CEINLELLFLF")->GetStaticField(0x10B20);
		}

		static ::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LBKMCGDMNJO*>**)UnitySDK::FromName("", "CEINLELLFLF")->GetStaticField(0x10B28);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object MHJEFNFCLBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEINLELLFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEINLELLFLF*))((::PBYTE)hIl2Cpp + CEINLELLFLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEINLELLFLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEINLELLFLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEINLELLFLF*>*(*)())((::PBYTE)hIl2Cpp + CEINLELLFLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEINLELLFLF* Clone()
		{
			return ((::CEINLELLFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 NCIMEFKLAFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_NCIMEFKLAFH_OFFSET))(this);
		}

		::System::Void BCCIHNABPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEINLELLFLF_BCCIHNABPPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEINLELLFLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEINLELLFLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEINLELLFLF*))((::PBYTE)hIl2Cpp + CEINLELLFLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEINLELLFLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEINLELLFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEINLELLFLF*))((::PBYTE)hIl2Cpp + CEINLELLFLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEINLELLFLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
