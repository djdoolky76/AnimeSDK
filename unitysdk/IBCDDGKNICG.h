#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLNJKGOGKKL;
class IBCDDGKNICG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBCDDGKNICG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60FC10)
#define IBCDDGKNICG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60FF00)
#define IBCDDGKNICG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60F5C0)
#define IBCDDGKNICG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60F530)
#define IBCDDGKNICG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60F520)
#define IBCDDGKNICG_EEFHFCKLDFM_OFFSET UNITYSDK_OFFSET(0x1E60F690)
#define IBCDDGKNICG_EINDKLKFAJP_OFFSET UNITYSDK_OFFSET(0x1E60F6C0)
#define IBCDDGKNICG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60F890)
#define IBCDDGKNICG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60F6D0)
#define IBCDDGKNICG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60FA10)
#define IBCDDGKNICG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E60F4B0)
#define IBCDDGKNICG_KMKKLNLACKM_OFFSET UNITYSDK_OFFSET(0x1E60F6B0)
#define IBCDDGKNICG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60FD30)
#define IBCDDGKNICG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60FC70)
#define IBCDDGKNICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60F510)
#define IBCDDGKNICG_PPIEACHMBDB_OFFSET UNITYSDK_OFFSET(0x1E60F6A0)
#define IBCDDGKNICG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60FAA0)
#define IBCDDGKNICG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60FB00)

inline static constexpr unsigned int IBCDDGKNICG_TypeDefinitionIndex = 32159;

	class IBCDDGKNICG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GLNJKGOGKKL* AKGEBKGKNJM; // 0x18
		::System::Boolean BPBLFNEPPOK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IBCDDGKNICG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBCDDGKNICG*>**)UnitySDK::FromName("", "IBCDDGKNICG")->GetStaticField(0x40AD0);
		}

		// static const ::System::Object KOCLDECMNDE; // 0x0
		// static const ::System::Object FFIPAGDOGPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBCDDGKNICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDDGKNICG*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCDDGKNICG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBCDDGKNICG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBCDDGKNICG*>*(*)())((::PBYTE)hIl2Cpp + IBCDDGKNICG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBCDDGKNICG* Clone()
		{
			return ((::IBCDDGKNICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_CLONE_OFFSET))(this);
		}

		::GLNJKGOGKKL* EEFHFCKLDFM()
		{
			return ((::GLNJKGOGKKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_EEFHFCKLDFM_OFFSET))(this);
		}

		::System::Void PPIEACHMBDB(::GLNJKGOGKKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_PPIEACHMBDB_OFFSET))(this, a1);
		}

		::System::Boolean KMKKLNLACKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_KMKKLNLACKM_OFFSET))(this);
		}

		::System::Void EINDKLKFAJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBCDDGKNICG_EINDKLKFAJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBCDDGKNICG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBCDDGKNICG*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBCDDGKNICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDDGKNICG*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBCDDGKNICG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
