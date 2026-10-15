#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCNDCKCIPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLCNDCKCIPC_BEKKEMFPFGI_OFFSET UNITYSDK_OFFSET(0x1E1B2DC0)
#define DLCNDCKCIPC_BNMLFELEEIM_OFFSET UNITYSDK_OFFSET(0x1E1B2DA0)
#define DLCNDCKCIPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B31A0)
#define DLCNDCKCIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3400)
#define DLCNDCKCIPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E199BF0)
#define DLCNDCKCIPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B2CD0)
#define DLCNDCKCIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19B570)
#define DLCNDCKCIPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B2E70)
#define DLCNDCKCIPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B2DE0)
#define DLCNDCKCIPC_FPNAINDPMLO_OFFSET UNITYSDK_OFFSET(0x1E1B2DB0)
#define DLCNDCKCIPC_GBJBFIJNMOA_OFFSET UNITYSDK_OFFSET(0x1E1B2D90)
#define DLCNDCKCIPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E19A620)
#define DLCNDCKCIPC_GNMHMOJFNOI_OFFSET UNITYSDK_OFFSET(0x1E1B2DD0)
#define DLCNDCKCIPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B2C90)
#define DLCNDCKCIPC_KKFLDAEAFPJ_OFFSET UNITYSDK_OFFSET(0x1E1B2D70)
#define DLCNDCKCIPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B3300)
#define DLCNDCKCIPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E19B5C0)
#define DLCNDCKCIPC_NDECGLPJDBO_OFFSET UNITYSDK_OFFSET(0x1E1B2D80)
#define DLCNDCKCIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B2CC0)
#define DLCNDCKCIPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B2F80)
#define DLCNDCKCIPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B2FE0)

inline static constexpr unsigned int DLCNDCKCIPC_TypeDefinitionIndex = 27315;

	class DLCNDCKCIPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGNDMKKKHLN; // 0x18
		::System::UInt32 GPEGBIIDKHI; // 0x20
		::System::Boolean AEKIJMGMLIN; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 GHFOFBFELLK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MCPPDDPMHNC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DLCNDCKCIPC")->GetStaticField(0x34B70);
		}

		static ::Google::Protobuf::MessageParser_1<::DLCNDCKCIPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLCNDCKCIPC*>**)UnitySDK::FromName("", "DLCNDCKCIPC")->GetStaticField(0x34B78);
		}

		// static const ::System::Object BLLEKPOPBDM; // 0x0
		// static const ::System::Object DLBKLKMAGDH; // 0x0
		// static const ::System::Object FFOHGJLPOIH; // 0x0
		// static const ::System::Object KNDBBADBBEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLCNDCKCIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLCNDCKCIPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLCNDCKCIPC*>*(*)())((::PBYTE)hIl2Cpp + DLCNDCKCIPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLCNDCKCIPC* Clone()
		{
			return ((::DLCNDCKCIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CLONE_OFFSET))(this);
		}

		::System::Boolean KKFLDAEAFPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_KKFLDAEAFPJ_OFFSET))(this);
		}

		::System::Void NDECGLPJDBO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_NDECGLPJDBO_OFFSET))(this, a1);
		}

		::System::UInt32 GBJBFIJNMOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GBJBFIJNMOA_OFFSET))(this);
		}

		::System::Void BNMLFELEEIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_BNMLFELEEIM_OFFSET))(this, a1);
		}

		::System::UInt32 FPNAINDPMLO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_FPNAINDPMLO_OFFSET))(this);
		}

		::System::Void BEKKEMFPFGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_BEKKEMFPFGI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNMHMOJFNOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GNMHMOJFNOI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLCNDCKCIPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLCNDCKCIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
