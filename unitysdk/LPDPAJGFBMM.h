#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPDPAJGFBMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPDPAJGFBMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C9C30)
#define LPDPAJGFBMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9E50)
#define LPDPAJGFBMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C9880)
#define LPDPAJGFBMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C9850)
#define LPDPAJGFBMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9840)
#define LPDPAJGFBMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C99B0)
#define LPDPAJGFBMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C98E0)
#define LPDPAJGFBMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9C98D0)
#define LPDPAJGFBMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C9B20)
#define LPDPAJGFBMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C9800)
#define LPDPAJGFBMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C9CF0)
#define LPDPAJGFBMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C9CC0)
#define LPDPAJGFBMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9C98C0)
#define LPDPAJGFBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9830)
#define LPDPAJGFBMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C9B50)
#define LPDPAJGFBMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C9BB0)

inline static constexpr unsigned int LPDPAJGFBMM_TypeDefinitionIndex = 33290;

	class LPDPAJGFBMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPDPAJGFBMM")->GetStaticField(0x41010);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPDPAJGFBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPDPAJGFBMM*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPDPAJGFBMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPDPAJGFBMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPDPAJGFBMM* Clone()
		{
			return ((::LPDPAJGFBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPDPAJGFBMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPDPAJGFBMM*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPDPAJGFBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPDPAJGFBMM*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPDPAJGFBMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
