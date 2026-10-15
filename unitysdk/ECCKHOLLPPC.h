#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECCKHOLLPPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECCKHOLLPPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E21F250)
#define ECCKHOLLPPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21F610)
#define ECCKHOLLPPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E21EC90)
#define ECCKHOLLPPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E21EBF0)
#define ECCKHOLLPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21EBA0)
#define ECCKHOLLPPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E21EE00)
#define ECCKHOLLPPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E21ED50)
#define ECCKHOLLPPC_FCOPFGFBJKN_OFFSET UNITYSDK_OFFSET(0x1E21ECF0)
#define ECCKHOLLPPC_FDKDKFFPMBK_OFFSET UNITYSDK_OFFSET(0x1E21ECE0)
#define ECCKHOLLPPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E21EF10)
#define ECCKHOLLPPC_HHLEPFCDNHN_OFFSET UNITYSDK_OFFSET(0x1E21ED30)
#define ECCKHOLLPPC_HNIGPKEECAE_OFFSET UNITYSDK_OFFSET(0x1E21ED10)
#define ECCKHOLLPPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E21EB30)
#define ECCKHOLLPPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E21F510)
#define ECCKHOLLPPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E21F4A0)
#define ECCKHOLLPPC_MKIDHCDIOCJ_OFFSET UNITYSDK_OFFSET(0x1E21ED40)
#define ECCKHOLLPPC_ODBCLGDKOFM_OFFSET UNITYSDK_OFFSET(0x1E21ED00)
#define ECCKHOLLPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E21EB90)
#define ECCKHOLLPPC_PGGMGJJGBDG_OFFSET UNITYSDK_OFFSET(0x1E21ED20)
#define ECCKHOLLPPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E21F030)
#define ECCKHOLLPPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E21F090)

inline static constexpr unsigned int ECCKHOLLPPC_TypeDefinitionIndex = 25199;

	class ECCKHOLLPPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HGEJOEKDANK; // 0x18
		::System::UInt64 KOODAEIBNNF; // 0x20
		::System::UInt32 CIFEGFBGDNB; // 0x28
		::System::UInt32 OCHKJGFHCLC; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NNFIONJNAPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ECCKHOLLPPC")->GetStaticField(0x41F10);
		}

		static ::Google::Protobuf::MessageParser_1<::ECCKHOLLPPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECCKHOLLPPC*>**)UnitySDK::FromName("", "ECCKHOLLPPC")->GetStaticField(0x41F18);
		}

		// static const ::System::Object LNLFHMMLCEI; // 0x0
		// static const ::System::Object EPHDHCDELFA; // 0x0
		// static const ::System::Object JICOMNMICGN; // 0x0
		// static const ::System::Object LJILHBMNCAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECCKHOLLPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKHOLLPPC*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECCKHOLLPPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECCKHOLLPPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECCKHOLLPPC*>*(*)())((::PBYTE)hIl2Cpp + ECCKHOLLPPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECCKHOLLPPC* Clone()
		{
			return ((::ECCKHOLLPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_CLONE_OFFSET))(this);
		}

		::System::UInt64 FDKDKFFPMBK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_FDKDKFFPMBK_OFFSET))(this);
		}

		::System::Void FCOPFGFBJKN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_FCOPFGFBJKN_OFFSET))(this, a1);
		}

		::System::UInt32 ODBCLGDKOFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_ODBCLGDKOFM_OFFSET))(this);
		}

		::System::Void HNIGPKEECAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_HNIGPKEECAE_OFFSET))(this, a1);
		}

		::System::UInt32 PGGMGJJGBDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_PGGMGJJGBDG_OFFSET))(this);
		}

		::System::Void HHLEPFCDNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_HHLEPFCDNHN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKIDHCDIOCJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_MKIDHCDIOCJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECCKHOLLPPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECCKHOLLPPC*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECCKHOLLPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKHOLLPPC*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECCKHOLLPPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
