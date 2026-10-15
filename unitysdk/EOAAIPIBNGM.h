#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAAIPIBNGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOAAIPIBNGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C7AC0)
#define EOAAIPIBNGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7D90)
#define EOAAIPIBNGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C7710)
#define EOAAIPIBNGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C76E0)
#define EOAAIPIBNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C76D0)
#define EOAAIPIBNGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C7880)
#define EOAAIPIBNGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C77A0)
#define EOAAIPIBNGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C7950)
#define EOAAIPIBNGM_GHFDBKCHPDJ_OFFSET UNITYSDK_OFFSET(0x1E2C7790)
#define EOAAIPIBNGM_IEIMHLMOJCL_OFFSET UNITYSDK_OFFSET(0x1E2C7780)
#define EOAAIPIBNGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C7690)
#define EOAAIPIBNGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C7C10)
#define EOAAIPIBNGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C7BD0)
#define EOAAIPIBNGM_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E2C7770)
#define EOAAIPIBNGM_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E2C7760)
#define EOAAIPIBNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C76C0)
#define EOAAIPIBNGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C7980)
#define EOAAIPIBNGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C79E0)

inline static constexpr unsigned int EOAAIPIBNGM_TypeDefinitionIndex = 26711;

	class EOAAIPIBNGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		::System::UInt32 GKHFGLONCCE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EOAAIPIBNGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOAAIPIBNGM*>**)UnitySDK::FromName("", "EOAAIPIBNGM")->GetStaticField(0x45A50);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object NMIPLCBAPKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOAAIPIBNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOAAIPIBNGM*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOAAIPIBNGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOAAIPIBNGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOAAIPIBNGM*>*(*)())((::PBYTE)hIl2Cpp + EOAAIPIBNGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOAAIPIBNGM* Clone()
		{
			return ((::EOAAIPIBNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 IEIMHLMOJCL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_IEIMHLMOJCL_OFFSET))(this);
		}

		::System::Void GHFDBKCHPDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_GHFDBKCHPDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOAAIPIBNGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOAAIPIBNGM*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOAAIPIBNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOAAIPIBNGM*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOAAIPIBNGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
