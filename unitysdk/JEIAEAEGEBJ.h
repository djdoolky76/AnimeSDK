#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFIPEIGDLLK.h"
#include "unitysdk/System/Object.h"
class GMDHIALLILJ;
class JEIAEAEGEBJ;
class LDJDPENEGNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEIAEAEGEBJ_AGHDCFAOEOC_OFFSET UNITYSDK_OFFSET(0x1E6EED40)
#define JEIAEAEGEBJ_BLOBKHFEKCD_OFFSET UNITYSDK_OFFSET(0x1E6EED90)
#define JEIAEAEGEBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EF410)
#define JEIAEAEGEBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EF8B0)
#define JEIAEAEGEBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EECF0)
#define JEIAEAEGEBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EEBE0)
#define JEIAEAEGEBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EEBD0)
#define JEIAEAEGEBJ_EJEDIGANGMA_OFFSET UNITYSDK_OFFSET(0x1E6EED70)
#define JEIAEAEGEBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EEF00)
#define JEIAEAEGEBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EEDC0)
#define JEIAEAEGEBJ_FOJDOLDGFAE_OFFSET UNITYSDK_OFFSET(0x1E6EED80)
#define JEIAEAEGEBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EF140)
#define JEIAEAEGEBJ_HCBEAIBNFGC_OFFSET UNITYSDK_OFFSET(0x1E6EEDB0)
#define JEIAEAEGEBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EEB60)
#define JEIAEAEGEBJ_LGOFKNKKFDG_OFFSET UNITYSDK_OFFSET(0x1E6EED60)
#define JEIAEAEGEBJ_LNAEFCHFJLI_OFFSET UNITYSDK_OFFSET(0x1E6EEDA0)
#define JEIAEAEGEBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6EF760)
#define JEIAEAEGEBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6EF5D0)
#define JEIAEAEGEBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EEBC0)
#define JEIAEAEGEBJ_PLBBJKICODL_OFFSET UNITYSDK_OFFSET(0x1E6EED50)
#define JEIAEAEGEBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EF1F0)
#define JEIAEAEGEBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EF250)

inline static constexpr unsigned int JEIAEAEGEBJ_TypeDefinitionIndex = 32266;

	class JEIAEAEGEBJ : public ::System::Object
	{
	public:
		::GMDHIALLILJ* OOGJPJNFMHG; // 0x10
		::LDJDPENEGNH* GLJMHNBLABM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::PFIPEIGDLLK JEPGDLIEEJG; // 0x28
		::System::UInt32 NKEJKCOPBEA; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::JEIAEAEGEBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEIAEAEGEBJ*>**)UnitySDK::FromName("", "JEIAEAEGEBJ")->GetStaticField(0x533D0);
		}

		// static const ::System::Object HCPJIHCELIM; // 0x0
		// static const ::System::Object MIFCELFJDFI; // 0x0
		// static const ::System::Object DALPLPAJNEM; // 0x0
		// static const ::System::Object KOIAILIFEHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEIAEAEGEBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIAEAEGEBJ*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEIAEAEGEBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEIAEAEGEBJ*>*(*)())((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEIAEAEGEBJ* Clone()
		{
			return ((::JEIAEAEGEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_CLONE_OFFSET))(this);
		}

		::LDJDPENEGNH* AGHDCFAOEOC()
		{
			return ((::LDJDPENEGNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_AGHDCFAOEOC_OFFSET))(this);
		}

		::System::Void PLBBJKICODL(::LDJDPENEGNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJDPENEGNH*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_PLBBJKICODL_OFFSET))(this, a1);
		}

		::System::UInt32 LGOFKNKKFDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_LGOFKNKKFDG_OFFSET))(this);
		}

		::System::Void EJEDIGANGMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_EJEDIGANGMA_OFFSET))(this, a1);
		}

		::PFIPEIGDLLK FOJDOLDGFAE()
		{
			return ((::PFIPEIGDLLK(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_FOJDOLDGFAE_OFFSET))(this);
		}

		::System::Void BLOBKHFEKCD(::PFIPEIGDLLK a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFIPEIGDLLK))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_BLOBKHFEKCD_OFFSET))(this, a1);
		}

		::GMDHIALLILJ* LNAEFCHFJLI()
		{
			return ((::GMDHIALLILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_LNAEFCHFJLI_OFFSET))(this);
		}

		::System::Void HCBEAIBNFGC(::GMDHIALLILJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMDHIALLILJ*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_HCBEAIBNFGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEIAEAEGEBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEIAEAEGEBJ*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEIAEAEGEBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIAEAEGEBJ*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
