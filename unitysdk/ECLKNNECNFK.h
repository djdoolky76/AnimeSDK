#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLKNNECNFK;
class PPGEBEBPMJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECLKNNECNFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E227CD0)
#define ECLKNNECNFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E227F80)
#define ECLKNNECNFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E227600)
#define ECLKNNECNFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E227560)
#define ECLKNNECNFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E227550)
#define ECLKNNECNFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2278B0)
#define ECLKNNECNFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E227710)
#define ECLKNNECNFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E227B80)
#define ECLKNNECNFK_HCPPOMBDMJN_OFFSET UNITYSDK_OFFSET(0x1E227700)
#define ECLKNNECNFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2274E0)
#define ECLKNNECNFK_JNLDIPIKKMO_OFFSET UNITYSDK_OFFSET(0x1E2276F0)
#define ECLKNNECNFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E227DF0)
#define ECLKNNECNFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E227D30)
#define ECLKNNECNFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E227540)
#define ECLKNNECNFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E227BE0)
#define ECLKNNECNFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E227C40)

inline static constexpr unsigned int ECLKNNECNFK_TypeDefinitionIndex = 29340;

	class ECLKNNECNFK : public ::System::Object
	{
	public:
		::PPGEBEBPMJC* ACBIEJKAEKF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ECLKNNECNFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECLKNNECNFK*>**)UnitySDK::FromName("", "ECLKNNECNFK")->GetStaticField(0x42A70);
		}

		// static const ::System::Object HMNPPAGPAJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECLKNNECNFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLKNNECNFK*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLKNNECNFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECLKNNECNFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECLKNNECNFK*>*(*)())((::PBYTE)hIl2Cpp + ECLKNNECNFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECLKNNECNFK* Clone()
		{
			return ((::ECLKNNECNFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_CLONE_OFFSET))(this);
		}

		::PPGEBEBPMJC* JNLDIPIKKMO()
		{
			return ((::PPGEBEBPMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_JNLDIPIKKMO_OFFSET))(this);
		}

		::System::Void HCPPOMBDMJN(::PPGEBEBPMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGEBEBPMJC*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_HCPPOMBDMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECLKNNECNFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECLKNNECNFK*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECLKNNECNFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLKNNECNFK*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECLKNNECNFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
