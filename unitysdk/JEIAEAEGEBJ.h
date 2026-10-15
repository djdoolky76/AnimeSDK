#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFIPEIGDLLK.h"
#include "unitysdk/System/Object.h"
class GMDHIALLILJ;
class JEIAEAEGEBJ;
class LDJDPENEGNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEIAEAEGEBJ_AGHDCFAOEOC_OFFSET UNITYSDK_OFFSET(0x1E71C370)
#define JEIAEAEGEBJ_BLOBKHFEKCD_OFFSET UNITYSDK_OFFSET(0x1E71C3C0)
#define JEIAEAEGEBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71CA40)
#define JEIAEAEGEBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71CEE0)
#define JEIAEAEGEBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71C320)
#define JEIAEAEGEBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71C210)
#define JEIAEAEGEBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71C200)
#define JEIAEAEGEBJ_EJEDIGANGMA_OFFSET UNITYSDK_OFFSET(0x1E71C3A0)
#define JEIAEAEGEBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71C530)
#define JEIAEAEGEBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71C3F0)
#define JEIAEAEGEBJ_FOJDOLDGFAE_OFFSET UNITYSDK_OFFSET(0x1E71C3B0)
#define JEIAEAEGEBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71C770)
#define JEIAEAEGEBJ_HCBEAIBNFGC_OFFSET UNITYSDK_OFFSET(0x1E71C3E0)
#define JEIAEAEGEBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71C190)
#define JEIAEAEGEBJ_LGOFKNKKFDG_OFFSET UNITYSDK_OFFSET(0x1E71C390)
#define JEIAEAEGEBJ_LNAEFCHFJLI_OFFSET UNITYSDK_OFFSET(0x1E71C3D0)
#define JEIAEAEGEBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71CD90)
#define JEIAEAEGEBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71CC00)
#define JEIAEAEGEBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71C1F0)
#define JEIAEAEGEBJ_PLBBJKICODL_OFFSET UNITYSDK_OFFSET(0x1E71C380)
#define JEIAEAEGEBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71C820)
#define JEIAEAEGEBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71C880)

inline static constexpr unsigned int JEIAEAEGEBJ_TypeDefinitionIndex = 32266;

	class JEIAEAEGEBJ : public ::System::Object
	{
	public:
		::GMDHIALLILJ* OOGJPJNFMHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::LDJDPENEGNH* GLJMHNBLABM; // 0x20
		::System::UInt32 NKEJKCOPBEA; // 0x28
		::PFIPEIGDLLK JEPGDLIEEJG; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEIAEAEGEBJ")->GetStaticField(0x5C640);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEIAEAEGEBJ_JJGHOBBFNJD_OFFSET))();
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
